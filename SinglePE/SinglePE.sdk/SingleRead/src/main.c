#include "xparameters.h"
#include "xaxidma.h"
#include "xscutimer.h"
#include "xneedlemanwunsch.h"
#include "xil_printf.h"

// Defines ref_genome and reads, which have been pre-processed into a binary
// format
#include "data.h"

#define DMA_DEV_ID      XPAR_AXI_DMA_0_DEVICE_ID
#define PE_DEV_ID       XPAR_XNEEDLEMANWUNSCH_0_DEVICE_ID

#define BRAM_DEV_ID     XPAR_BRAM_0_DEVICE_ID
#define BRAM_ADDR       XPAR_BRAM_0_BASEADDR

#define TIMER_DEV_ID   	XPAR_XSCUTIMER_0_DEVICE_ID
#define TIMER_MAX       0xFFFFFFFF
#define TIMER_PRESCALE  1
#define TIMER_PERIOD    3.0e-9 // 333.3MHz = 3 nanoseconds

XAxiDma AxiDma;
XScuTimer Timer;		/* Cortex A9 SCU Private Timer Instance */
XNeedlemanwunsch PE;

void print_time(u32 start_time, u32 end_time);
int DMA_send(void);
void DMA_wait(void);
int DMA_init(u16 DeviceId);
int Timer_init(u16 DeviceId);

int main(void) {
    xil_printf("Starting\r\n");

    int Status;
    u32 start_time;
    u32 end_time;

    // Initialize DMA
    Status = DMA_init(DMA_DEV_ID);
    if (Status != XST_SUCCESS) {
        xil_printf("XAxiDma_init: Failed %d\r\n", Status);
        return XST_FAILURE;
    }

    // Initialize PE
    Status = XNeedlemanwunsch_Initialize(&PE, PE_DEV_ID);
    if (Status != XST_SUCCESS) {
        xil_printf("XNeedlemanwunsch_Initialize: Failed %d\r\n", Status);
        return XST_FAILURE;
    }

    // Initialize timer with maximum value so we can see how far down it
    // goes. It should last about 12 seconds before hitting zero.
    Timer_init(TIMER_DEV_ID);
    XScuTimer_LoadTimer(&Timer, TIMER_MAX);
    XScuTimer_SetPrescaler(&Timer, TIMER_PRESCALE-1);
    start_time = TIMER_MAX;

    // Flush caches
    Xil_DCacheFlushRange((INTPTR)&ref_genome, sizeof(ref_genome));

    XScuTimer_Start(&Timer);

    // TODO try single read

    XScuTimer_Stop(&Timer);
    end_time = XScuTimer_GetCounterValue(&Timer);

    // TODO read result, check correctness

    print_time(start_time, end_time);

    xil_printf("Done\r\n");
    return 0;
}

void print_time(u32 start_time, u32 end_time) {
	u32 length = start_time - end_time;
	float time = length * TIMER_PERIOD;
	xil_printf("Time: %g seconds", time);
}

int DMA_send(void) {
    int Status;

    Status = XAxiDma_SimpleTransfer(&AxiDma,(u32)&ref_genome[0],
            sizeof(ref_genome), XAXIDMA_DMA_TO_DEVICE);

    if (Status != XST_SUCCESS) {
        xil_printf("DMA_send failed: %d\r\n", Status);
        return XST_FAILURE;
    }

    return XST_SUCCESS;
}

void DMA_wait(void) {
    while (XAxiDma_Busy(&AxiDma,XAXIDMA_DMA_TO_DEVICE)) {
        /* Wait */
    }
}

int DMA_init(u16 DeviceId) {
    XAxiDma_Config *CfgPtr;
    int Status;

    CfgPtr = XAxiDma_LookupConfig(DeviceId);
    if (!CfgPtr) {
        xil_printf("No config found for %d\r\n", DeviceId);
        return XST_FAILURE;
    }

    Status = XAxiDma_CfgInitialize(&AxiDma, CfgPtr);
    if (Status != XST_SUCCESS) {
        xil_printf("Initialization failed %d\r\n", Status);
        return XST_FAILURE;
    }

    if(XAxiDma_HasSg(&AxiDma)){
        xil_printf("Device configured as SG mode\r\n");
        return XST_FAILURE;
    }

    /* Disable interrupts, we use polling mode
    */
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
    XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
    return XST_SUCCESS;
}

int Timer_init(u16 DeviceId) {
    XScuTimer_Config *ConfigPtr;
    int Status;

    ConfigPtr = XScuTimer_LookupConfig(DeviceId);
    Status = XScuTimer_CfgInitialize(&Timer, ConfigPtr, ConfigPtr->BaseAddr);
    if (Status != XST_SUCCESS) {
        xil_printf("XScuTimer_CfgInitialize: Failed\r\n");
        return XST_FAILURE;
    }

    return XST_SUCCESS;
}
