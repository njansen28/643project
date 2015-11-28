#include "xparameters.h"
#include "xaxidma.h"
#include "xscutimer.h"
#include "xneedlemanwunsch.h"
#include "xil_printf.h"
#include "xbram.h"

// Defines ref_genome and reads, which have been pre-processed into a binary
// format
#include "data.h"

#define DMA_DEV_ID      XPAR_AXI_DMA_0_DEVICE_ID
#define PE_DEV_ID       XPAR_XNEEDLEMANWUNSCH_0_DEVICE_ID

#define BRAM_DEV_ID     XPAR_BRAM_0_DEVICE_ID
#define BRAM_ADDR       XPAR_BRAM_0_BASEADDR

#define TIMER_DEV_ID   	XPAR_XSCUTIMER_0_DEVICE_ID
#define TIMER_MAX       0xFFFFFFFF
#define TIMER_PRESCALE  256
#define TIMER_PERIOD    3.0e-9 // 333.3MHz = 3 nanoseconds

#define ACTUAL_READS 100
#define READS_PER_RUN 50

XAxiDma AxiDma;
XScuTimer Timer;		/* Cortex A9 SCU Private Timer Instance */
XNeedlemanwunsch PE;

void print_time(u32 start_time, u32 end_time);
int DMA_send(void);
void DMA_wait(void);
int DMA_init(u16 DeviceId);
int Timer_init(u16 DeviceId);
void writeRead(int pe_num, int read_num);

int main(void) {
    xil_printf("Starting\r\n");

    int Status;
    int i,j;
    u32 start_time;
    u32 end_time;
    u32 return_val[ACTUAL_READS];

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

    XNeedlemanwunsch_DisableAutoRestart(&PE);

    // Initialize timer with maximum value so we can see how far down it
    // goes. It should last about 12 seconds before hitting zero.
    Timer_init(TIMER_DEV_ID);
    XScuTimer_LoadTimer(&Timer, TIMER_MAX);
    XScuTimer_SetPrescaler(&Timer, TIMER_PRESCALE-1);
    start_time = TIMER_MAX;

    // Flush caches
    Xil_DCacheFlushRange((INTPTR)&ref_genome, sizeof(ref_genome));

    XScuTimer_Start(&Timer);

    for (i=0; i<ACTUAL_READS; i+=READS_PER_RUN) {
    	DMA_send();
        for (j=0; j<READS_PER_RUN; j++) {
            writeRead(j, i+j);
        }

        if (!XNeedlemanwunsch_IsIdle(&PE)) {
            xil_printf("Not idle, waiting\r\n");
        }
        if (!XNeedlemanwunsch_IsReady(&PE)) {
            xil_printf("Not ready, waiting\r\n");
        }
        while (!XNeedlemanwunsch_IsIdle(&PE) && !XNeedlemanwunsch_IsReady(&PE)) {
        }

        XNeedlemanwunsch_Start(&PE);

        while(!XNeedlemanwunsch_IsDone(&PE)) {
        }

        for (j=0; j<READS_PER_RUN; j++) {
            return_val[i+j] = XBram_In32(XPAR_AXI_BRAM_CTRL_RESULTS_S_AXI_BASEADDR + j*4);
        }
    }

    XScuTimer_Stop(&Timer);
    end_time = XScuTimer_GetCounterValue(&Timer);

	// TODO check correctness
    xil_printf("Done\r\n");
    for (i=0; i<ACTUAL_READS; i++) {
    	xil_printf("read %d best fit at %d\r\n", i, return_val[i]);
    }

    print_time(start_time, end_time);
    return 0;
}

static uint32_t BRAM_BASEADDRS[READS_PER_RUN] = {
    XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_1_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_2_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_3_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_4_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_5_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_6_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_7_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_8_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_9_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_10_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_11_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_12_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_13_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_14_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_15_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_16_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_17_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_18_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_19_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_20_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_21_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_22_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_23_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_24_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_25_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_26_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_27_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_28_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_29_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_30_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_31_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_32_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_33_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_34_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_35_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_36_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_37_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_38_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_39_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_40_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_41_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_42_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_43_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_44_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_45_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_46_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_47_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_48_S_AXI_BASEADDR,
    XPAR_AXI_BRAM_CTRL_49_S_AXI_BASEADDR
};

void writeRead(int pe_num, int read_num) {
	int i;
    uint32_t base = BRAM_BASEADDRS[pe_num];
	for (i=0; i<READ_SIZE/4;i++) {
		XBram_Out32(base + i*4, reads[read_num][i]);
	}
}

void print_time(u32 start_time, u32 end_time) {
	int whole, thousandths;


	u32 length = (u32)(0xFFFFFFFF) - end_time;
	float time = length * TIMER_PERIOD * TIMER_PRESCALE;
	whole = time;
	thousandths = (time - (float)whole)*1000.0;
	xil_printf("Time: %d.%03d seconds\r\n", whole, thousandths);
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
    //XAxiDma_IntrDisable(&AxiDma, XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
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
