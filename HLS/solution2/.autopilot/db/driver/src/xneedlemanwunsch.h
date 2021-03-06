// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef XNEEDLEMANWUNSCH_H
#define XNEEDLEMANWUNSCH_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xneedlemanwunsch_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XNeedlemanwunsch_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XNeedlemanwunsch;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XNeedlemanwunsch_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XNeedlemanwunsch_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XNeedlemanwunsch_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XNeedlemanwunsch_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XNeedlemanwunsch_Initialize(XNeedlemanwunsch *InstancePtr, u16 DeviceId);
XNeedlemanwunsch_Config* XNeedlemanwunsch_LookupConfig(u16 DeviceId);
int XNeedlemanwunsch_CfgInitialize(XNeedlemanwunsch *InstancePtr, XNeedlemanwunsch_Config *ConfigPtr);
#else
int XNeedlemanwunsch_Initialize(XNeedlemanwunsch *InstancePtr, const char* InstanceName);
int XNeedlemanwunsch_Release(XNeedlemanwunsch *InstancePtr);
#endif

void XNeedlemanwunsch_Start(XNeedlemanwunsch *InstancePtr);
u32 XNeedlemanwunsch_IsDone(XNeedlemanwunsch *InstancePtr);
u32 XNeedlemanwunsch_IsIdle(XNeedlemanwunsch *InstancePtr);
u32 XNeedlemanwunsch_IsReady(XNeedlemanwunsch *InstancePtr);
void XNeedlemanwunsch_EnableAutoRestart(XNeedlemanwunsch *InstancePtr);
void XNeedlemanwunsch_DisableAutoRestart(XNeedlemanwunsch *InstancePtr);
u32 XNeedlemanwunsch_Get_return(XNeedlemanwunsch *InstancePtr);


void XNeedlemanwunsch_InterruptGlobalEnable(XNeedlemanwunsch *InstancePtr);
void XNeedlemanwunsch_InterruptGlobalDisable(XNeedlemanwunsch *InstancePtr);
void XNeedlemanwunsch_InterruptEnable(XNeedlemanwunsch *InstancePtr, u32 Mask);
void XNeedlemanwunsch_InterruptDisable(XNeedlemanwunsch *InstancePtr, u32 Mask);
void XNeedlemanwunsch_InterruptClear(XNeedlemanwunsch *InstancePtr, u32 Mask);
u32 XNeedlemanwunsch_InterruptGetEnabled(XNeedlemanwunsch *InstancePtr);
u32 XNeedlemanwunsch_InterruptGetStatus(XNeedlemanwunsch *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
