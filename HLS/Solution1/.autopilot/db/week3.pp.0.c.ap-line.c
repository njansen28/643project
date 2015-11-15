#pragma line 1 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c"
#pragma line 1 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c" 1
#pragma line 1 "<built-in>" 1
#pragma line 1 "<built-in>" 3
#pragma line 147 "<built-in>" 3
#pragma line 1 "<command line>" 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
/* autopilot_ssdm_op.h*/
/*
#-  (c) Copyright 2011-2015 Xilinx, Inc. All rights reserved.
#-
#-  This file contains confidential and proprietary information
#-  of Xilinx, Inc. and is protected under U.S. and
#-  international copyright and other intellectual property
#-  laws.
#-
#-  DISCLAIMER
#-  This disclaimer is not a license and does not grant any
#-  rights to the materials distributed herewith. Except as
#-  otherwise provided in a valid license issued to you by
#-  Xilinx, and to the maximum extent permitted by applicable
#-  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#-  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#-  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#-  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#-  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#-  (2) Xilinx shall not be liable (whether in contract or tort,
#-  including negligence, or under any other theory of
#-  liability) for any loss or damage of any kind or nature
#-  related to, arising under or in connection with these
#-  materials, including for any direct, or any indirect,
#-  special, incidental, or consequential loss or damage
#-  (including loss of data, profits, goodwill, or any type of
#-  loss or damage suffered as a result of any action brought
#-  by a third party) even if such damage or loss was
#-  reasonably foreseeable or Xilinx had been advised of the
#-  possibility of the same.
#-
#-  CRITICAL APPLICATIONS
#-  Xilinx products are not designed or intended to be fail-
#-  safe, or for use in any application requiring fail-safe
#-  performance, such as life-support or safety devices or
#-  systems, Class III medical devices, nuclear facilities,
#-  applications related to the deployment of airbags, or any
#-  other applications that could lead to death, personal
#-  injury, or severe property or environmental damage
#-  (individually and collectively, "Critical
#-  Applications"). Customer assumes the sole risk and
#-  liability of any use of Xilinx products in Critical
#-  Applications, subject only to applicable laws and
#-  regulations governing limitations on product liability.
#-
#-  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#-  PART OF THIS FILE AT ALL TIMES. 
#- ************************************************************************
#pragma empty_line
 *
 * $Id$
 */
#pragma line 280 "S:/Xilinx/Vivado_HLS/2015.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
/*#define AP_SPEC_ATTR __attribute__ ((pure))*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
    /****** SSDM Intrinsics: OPERATIONS ***/
    // Interface operations
    //typedef unsigned int __attribute__ ((bitwidth(1))) _uint1_;
    void _ssdm_op_IfRead() __attribute__ ((nothrow));
    void _ssdm_op_IfWrite() __attribute__ ((nothrow));
    //_uint1_ _ssdm_op_IfNbRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfNbWrite() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanRead() SSDM_OP_ATTR;
    //_uint1_ _ssdm_op_IfCanWrite() SSDM_OP_ATTR;
#pragma empty_line
    // Stream Intrinsics
    void _ssdm_StreamRead() __attribute__ ((nothrow));
    void _ssdm_StreamWrite() __attribute__ ((nothrow));
    //_uint1_  _ssdm_StreamNbRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamNbWrite() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanRead() SSDM_OP_ATTR;
    //_uint1_  _ssdm_StreamCanWrite() SSDM_OP_ATTR;
#pragma empty_line
    // Misc
    void _ssdm_op_MemShiftRead() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Wait() __attribute__ ((nothrow));
    void _ssdm_op_Poll() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_Return() __attribute__ ((nothrow));
#pragma empty_line
    /* SSDM Intrinsics: SPECIFICATIONS */
    void _ssdm_op_SpecSynModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl() __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef() __attribute__ ((nothrow));
    void _ssdm_op_SpecPort() __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection() __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel() __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive() __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst() __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecReset() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPlatform() __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain() __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain() __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecRegionBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopName() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecLoopTripCount() __attribute__ ((nothrow));
#pragma empty_line
    int _ssdm_op_SpecStateBegin() __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecInterface() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecPipeline() __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline() __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
    void _ssdm_op_SpecLatency() __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel() __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol() __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecResource() __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit() __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore() __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue() __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecExt() __attribute__ ((nothrow));
    /*void* _ssdm_op_SpecProcess() SSDM_SPEC_ATTR;
    void* _ssdm_op_SpecEdge() SSDM_SPEC_ATTR; */
#pragma empty_line
    /* Presynthesis directive functions */
    void _ssdm_SpecArrayDimSize() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_RegionBegin() __attribute__ ((nothrow));
    void _ssdm_RegionEnd() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_Unroll() __attribute__ ((nothrow));
    void _ssdm_UnrollRegion() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_InlineAll() __attribute__ ((nothrow));
    void _ssdm_InlineLoop() __attribute__ ((nothrow));
    void _ssdm_Inline() __attribute__ ((nothrow));
    void _ssdm_InlineSelf() __attribute__ ((nothrow));
    void _ssdm_InlineRegion() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecArrayMap() __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition() __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecStream() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecExpr() __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecDependence() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecLoopMerge() __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten() __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_SpecFuncInstantiation() __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer() __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract() __attribute__ ((nothrow));
    void _ssdm_SpecConstant() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_DataPack() __attribute__ ((nothrow));
    void _ssdm_SpecDataPack() __attribute__ ((nothrow));
#pragma empty_line
    void _ssdm_op_SpecBitsMap() __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense() __attribute__ ((nothrow));
#pragma empty_line
#pragma empty_line
/*#define _ssdm_op_WaitUntil(X) while (!(X)) _ssdm_op_Wait(1);
#define _ssdm_op_Delayed(X) X */
#pragma line 7 "<command line>" 2
#pragma line 1 "<built-in>" 2
#pragma line 1 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c" 2
#pragma line 1 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 1
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 18 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 3
/* mingw.org's version macros: these make gcc to define
   MINGW32_SUPPORTS_MT_EH and to use the _CRT_MT global
   and the __mingwthr_key_dtor() function from the MinGW
   CRT in its private gthr-win32.h header. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* MS does not prefix symbols by underscores for 64-bit.  */
#pragma empty_line
/* As we have to support older gcc version, which are using underscores
   as symbol prefix for x64, we have to check here for the user label
   prefix defined by gcc.  */
#pragma line 62 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 3
/* Use alias for msvcr80 export of get/set_output_format.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Set VC specific compiler target macros.  */
#pragma line 10 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma empty_line
#pragma empty_line
/* C/C++ specific language defines.  */
#pragma line 32 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* Note the extern. This is needed to work around GCC's
limitations in handling dllimport attribute.  */
#pragma line 147 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
#pragma line 225 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/*  High byte is the major version, low byte is the minor. */
#pragma line 247 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/*typedef int __int128 __attribute__ ((__mode__ (TI)));*/
#pragma line 277 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 674 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
#pragma line 674 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
#pragma line 675 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma line 13 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 typedef __builtin_va_list __gnuc_va_list;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef __gnuc_va_list va_list;
#pragma line 46 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
/* Use GCC builtins */
#pragma line 102 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
#pragma pack(pop)
#pragma line 277 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 316 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* We have to define _DLL for gcc based mingw version. This define is set
   by VC, when DLL-based runtime is used. So, gcc based runtime just have
   DLL-base runtime, therefore this define has to be set.
   As our headers are possibly used by windows compiler having a static
   C-runtime, we make this definition gnu compiler specific here.  */
#pragma line 370 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
#pragma line 380 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
#pragma line 392 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
#pragma line 405 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
#pragma line 418 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
#pragma line 428 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wchar_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
#pragma line 456 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef long __time32_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
__extension__ typedef long long __time64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef __time64_t time_t;
#pragma line 518 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* _dowildcard is an int that controls the globbing of the command line.
 * The MinGW32 (mingw.org) runtime calls it _CRT_glob, so we are adding
 * a compatibility definition here:  you can use either of _CRT_glob or
 * _dowildcard .
 * If _dowildcard is non-zero, the command line will be globbed:  *.*
 * will be expanded to be all files in the startup directory.
 * In the mingw-w64 library a _dowildcard variable is defined as being
 * 0, therefore command line globbing is DISABLED by default. To turn it
 * on and to leave wildcard command line processing MS's globbing code,
 * include a line in one of your source modules defining _dowildcard and
 * setting it to -1, like so:
 * int _dowildcard = -1;
 */
#pragma line 605 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
/* MSVC-isms: */
#pragma empty_line
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;
#pragma empty_line
typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* mingw-w64 specific functions: */
const char *__mingw_get_crt_info (void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
/* Undefine __mingw_<printf> macros.  */
#pragma line 11 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 26 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
#pragma line 84 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;
#pragma empty_line
  typedef long off_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __extension__ typedef long long _off64_t;
#pragma empty_line
  __extension__ typedef long long off64_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
#pragma line 120 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
#pragma line 157 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);
#pragma empty_line
  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);
#pragma empty_line
  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);
#pragma empty_line
#pragma empty_line
  void perror(const char *_ErrMsg);
#pragma empty_line
  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);
#pragma empty_line
#pragma empty_line
  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);
#pragma empty_line
  int unlink(const char *_Filename) ;
#pragma empty_line
#pragma empty_line
  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);
#pragma empty_line
  /* Make sure macros are not defined.  */
  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
#pragma empty_line
  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;
#pragma empty_line
/* this is here to deal with software defining
 * vsnprintf as _vsnprintf, eg. libxml2.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;
#pragma empty_line
  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
#pragma line 312 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
#pragma empty_line
  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
#pragma line 330 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);
#pragma empty_line
#pragma empty_line
  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
#pragma line 373 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);
#pragma empty_line
  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
#pragma line 417 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);
#pragma empty_line
  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
#pragma line 475 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
#pragma line 509 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
/* Define __mingw_<printf> macros.  */
#pragma line 511 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
#pragma line 2 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 2
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/time.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 51 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
 typedef long clock_t;
#pragma line 88 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern __attribute__ ((__dllimport__)) int _daylight;
  extern __attribute__ ((__dllimport__)) long _dstbias;
  extern __attribute__ ((__dllimport__)) long _timezone;
  extern __attribute__ ((__dllimport__)) char * _tzname[2];
#pragma empty_line
  __attribute__ ((__dllimport__)) errno_t _get_daylight(int *_Daylight);
  __attribute__ ((__dllimport__)) errno_t _get_dstbias(long *_Daylight_savings_bias);
  __attribute__ ((__dllimport__)) errno_t _get_timezone(long *_Timezone);
  __attribute__ ((__dllimport__)) errno_t _get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index);
  char * asctime(const struct tm *_Tm) ;
  char * _ctime32(const __time32_t *_Time) ;
  clock_t clock(void);
  double _difftime32(__time32_t _Time1,__time32_t _Time2);
  struct tm * _gmtime32(const __time32_t *_Time) ;
  struct tm * _localtime32(const __time32_t *_Time) ;
  size_t strftime(char * __restrict__ _Buf,size_t _SizeInBytes,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _strftime_l(char * __restrict__ _Buf,size_t _Max_size,const char * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) char * _strdate(char *_Buffer) ;
  __attribute__ ((__dllimport__)) char * _strtime(char *_Buffer) ;
  __time32_t _time32(__time32_t *_Time);
  __time32_t _mktime32(struct tm *_Tm);
  __time32_t _mkgmtime32(struct tm *_Tm);
#pragma empty_line
  void tzset(void) ;
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _tzset(void);
#pragma empty_line
#pragma empty_line
  double _difftime64(__time64_t _Time1,__time64_t _Time2);
  __attribute__ ((__dllimport__)) char * _ctime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) struct tm * _gmtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) struct tm * _localtime64(const __time64_t *_Time) ;
  __attribute__ ((__dllimport__)) __time64_t _mktime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t _mkgmtime64(struct tm *_Tm);
  __attribute__ ((__dllimport__)) __time64_t _time64(__time64_t *_Time);
  unsigned _getsystime(struct tm *_Tm);
  unsigned _setsystime(struct tm *_Tm,unsigned _MilliSec);
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  wchar_t * _wctime(const time_t *) ;
#pragma line 167 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
double difftime(time_t _Time1,time_t _Time2);
char * ctime(const time_t *_Time) ;
struct tm * gmtime(const time_t *_Time) ;
struct tm * localtime(const time_t *_Time) ;
#pragma line 220 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
time_t mktime(struct tm *_Tm);
time_t _mkgmtime(struct tm *_Tm);
time_t time(time_t *_Time);
#pragma line 250 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 3
  __attribute__ ((__dllimport__)) extern int daylight;
  __attribute__ ((__dllimport__)) extern long timezone;
  __attribute__ ((__dllimport__)) extern char *tzname[2];
  void tzset(void) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_timeval.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct timeval
{
 long tv_sec;
 long tv_usec;
};
#pragma line 256 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
#pragma empty_line
  extern int mingw_gettimeofday (struct timeval *p, struct timezone *z);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(pop)
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/time_s.h" 2 3
#pragma line 274 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3
#pragma empty_line
#pragma empty_line
/* Adding timespec definition.  */
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 53 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
 struct __timeb32 {
    __time32_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };
#pragma empty_line
#pragma empty_line
  struct timeb {
    time_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };
#pragma empty_line
#pragma empty_line
  struct __timeb64 {
    __time64_t time;
    unsigned short millitm;
    short timezone;
    short dstflag;
  };
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _ftime64(struct __timeb64 *_Time);
  __attribute__ ((__dllimport__)) void _ftime(struct __timeb32 *);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
struct timespec {
  time_t tv_sec; /* Seconds */
  long tv_nsec; /* Nanoseconds */
};
#pragma empty_line
struct itimerspec {
  struct timespec it_interval; /* Timer period */
  struct timespec it_value; /* Timer expiration */
};
#pragma empty_line
#pragma empty_line
#pragma empty_line
  void ftime (struct timeb *);
#pragma line 117 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 3
#pragma pack(pop)
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 10 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/sys/timeb_s.h" 2 3
#pragma line 119 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/timeb.h" 2 3
#pragma line 277 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\time.h" 2 3
#pragma line 10 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/time.h" 2 3
#pragma line 33 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sys/time.h" 3
/*
   Implementation as per:
   The Open Group Base Specifications, Issue 6
   IEEE Std 1003.1, 2004 Edition
#pragma empty_line
   The timezone pointer arg is ignored.  Errors are ignored.
*/
#pragma empty_line
#pragma empty_line
int gettimeofday(struct timeval *__restrict__,
                         void *__restrict__ /* tzp (unused) */);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Adding timespec definition.  */
#pragma line 3 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 2
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
#pragma line 36 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
  __attribute__ ((__dllimport__)) void * _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
                void * memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  void * memset(void *_Dst,int _Val,size_t _Size);
#pragma empty_line
  void * memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;
#pragma empty_line
#pragma empty_line
  char * _strset(char *_Str,int _Val) ;
  char * _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char * strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char * strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int strcmp(const char *_Str1,const char *_Str2);
  size_t strlen(const char *_Str);
  size_t strnlen(const char *_Str,size_t _MaxCount);
  void * memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char * _strdup(const char *_Src);
                char * strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char * _strerror(const char *_ErrMsg) ;
  char * strerror(int) ;
  __attribute__ ((__dllimport__)) char * _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char * strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char * _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char * _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
                char * strpbrk(const char *_Str,const char *_Control);
                char * strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char * _strrev(char *_Str);
  size_t strspn(const char *_Str,const char *_Control);
                char * strstr(const char *_Str,const char *_SubStr);
  char * strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) char * _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
#pragma empty_line
#pragma empty_line
  char * strdup(const char *_Src) ;
  int strcmpi(const char *_Str1,const char *_Str2) ;
  int stricmp(const char *_Str1,const char *_Str2) ;
  char * strlwr(char *_Str) ;
  int strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int strncasecmp (const char *, const char *, size_t);
  int strcasecmp (const char *, const char *);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  char * strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char * strrev(char *_Str) ;
  char * strset(char *_Str,int _Val) ;
  char * strupr(char *_Str) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
#pragma empty_line
#pragma empty_line
  wchar_t * wcsdup(const wchar_t *_Str) ;
#pragma empty_line
  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 2 3
#pragma line 175 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
#pragma line 4 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 2
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 1 3 4
/*===---- limits.h - Standard header for integer sizes --------------------===*\
 *
 * Copyright (c) 2009 Chris Lattner
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
\*===----------------------------------------------------------------------===*/
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* The system's limits.h may, in turn, try to #include_next GCC's limits.h.
   Avert this #include_next madness. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* System headers include a number of constants from POSIX in <limits.h>.
   Include it if we're hosted. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 1 3 4
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 6 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/*
 * File system limits
 *
 * NOTE: Apparently the actual size of PATH_MAX is 260, but a space is
 *       required for the NUL. TODO: Test?
 * NOTE: PATH_MAX is the POSIX equivalent for Microsoft's MAX_PATH; the two
 *       are semantically identical, with a limit of 259 characters for the
 *       path name, plus one for a terminating NUL, for a total of 260.
 */
#pragma line 38 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Many system headers try to "help us out" by defining these.  No really, we
   know how big each datatype is. */
#pragma line 60 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
/* C90/99 5.2.4.2.1 */
#pragma line 90 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
/* C99 5.2.4.2.1: Added long long. */
#pragma line 102 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
/* LONG_LONG_MIN/LONG_LONG_MAX/ULONG_LONG_MAX are a GNU extension.  It's too bad
   that we don't have something like #pragma poison that could be used to
   deprecate a macro - the code should just use LLONG_MAX and friends.
 */
#pragma line 10 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 36 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef int ( *_onexit_t)(void);
#pragma line 46 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;
#pragma empty_line
  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(4)
 typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()
#pragma empty_line
#pragma empty_line
#pragma empty_line
 typedef struct {
    double x;
  } _CRT_DOUBLE;
#pragma empty_line
  typedef struct {
    float f;
  } _CRT_FLOAT;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef struct {
    long double x;
  } _LONGDOUBLE;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma pack(4)
 typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
#pragma line 100 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 extern int * __imp___mb_cur_max;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern int* __imp___mbcur_max;
#pragma line 132 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef void ( *_purecall_handler)(void);
#pragma empty_line
  __attribute__ ((__dllimport__)) _purecall_handler _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler _get_purecall_handler(void);
#pragma empty_line
  typedef void ( *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _invalid_parameter_handler _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _invalid_parameter_handler _get_invalid_parameter_handler(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) extern int * _errno(void);
#pragma empty_line
  errno_t _set_errno(int _Value);
  errno_t _get_errno(int *_Value);
#pragma empty_line
  __attribute__ ((__dllimport__)) unsigned long * __doserrno(void);
#pragma empty_line
  errno_t _set_doserrno(unsigned long _Value);
  errno_t _get_doserrno(unsigned long *_Value);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
#pragma line 172 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern int * __imp___argc;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern char *** __imp___argv;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern wchar_t *** __imp___wargv;
#pragma line 200 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char *** __imp__environ;
#pragma line 209 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t *** __imp__wenviron;
#pragma line 218 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char ** __imp__pgmptr;
#pragma line 227 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t ** __imp__wpgmptr;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  errno_t _get_pgmptr(char **_Value);
  errno_t _get_wpgmptr(wchar_t **_Value);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern int * __imp__fmode;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) errno_t _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t _get_fmode(int *_PMode);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  extern unsigned int * __imp__osplatform;
#pragma line 257 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__osver;
#pragma line 266 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winver;
#pragma line 275 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winmajor;
#pragma line 284 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winminor;
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  errno_t _get_osplatform(unsigned int *_Value);
  errno_t _get_osver(unsigned int *_Value);
  errno_t _get_winver(unsigned int *_Value);
  errno_t _get_winmajor(unsigned int *_Value);
  errno_t _get_winminor(unsigned int *_Value);
#pragma line 307 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) void __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));
#pragma empty_line
#pragma empty_line
  /* C99 function name */
  void _Exit(int) __attribute__ ((__noreturn__));
#pragma line 321 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __attribute__((noreturn)) abort(void);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) unsigned int _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  int abs(int _X);
  long labs(long _X);
#pragma empty_line
#pragma empty_line
  __extension__ long long _abs64(long long);
  int atexit(void ( *)(void));
#pragma empty_line
#pragma empty_line
  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);
#pragma empty_line
  int atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int _atoi_l(const char *_Str,_locale_t _Locale);
  long atol(const char *_Str);
  __attribute__ ((__dllimport__)) long _atol_l(const char *_Str,_locale_t _Locale);
#pragma empty_line
#pragma empty_line
  void * bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));
  void qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));
#pragma empty_line
  unsigned short _byteswap_ushort(unsigned short _Short);
  /*unsigned long __cdecl _byteswap_ulong (unsigned long _Long); */
  __extension__ unsigned long long _byteswap_uint64(unsigned long long _Int64);
  div_t div(int _Numerator,int _Denominator);
  char * getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char * _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char * _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char * _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char * _ltoa(long _Value,char *_Dest,int _Radix) ;
  int mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int rand(void);
  __attribute__ ((__dllimport__)) int _set_error_mode(int _Mode);
  void srand(unsigned int _Seed);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  double __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __attribute__ ((__nothrow__)) strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
  long double __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );
#pragma empty_line
  /* libmingwex.a provides a c99-compliant strtod() exported as __strtod() */
  extern double __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);
#pragma line 400 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  float __mingw_strtof (const char * __restrict__, char ** __restrict__);
  long double __mingw_strtold(const char * __restrict__, char ** __restrict__);
#pragma empty_line
  __attribute__ ((__dllimport__)) double _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
#pragma empty_line
#pragma empty_line
  int system(const char *_Command);
#pragma empty_line
  __attribute__ ((__dllimport__)) char * _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;
#pragma empty_line
#pragma empty_line
#pragma empty_line
  void * calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void free(void *_Memory);
  void * malloc(size_t _Size);
  void * realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void * _recalloc(void *_Memory,size_t _Count,size_t _Size);
/* Make sure that X86intrin.h doesn't produce here collisions.  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void * _aligned_malloc(size_t _Size,size_t _Alignment);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void * _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
#pragma empty_line
  float wcstof( const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);
#pragma empty_line
  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);
#pragma empty_line
  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);
#pragma empty_line
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) char * _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char * _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __extension__ unsigned long long _lrotl(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _lrotr(unsigned long long _Val,int _Shift);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t _onexit(_onexit_t _Func);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _putenv(const char *_EnvString);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __extension__ unsigned long long _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _rotr64(unsigned long long Value,int Shift);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  unsigned int _rotr(unsigned int _Val,int _Shift);
  unsigned int _rotl(unsigned int _Val,int _Shift);
#pragma empty_line
#pragma empty_line
  __extension__ unsigned long long _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) void _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));
  /* Not to be confused with  _set_error_mode (int).  */
  __attribute__ ((__dllimport__)) void _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
#pragma line 574 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  char * ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char * fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char * gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char * itoa(int _Val,char *_DstBuf,int _Radix) ;
  char * ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int putenv(const char *_EnvString) ;
  void swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;
  char * ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t onexit(_onexit_t _Func);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  typedef struct { __extension__ long long quot, rem; } lldiv_t;
#pragma empty_line
  __extension__ lldiv_t lldiv(long long, long long);
#pragma empty_line
  __extension__ long long llabs(long long);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __extension__ long long strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long strtoull(const char * __restrict__, char ** __restrict__, int);
#pragma empty_line
  /* these are stubs for MS _i64 versions */
  __extension__ long long atoll (const char *);
#pragma empty_line
#pragma empty_line
  __extension__ long long wtoll (const wchar_t *);
  __extension__ char * lltoa (long long, char *, int);
  __extension__ char * ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t * lltow (long long, wchar_t *, int);
  __extension__ wchar_t * ulltow (unsigned long long, wchar_t *, int);
#pragma empty_line
  /* __CRT_INLINE using non-ansi functions */
#pragma line 627 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
#pragma pack(pop)
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 2 3
#pragma line 629 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 2 3
#pragma empty_line
#pragma empty_line
#pragma pack(push,_CRT_PACKING)
#pragma line 31 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
/* Return codes for _heapwalk()  */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* Values for _heapinfo.useflag */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 /* The structure used to walk through the heap with _heapwalk.  */
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;
#pragma empty_line
#pragma empty_line
  extern unsigned int _amblksiz;
#pragma empty_line
/* Make sure that X86intrin.h doesn't produce here collisions.  */
#pragma line 98 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
/* Users should really use MS provided versions */
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) int _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long _set_malloc_crt_max_wait(unsigned long _NewValue);
#pragma empty_line
  __attribute__ ((__dllimport__)) void * _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t _msize(void *_Memory);
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
  __attribute__ ((__dllimport__)) size_t _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int _heapchk(void);
  __attribute__ ((__dllimport__)) int _heapmin(void);
  __attribute__ ((__dllimport__)) int _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t _get_heap_handle(void);
#pragma line 140 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
#pragma line 159 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
    }
  }
#pragma line 205 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
#pragma pack(pop)
#pragma line 630 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
#pragma line 5 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 2
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#pragma line 9 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 2 3
#pragma line 6 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 2
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\x86intrin.h" 1 3 4
/*===---- x86intrin.h - X86 intrinsics -------------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\immintrin.h" 1 3 4
/*===---- immintrin.h - Intel intrinsics -----------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\mmintrin.h" 1 3 4
/*===---- mmintrin.h - MMX intrinsics --------------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 31 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\mmintrin.h" 3 4
typedef long long __m64 __attribute__((__vector_size__(8)));
#pragma empty_line
typedef int __v2si __attribute__((__vector_size__(8)));
typedef short __v4hi __attribute__((__vector_size__(8)));
typedef char __v8qi __attribute__((__vector_size__(8)));
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_empty(void)
{
    __builtin_ia32_emms();
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_si64(int __i)
{
    return (__m64)__builtin_ia32_vec_init_v2si(__i, 0);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_si32(__m64 __m)
{
    return __builtin_ia32_vec_ext_v2si((__v2si)__m, 0);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_m64(long long __i)
{
    return (__m64)__i;
}
#pragma empty_line
static __inline__ long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtm64_si64(__m64 __m)
{
    return (long long)__m;
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_packs_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packsswb((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_packs_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packssdw((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_packs_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packuswb((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckhbw((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckhwd((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckhdq((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpcklbw((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpcklwd((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_punpckldq((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddd((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddsb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddsw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pu8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddusb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddusw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubd((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubsb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubsw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pu8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubusb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubusw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_madd_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmaddwd((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmulhw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mullo_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmullw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sll_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psllw((__v4hi)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_slli_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psllwi((__v4hi)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sll_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_pslld((__v2si)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_slli_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_pslldi((__v2si)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sll_si64(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psllq(__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_slli_si64(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psllqi(__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sra_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psraw((__v4hi)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srai_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrawi((__v4hi)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sra_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrad((__v2si)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srai_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psradi((__v2si)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srl_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrlw((__v4hi)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srli_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrlwi((__v4hi)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srl_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrld((__v2si)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srli_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrldi((__v2si)__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srl_si64(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrlq(__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srli_si64(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrlqi(__m, __count);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_and_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_pand(__m1, __m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_andnot_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_pandn(__m1, __m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_or_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_por(__m1, __m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_xor_si64(__m64 __m1, __m64 __m2)
{
    return __builtin_ia32_pxor(__m1, __m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpeqb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpeqw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpeqd((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpgtb((__v8qi)__m1, (__v8qi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpgtw((__v4hi)__m1, (__v4hi)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pcmpgtd((__v2si)__m1, (__v2si)__m2);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setzero_si64(void)
{
    return (__m64){ 0LL };
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set_pi32(int __i1, int __i0)
{
    return (__m64)__builtin_ia32_vec_init_v2si(__i0, __i1);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set_pi16(short __s3, short __s2, short __s1, short __s0)
{
    return (__m64)__builtin_ia32_vec_init_v4hi(__s0, __s1, __s2, __s3);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set_pi8(char __b7, char __b6, char __b5, char __b4, char __b3, char __b2,
            char __b1, char __b0)
{
    return (__m64)__builtin_ia32_vec_init_v8qi(__b0, __b1, __b2, __b3,
                                               __b4, __b5, __b6, __b7);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set1_pi32(int __i)
{
    return _mm_set_pi32(__i, __i);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set1_pi16(short __w)
{
    return _mm_set_pi16(__w, __w, __w, __w);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set1_pi8(char __b)
{
    return _mm_set_pi8(__b, __b, __b, __b, __b, __b, __b, __b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setr_pi32(int __i0, int __i1)
{
    return _mm_set_pi32(__i1, __i0);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setr_pi16(short __w0, short __w1, short __w2, short __w3)
{
    return _mm_set_pi16(__w3, __w2, __w1, __w0);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setr_pi8(char __b0, char __b1, char __b2, char __b3, char __b4, char __b5,
             char __b6, char __b7)
{
    return _mm_set_pi8(__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}
#pragma empty_line
#pragma empty_line
/* Aliases for compatibility. */
#pragma line 28 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\immintrin.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 1 3 4
/*===---- xmmintrin.h - SSE intrinsics -------------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 33 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 3 4
typedef int __v4si __attribute__((__vector_size__(16)));
typedef float __v4sf __attribute__((__vector_size__(16)));
typedef float __m128 __attribute__((__vector_size__(16)));
#pragma empty_line
// This header should only be included in a hosted environment as it depends on
// a standard library to provide allocation routines.
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\mm_malloc.h" 1 3 4
/*===---- mm_malloc.h - Allocating and Freeing Aligned Memory Blocks -------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 40 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 2 3 4
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_add_ss(__m128 a, __m128 b)
{
  a[0] += b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_add_ps(__m128 a, __m128 b)
{
  return a + b;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sub_ss(__m128 a, __m128 b)
{
  a[0] -= b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sub_ps(__m128 a, __m128 b)
{
  return a - b;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_mul_ss(__m128 a, __m128 b)
{
  a[0] *= b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_mul_ps(__m128 a, __m128 b)
{
  return a * b;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_div_ss(__m128 a, __m128 b)
{
  a[0] /= b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_div_ps(__m128 a, __m128 b)
{
  return a / b;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_ss(__m128 a)
{
  return __builtin_ia32_sqrtss(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_ps(__m128 a)
{
  return __builtin_ia32_sqrtps(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rcp_ss(__m128 a)
{
  return __builtin_ia32_rcpss(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rcp_ps(__m128 a)
{
  return __builtin_ia32_rcpps(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rsqrt_ss(__m128 a)
{
  return __builtin_ia32_rsqrtss(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rsqrt_ps(__m128 a)
{
  return __builtin_ia32_rsqrtps(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_min_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_minss(a, b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_min_ps(__m128 a, __m128 b)
{
  return __builtin_ia32_minps(a, b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_max_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_maxss(a, b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_max_ps(__m128 a, __m128 b)
{
  return __builtin_ia32_maxps(a, b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_and_ps(__m128 a, __m128 b)
{
  return (__m128)((__v4si)a & (__v4si)b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_andnot_ps(__m128 a, __m128 b)
{
  return (__m128)(~(__v4si)a & (__v4si)b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_or_ps(__m128 a, __m128 b)
{
  return (__m128)((__v4si)a | (__v4si)b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_xor_ps(__m128 a, __m128 b)
{
  return (__m128)((__v4si)a ^ (__v4si)b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 0);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 0);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 1);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 1);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmple_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 2);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmple_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 2);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 1);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 1);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 2);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 2);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 4);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 4);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 6);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 6);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 6);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 6);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 7);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 7);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 3);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 3);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comieq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comieq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comilt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comilt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comile_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comile(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comigt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comigt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comige_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comige(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comineq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comineq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomieq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomieq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomilt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomilt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomile_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomile(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomigt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomigt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomige_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomige(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomineq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomineq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_si32(__m128 a)
{
  return __builtin_ia32_cvtss2si(a);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvt_ss2si(__m128 a)
{
  return _mm_cvtss_si32(a);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_si64(__m128 a)
{
  return __builtin_ia32_cvtss2si64(a);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pi32(__m128 a)
{
  return (__m64)__builtin_ia32_cvtps2pi(a);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvt_ps2pi(__m128 a)
{
  return _mm_cvtps_pi32(a);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvttss_si32(__m128 a)
{
  return a[0];
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvtt_ss2si(__m128 a)
{
  return _mm_cvttss_si32(a);
}
#pragma empty_line
static __inline__ long long __attribute__((__always_inline__, __nodebug__))
_mm_cvttss_si64(__m128 a)
{
  return a[0];
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvttps_pi32(__m128 a)
{
  return (__m64)__builtin_ia32_cvttps2pi(a);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtt_ps2pi(__m128 a)
{
  return _mm_cvttps_pi32(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_ss(__m128 a, int b)
{
  a[0] = b;
  return a;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvt_si2ss(__m128 a, int b)
{
  return _mm_cvtsi32_ss(a, b);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_ss(__m128 a, long long b)
{
  a[0] = b;
  return a;
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32_ps(__m128 a, __m64 b)
{
  return __builtin_ia32_cvtpi2ps(a, (__v2si)b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvt_pi2ps(__m128 a, __m64 b)
{
  return _mm_cvtpi32_ps(a, b);
}
#pragma empty_line
static __inline__ float __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_f32(__m128 a)
{
  return a[0];
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadh_pi(__m128 a, const __m64 *p)
{
  typedef float __mm_loadh_pi_v2f32 __attribute__((__vector_size__(8)));
  struct __mm_loadh_pi_struct {
    __mm_loadh_pi_v2f32 u;
  } __attribute__((__packed__, __may_alias__));
  __mm_loadh_pi_v2f32 b = ((struct __mm_loadh_pi_struct*)p)->u;
  __m128 bb = __builtin_shufflevector(b, b, 0, 1, 0, 1);
  return __builtin_shufflevector(a, bb, 0, 1, 4, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadl_pi(__m128 a, const __m64 *p)
{
  typedef float __mm_loadl_pi_v2f32 __attribute__((__vector_size__(8)));
  struct __mm_loadl_pi_struct {
    __mm_loadl_pi_v2f32 u;
  } __attribute__((__packed__, __may_alias__));
  __mm_loadl_pi_v2f32 b = ((struct __mm_loadl_pi_struct*)p)->u;
  __m128 bb = __builtin_shufflevector(b, b, 0, 1, 0, 1);
  return __builtin_shufflevector(a, bb, 4, 5, 2, 3);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_load_ss(const float *p)
{
  struct __mm_load_ss_struct {
    float u;
  } __attribute__((__packed__, __may_alias__));
  float u = ((struct __mm_load_ss_struct*)p)->u;
  return (__m128){ u, 0, 0, 0 };
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_load1_ps(const float *p)
{
  struct __mm_load1_ps_struct {
    float u;
  } __attribute__((__packed__, __may_alias__));
  float u = ((struct __mm_load1_ps_struct*)p)->u;
  return (__m128){ u, u, u, u };
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_load_ps(const float *p)
{
  return *(__m128*)p;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadu_ps(const float *p)
{
  struct __loadu_ps {
    __m128 v;
  } __attribute__((__packed__, __may_alias__));
  return ((struct __loadu_ps*)p)->v;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadr_ps(const float *p)
{
  __m128 a = _mm_load_ps(p);
  return __builtin_shufflevector(a, a, 3, 2, 1, 0);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set_ss(float w)
{
  return (__m128){ w, 0, 0, 0 };
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set1_ps(float w)
{
  return (__m128){ w, w, w, w };
}
#pragma empty_line
// Microsoft specific.
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set_ps1(float w)
{
    return _mm_set1_ps(w);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set_ps(float z, float y, float x, float w)
{
  return (__m128){ w, x, y, z };
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_setr_ps(float z, float y, float x, float w)
{
  return (__m128){ z, y, x, w };
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__))
_mm_setzero_ps(void)
{
  return (__m128){ 0, 0, 0, 0 };
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__))
_mm_storeh_pi(__m64 *p, __m128 a)
{
  __builtin_ia32_storehps((__v2si *)p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__))
_mm_storel_pi(__m64 *p, __m128 a)
{
  __builtin_ia32_storelps((__v2si *)p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__))
_mm_store_ss(float *p, __m128 a)
{
  struct __mm_store_ss_struct {
    float u;
  } __attribute__((__packed__, __may_alias__));
  ((struct __mm_store_ss_struct*)p)->u = a[0];
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_ps(float *p, __m128 a)
{
  __builtin_ia32_storeups(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store1_ps(float *p, __m128 a)
{
  a = __builtin_shufflevector(a, a, 0, 0, 0, 0);
  _mm_storeu_ps(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store_ps1(float *p, __m128 a)
{
    return _mm_store1_ps(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store_ps(float *p, __m128 a)
{
  *(__m128 *)p = a;
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storer_ps(float *p, __m128 a)
{
  a = __builtin_shufflevector(a, a, 3, 2, 1, 0);
  _mm_store_ps(p, a);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
/* FIXME: We have to #define this because "sel" must be a constant integer, and
   Sema doesn't do any form of constant propagation yet. */
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_stream_pi(__m64 *p, __m64 a)
{
  __builtin_ia32_movntq(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_stream_ps(float *p, __m128 a)
{
  __builtin_ia32_movntps(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_sfence(void)
{
  __builtin_ia32_sfence();
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_extract_pi16(__m64 a, int n)
{
  __v4hi b = (__v4hi)a;
  return (unsigned short)b[n & 3];
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_insert_pi16(__m64 a, int d, int n)
{
   __v4hi b = (__v4hi)a;
   b[n & 3] = d;
   return (__m64)b;
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_max_pi16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pmaxsw((__v4hi)a, (__v4hi)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_max_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pmaxub((__v8qi)a, (__v8qi)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_min_pi16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pminsw((__v4hi)a, (__v4hi)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_min_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pminub((__v8qi)a, (__v8qi)b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_pi8(__m64 a)
{
  return __builtin_ia32_pmovmskb((__v8qi)a);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_pu16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pmulhuw((__v4hi)a, (__v4hi)b);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_maskmove_si64(__m64 d, __m64 n, char *p)
{
  __builtin_ia32_maskmovq((__v8qi)d, (__v8qi)n, p);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_avg_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pavgb((__v8qi)a, (__v8qi)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_avg_pu16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pavgw((__v4hi)a, (__v4hi)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sad_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_psadbw((__v8qi)a, (__v8qi)b);
}
#pragma empty_line
static __inline__ unsigned int __attribute__((__always_inline__, __nodebug__))
_mm_getcsr(void)
{
  return __builtin_ia32_stmxcsr();
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_setcsr(unsigned int i)
{
  __builtin_ia32_ldmxcsr(i);
}
#pragma line 786 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 3 4
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 2, 6, 3, 7);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 0, 4, 1, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_move_ss(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 4, 1, 2, 3);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_movehl_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 6, 7, 2, 3);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_movelh_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 0, 1, 4, 5);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi16_ps(__m64 a)
{
  __m64 b, c;
  __m128 r;
#pragma empty_line
  b = _mm_setzero_si64();
  b = _mm_cmpgt_pi16(b, a);
  c = _mm_unpackhi_pi16(a, b);
  r = _mm_setzero_ps();
  r = _mm_cvtpi32_ps(r, c);
  r = _mm_movelh_ps(r, r);
  c = _mm_unpacklo_pi16(a, b);
  r = _mm_cvtpi32_ps(r, c);
#pragma empty_line
  return r;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpu16_ps(__m64 a)
{
  __m64 b, c;
  __m128 r;
#pragma empty_line
  b = _mm_setzero_si64();
  c = _mm_unpackhi_pi16(a, b);
  r = _mm_setzero_ps();
  r = _mm_cvtpi32_ps(r, c);
  r = _mm_movelh_ps(r, r);
  c = _mm_unpacklo_pi16(a, b);
  r = _mm_cvtpi32_ps(r, c);
#pragma empty_line
  return r;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi8_ps(__m64 a)
{
  __m64 b;
#pragma empty_line
  b = _mm_setzero_si64();
  b = _mm_cmpgt_pi8(b, a);
  b = _mm_unpacklo_pi8(a, b);
#pragma empty_line
  return _mm_cvtpi16_ps(b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpu8_ps(__m64 a)
{
  __m64 b;
#pragma empty_line
  b = _mm_setzero_si64();
  b = _mm_unpacklo_pi8(a, b);
#pragma empty_line
  return _mm_cvtpi16_ps(b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32x2_ps(__m64 a, __m64 b)
{
  __m128 c;
#pragma empty_line
  c = _mm_setzero_ps();
  c = _mm_cvtpi32_ps(c, b);
  c = _mm_movelh_ps(c, c);
#pragma empty_line
  return _mm_cvtpi32_ps(c, a);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pi16(__m128 a)
{
  __m64 b, c;
#pragma empty_line
  b = _mm_cvtps_pi32(a);
  a = _mm_movehl_ps(a, a);
  c = _mm_cvtps_pi32(a);
#pragma empty_line
  return _mm_packs_pi16(b, c);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pi8(__m128 a)
{
  __m64 b, c;
#pragma empty_line
  b = _mm_cvtps_pi16(a);
  c = _mm_setzero_si64();
#pragma empty_line
  return _mm_packs_pi16(b, c);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_ps(__m128 a)
{
  return __builtin_ia32_movmskps(a);
}
#pragma line 966 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 3 4
/* Aliases for compatibility. */
#pragma line 983 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 3 4
/* Ugly hack for backwards-compatibility (compatible with gcc) */
#pragma empty_line
#pragma empty_line
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\emmintrin.h" 1 3 4
/*===---- emmintrin.h - SSE2 intrinsics ------------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 31 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\emmintrin.h" 3 4
#pragma line 1 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 1 3 4
/*===---- xmmintrin.h - SSE intrinsics -------------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
#pragma line 31 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\emmintrin.h" 2 3 4
#pragma empty_line
#pragma empty_line
typedef double __m128d __attribute__((__vector_size__(16)));
typedef long long __m128i __attribute__((__vector_size__(16)));
#pragma empty_line
/* Type defines.  */
typedef double __v2df __attribute__ ((__vector_size__ (16)));
typedef long long __v2di __attribute__ ((__vector_size__ (16)));
typedef short __v8hi __attribute__((__vector_size__(16)));
typedef char __v16qi __attribute__((__vector_size__(16)));
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_add_sd(__m128d a, __m128d b)
{
  a[0] += b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_add_pd(__m128d a, __m128d b)
{
  return a + b;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sub_sd(__m128d a, __m128d b)
{
  a[0] -= b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sub_pd(__m128d a, __m128d b)
{
  return a - b;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_mul_sd(__m128d a, __m128d b)
{
  a[0] *= b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_mul_pd(__m128d a, __m128d b)
{
  return a * b;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_div_sd(__m128d a, __m128d b)
{
  a[0] /= b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_div_pd(__m128d a, __m128d b)
{
  return a / b;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_sd(__m128d a, __m128d b)
{
  __m128d c = __builtin_ia32_sqrtsd(b);
  return (__m128d) { c[0], a[1] };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_pd(__m128d a)
{
  return __builtin_ia32_sqrtpd(a);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_min_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_minsd(a, b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_min_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_minpd(a, b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_max_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_maxsd(a, b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_max_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_maxpd(a, b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_and_pd(__m128d a, __m128d b)
{
  return (__m128d)((__v4si)a & (__v4si)b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_andnot_pd(__m128d a, __m128d b)
{
  return (__m128d)(~(__v4si)a & (__v4si)b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_or_pd(__m128d a, __m128d b)
{
  return (__m128d)((__v4si)a | (__v4si)b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_xor_pd(__m128d a, __m128d b)
{
  return (__m128d)((__v4si)a ^ (__v4si)b);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 0);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 1);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmple_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 2);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 1);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 2);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 7);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 3);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 4);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 5);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 6);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 5);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 6);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 0);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 1);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmple_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 2);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 1);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 2);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 7);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 3);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 4);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 5);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 6);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 5);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 6);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comieq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdeq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comilt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdlt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comile_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdle(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comigt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdgt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comige_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdge(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_comineq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdneq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomieq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdeq(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomilt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdlt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomile_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdle(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomigt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdgt(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomige_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdge(a, b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_ucomineq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdneq(a, b);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_ps(__m128d a)
{
  return __builtin_ia32_cvtpd2ps(a);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pd(__m128 a)
{
  return __builtin_ia32_cvtps2pd(a);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtepi32_pd(__m128i a)
{
  return __builtin_ia32_cvtdq2pd((__v4si)a);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_epi32(__m128d a)
{
  return __builtin_ia32_cvtpd2dq(a);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_si32(__m128d a)
{
  return __builtin_ia32_cvtsd2si(a);
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_ss(__m128 a, __m128d b)
{
  a[0] = b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_sd(__m128d a, int b)
{
  a[0] = b;
  return a;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_sd(__m128d a, __m128 b)
{
  a[0] = b[0];
  return a;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvttpd_epi32(__m128d a)
{
  return (__m128i)__builtin_ia32_cvttpd2dq(a);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvttsd_si32(__m128d a)
{
  return a[0];
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_pi32(__m128d a)
{
  return (__m64)__builtin_ia32_cvtpd2pi(a);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvttpd_pi32(__m128d a)
{
  return (__m64)__builtin_ia32_cvttpd2pi(a);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32_pd(__m64 a)
{
  return __builtin_ia32_cvtpi2pd((__v2si)a);
}
#pragma empty_line
static __inline__ double __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_f64(__m128d a)
{
  return a[0];
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load_pd(double const *dp)
{
  return *(__m128d*)dp;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load1_pd(double const *dp)
{
  struct __mm_load1_pd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  double u = ((struct __mm_load1_pd_struct*)dp)->u;
  return (__m128d){ u, u };
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadr_pd(double const *dp)
{
  __m128d u = *(__m128d*)dp;
  return __builtin_shufflevector(u, u, 1, 0);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadu_pd(double const *dp)
{
  struct __loadu_pd {
    __m128d v;
  } __attribute__((packed, may_alias));
  return ((struct __loadu_pd*)dp)->v;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load_sd(double const *dp)
{
  struct __mm_load_sd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  double u = ((struct __mm_load_sd_struct*)dp)->u;
  return (__m128d){ u, 0 };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadh_pd(__m128d a, double const *dp)
{
  struct __mm_loadh_pd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  double u = ((struct __mm_loadh_pd_struct*)dp)->u;
  return (__m128d){ a[0], u };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadl_pd(__m128d a, double const *dp)
{
  struct __mm_loadl_pd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  double u = ((struct __mm_loadl_pd_struct*)dp)->u;
  return (__m128d){ u, a[1] };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set_sd(double w)
{
  return (__m128d){ w, 0 };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set1_pd(double w)
{
  return (__m128d){ w, w };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set_pd(double w, double x)
{
  return (__m128d){ x, w };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_setr_pd(double w, double x)
{
  return (__m128d){ w, x };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_setzero_pd(void)
{
  return (__m128d){ 0, 0 };
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_move_sd(__m128d a, __m128d b)
{
  return (__m128d){ b[0], a[1] };
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store_sd(double *dp, __m128d a)
{
  struct __mm_store_sd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  ((struct __mm_store_sd_struct*)dp)->u = a[0];
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store1_pd(double *dp, __m128d a)
{
  struct __mm_store1_pd_struct {
    double u[2];
  } __attribute__((__packed__, __may_alias__));
  ((struct __mm_store1_pd_struct*)dp)->u[0] = a[0];
  ((struct __mm_store1_pd_struct*)dp)->u[1] = a[0];
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store_pd(double *dp, __m128d a)
{
  *(__m128d *)dp = a;
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_pd(double *dp, __m128d a)
{
  __builtin_ia32_storeupd(dp, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storer_pd(double *dp, __m128d a)
{
  a = __builtin_shufflevector(a, a, 1, 0);
  *(__m128d *)dp = a;
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storeh_pd(double *dp, __m128d a)
{
  struct __mm_storeh_pd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  ((struct __mm_storeh_pd_struct*)dp)->u = a[1];
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storel_pd(double *dp, __m128d a)
{
  struct __mm_storeh_pd_struct {
    double u;
  } __attribute__((__packed__, __may_alias__));
  ((struct __mm_storeh_pd_struct*)dp)->u = a[0];
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a + (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a + (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a + (__v4si)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_si64(__m64 a, __m64 b)
{
  return a + b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi64(__m128i a, __m128i b)
{
  return a + b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddsb128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddsw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddusb128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddusw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_avg_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pavgb128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_avg_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pavgw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_madd_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaddwd128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_max_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaxsw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_max_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaxub128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_min_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pminsw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_min_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pminub128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmulhw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmulhuw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mullo_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a * (__v8hi)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mul_su32(__m64 a, __m64 b)
{
  return __builtin_ia32_pmuludq((__v2si)a, (__v2si)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mul_epu32(__m128i a, __m128i b)
{
  return __builtin_ia32_pmuludq128((__v4si)a, (__v4si)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sad_epu8(__m128i a, __m128i b)
{
  return __builtin_ia32_psadbw128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a - (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a - (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a - (__v4si)b);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_si64(__m64 a, __m64 b)
{
  return a - b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi64(__m128i a, __m128i b)
{
  return a - b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubsb128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubsw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubusb128((__v16qi)a, (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubusw128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_and_si128(__m128i a, __m128i b)
{
  return a & b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_andnot_si128(__m128i a, __m128i b)
{
  return ~a & b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_or_si128(__m128i a, __m128i b)
{
  return a | b;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_xor_si128(__m128i a, __m128i b)
{
  return a ^ b;
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psllwi128((__v8hi)a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psllw128((__v8hi)a, (__v8hi)count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_pslldi128((__v4si)a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_pslld128((__v4si)a, (__v4si)count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi64(__m128i a, int count)
{
  return __builtin_ia32_psllqi128(a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi64(__m128i a, __m128i count)
{
  return __builtin_ia32_psllq128(a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srai_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrawi128((__v8hi)a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sra_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psraw128((__v8hi)a, (__v8hi)count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srai_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psradi128((__v4si)a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sra_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrad128((__v4si)a, (__v4si)count);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrlwi128((__v8hi)a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrlw128((__v8hi)a, (__v8hi)count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrldi128((__v4si)a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrld128((__v4si)a, (__v4si)count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi64(__m128i a, int count)
{
  return __builtin_ia32_psrlqi128(a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi64(__m128i a, __m128i count)
{
  return __builtin_ia32_psrlq128(a, count);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a == (__v16qi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a == (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a == (__v4si)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi8(__m128i a, __m128i b)
{
  /* This function always performs a signed comparison, but __v16qi is a char
     which may be signed or unsigned. */
  typedef signed char __v16qs __attribute__((__vector_size__(16)));
  return (__m128i)((__v16qs)a > (__v16qs)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a > (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a > (__v4si)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi8(__m128i a, __m128i b)
{
  return _mm_cmpgt_epi8(b,a);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi16(__m128i a, __m128i b)
{
  return _mm_cmpgt_epi16(b,a);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi32(__m128i a, __m128i b)
{
  return _mm_cmpgt_epi32(b,a);
}
#pragma empty_line
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_sd(__m128d a, long long b)
{
  a[0] = b;
  return a;
}
#pragma empty_line
static __inline__ long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_si64(__m128d a)
{
  return __builtin_ia32_cvtsd2si64(a);
}
#pragma empty_line
static __inline__ long long __attribute__((__always_inline__, __nodebug__))
_mm_cvttsd_si64(__m128d a)
{
  return a[0];
}
#pragma empty_line
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtepi32_ps(__m128i a)
{
  return __builtin_ia32_cvtdq2ps((__v4si)a);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_epi32(__m128 a)
{
  return (__m128i)__builtin_ia32_cvtps2dq(a);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvttps_epi32(__m128 a)
{
  return (__m128i)__builtin_ia32_cvttps2dq(a);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_si128(int a)
{
  return (__m128i)(__v4si){ a, 0, 0, 0 };
}
#pragma empty_line
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_si128(long long a)
{
  return (__m128i){ a, 0 };
}
#pragma empty_line
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi128_si32(__m128i a)
{
  __v4si b = (__v4si)a;
  return b[0];
}
#pragma empty_line
#pragma empty_line
static __inline__ long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi128_si64(__m128i a)
{
  return a[0];
}
#pragma empty_line
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_load_si128(__m128i const *p)
{
  return *p;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_loadu_si128(__m128i const *p)
{
  struct __loadu_si128 {
    __m128i v;
  } __attribute__((packed, may_alias));
  return ((struct __loadu_si128*)p)->v;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_loadl_epi64(__m128i const *p)
{
  struct __mm_loadl_epi64_struct {
    long long u;
  } __attribute__((__packed__, __may_alias__));
  return (__m128i) { ((struct __mm_loadl_epi64_struct*)p)->u, 0};
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi64x(long long q1, long long q0)
{
  return (__m128i){ q0, q1 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi64(__m64 q1, __m64 q0)
{
  return (__m128i){ (long long)q0, (long long)q1 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi32(int i3, int i2, int i1, int i0)
{
  return (__m128i)(__v4si){ i0, i1, i2, i3};
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi16(short w7, short w6, short w5, short w4, short w3, short w2, short w1, short w0)
{
  return (__m128i)(__v8hi){ w0, w1, w2, w3, w4, w5, w6, w7 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi8(char b15, char b14, char b13, char b12, char b11, char b10, char b9, char b8, char b7, char b6, char b5, char b4, char b3, char b2, char b1, char b0)
{
  return (__m128i)(__v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi64x(long long q)
{
  return (__m128i){ q, q };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi64(__m64 q)
{
  return (__m128i){ (long long)q, (long long)q };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi32(int i)
{
  return (__m128i)(__v4si){ i, i, i, i };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi16(short w)
{
  return (__m128i)(__v8hi){ w, w, w, w, w, w, w, w };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi8(char b)
{
  return (__m128i)(__v16qi){ b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi64(__m64 q0, __m64 q1)
{
  return (__m128i){ (long long)q0, (long long)q1 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi32(int i0, int i1, int i2, int i3)
{
  return (__m128i)(__v4si){ i0, i1, i2, i3};
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi16(short w0, short w1, short w2, short w3, short w4, short w5, short w6, short w7)
{
  return (__m128i)(__v8hi){ w0, w1, w2, w3, w4, w5, w6, w7 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi8(char b0, char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9, char b10, char b11, char b12, char b13, char b14, char b15)
{
  return (__m128i)(__v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setzero_si128(void)
{
  return (__m128i){ 0LL, 0LL };
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_store_si128(__m128i *p, __m128i b)
{
  *p = b;
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_si128(__m128i *p, __m128i b)
{
  __builtin_ia32_storedqu((char *)p, (__v16qi)b);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_maskmoveu_si128(__m128i d, __m128i n, char *p)
{
  __builtin_ia32_maskmovdqu((__v16qi)d, (__v16qi)n, p);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_storel_epi64(__m128i *p, __m128i a)
{
  __builtin_ia32_storelv4si((__v2si *)p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_stream_pd(double *p, __m128d a)
{
  __builtin_ia32_movntpd(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_stream_si128(__m128i *p, __m128i a)
{
  __builtin_ia32_movntdq(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_stream_si32(int *p, int a)
{
  __builtin_ia32_movnti(p, a);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_clflush(void const *p)
{
  __builtin_ia32_clflush(p);
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_lfence(void)
{
  __builtin_ia32_lfence();
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_mfence(void)
{
  __builtin_ia32_mfence();
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packs_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packsswb128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packs_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packssdw128((__v4si)a, (__v4si)b);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packus_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packuswb128((__v8hi)a, (__v8hi)b);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_extract_epi16(__m128i a, int imm)
{
  __v8hi b = (__v8hi)a;
  return (unsigned short)b[imm];
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_insert_epi16(__m128i a, int b, int imm)
{
  __v8hi c = (__v8hi)a;
  c[imm & 7] = b;
  return (__m128i)c;
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_epi8(__m128i a)
{
  return __builtin_ia32_pmovmskb128((__v16qi)a);
}
#pragma line 1289 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\emmintrin.h" 3 4
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v16qi)a, (__v16qi)b, 8, 16+8, 9, 16+9, 10, 16+10, 11, 16+11, 12, 16+12, 13, 16+13, 14, 16+14, 15, 16+15);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v8hi)a, (__v8hi)b, 4, 8+4, 5, 8+5, 6, 8+6, 7, 8+7);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v4si)a, (__v4si)b, 2, 4+2, 3, 4+3);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi64(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector(a, b, 1, 2+1);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v16qi)a, (__v16qi)b, 0, 16+0, 1, 16+1, 2, 16+2, 3, 16+3, 4, 16+4, 5, 16+5, 6, 16+6, 7, 16+7);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v8hi)a, (__v8hi)b, 0, 8+0, 1, 8+1, 2, 8+2, 3, 8+3);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v4si)a, (__v4si)b, 0, 4+0, 1, 4+1);
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi64(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector(a, b, 0, 2+0);
}
#pragma empty_line
static __inline__ __m64 __attribute__((__always_inline__, __nodebug__))
_mm_movepi64_pi64(__m128i a)
{
  return (__m64)a[0];
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_movpi64_pi64(__m64 a)
{
  return (__m128i){ (long long)a, 0 };
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_move_epi64(__m128i a)
{
  return __builtin_shufflevector(a, (__m128i){ 0 }, 0, 2);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pd(__m128d a, __m128d b)
{
  return __builtin_shufflevector(a, b, 1, 2+1);
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pd(__m128d a, __m128d b)
{
  return __builtin_shufflevector(a, b, 0, 2+0);
}
#pragma empty_line
static __inline__ int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_pd(__m128d a)
{
  return __builtin_ia32_movmskpd(a);
}
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_castpd_ps(__m128d in)
{
  return (__m128)in;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_castpd_si128(__m128d in)
{
  return (__m128i)in;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_castps_pd(__m128 in)
{
  return (__m128d)in;
}
#pragma empty_line
static __inline__ __m128i __attribute__((__always_inline__, __nodebug__))
_mm_castps_si128(__m128 in)
{
  return (__m128i)in;
}
#pragma empty_line
static __inline__ __m128 __attribute__((__always_inline__, __nodebug__))
_mm_castsi128_ps(__m128i in)
{
  return (__m128)in;
}
#pragma empty_line
static __inline__ __m128d __attribute__((__always_inline__, __nodebug__))
_mm_castsi128_pd(__m128i in)
{
  return (__m128d)in;
}
#pragma empty_line
static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_pause(void)
{
  __asm__ volatile ("pause");
}
#pragma line 985 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\xmmintrin.h" 2 3 4
#pragma line 32 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\immintrin.h" 2 3 4
#pragma line 27 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\x86intrin.h" 2 3 4
#pragma line 53 "S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/include\\x86intrin.h" 3 4
// FIXME: SSE4A, XOP, LWP, ABM
#pragma line 7 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h" 2
#pragma empty_line
// Comment out for normal operation
//#define DEBUG 1
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
// Direction type, EDGE means that entry is in 0th column, so we stop following
//typedef enum {UP, LEFT, DIAG, EDGE} direction;
#pragma empty_line
typedef struct {
 char score[1000000 /* Size of reference genome*/+1][100 /* Size of each read*/+1];
 unsigned int orig [1000000 /* Size of reference genome*/+1][100 /* Size of each read*/+1];
} NW_matrix;
#pragma empty_line
extern NW_matrix nw_matrix; // The NW matrix, as struct-of-arrays instead of array-of-structs
//char ref_genome[REF_SIZE+1];					// The reference genome
//char reads[NUM_READS][READ_SIZE+1];				// The reads to be sequenced
unsigned int best_fits[10 /* Number of reads in read file*/]; // The best fit index for each read
#pragma empty_line
#pragma empty_line
// Scoring system
#pragma line 2 "S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c" 2
#pragma empty_line
//NW_matrix nw_matrix;
//char score[REF_SIZE+1][READ_SIZE+1];
//unsigned int orig  [REF_SIZE+1][READ_SIZE+1];
#pragma empty_line
//unsigned int max;				// Index of maximum final column value
unsigned int max_orig;
int max_score; // Maximum final column value
#pragma empty_line
unsigned int needlemanWunsch(char reads[100 /* Size of each read*/], char ref_genome, unsigned int orig_in[100 /* Size of each read*/+1], unsigned int orig_out[100 /* Size of each read*/+1],
        char score_in[100 /* Size of each read*/+1], char score_out[100 /* Size of each read*/+1], unsigned int i) {
#pragma empty_line
 unsigned int j; // loop variable
 int up, left, diag; // Values in boxes to left, diagonal, and up from current box
 int up_score, left_score, diag_score; // Score put in box for each of the different directions
 int match; // Is the current box a match
 //unsigned int max;						// Index of maximum final column value
 //int max_score;						// Maximum final column value
#pragma empty_line
#pragma empty_line
#pragma empty_line
#pragma empty_line
 //max = 0;
 //max_score = -READ_SIZE;
 //score1[0] = nw_matrix
 if (i == 1) {
  //max = 0;
  max_orig = 0;
  max_score = -100 /* Size of each read*/;
 }
 //score_out[0] = 0;
 //orig_out[0] = i-1;
#pragma empty_line
 //printf("%s, %c, %d\n", reads, ref_genome, i);
#pragma empty_line
 COL: for (j=1; j<100 /* Size of each read*/+1; j++) { // Loop through each column
  // Get adjacent values
  diag = score_in[j-1];
  up = score_in[j];
  left = score_out[j-1];
#pragma empty_line
  // Calculate each score
  match = ref_genome == reads[j-1];
  if (match) diag_score = diag + 1;
  else diag_score = diag + -1; // pen is negative
#pragma empty_line
  left_score = left + -1;
  up_score = up + -1;
#pragma empty_line
  // Fill in current entry based on which score is best
  if (diag_score >= left_score && diag_score >= up_score) {
   score_out[j] = diag_score;
   orig_out[j] = orig_in[j-1];
  }
  else if (left_score >= diag_score && left_score >= up_score) {
   score_out[j] = left_score; // pen is negative number
   orig_out[j] = orig_out[j-1];
  }
  else {
   score_out[j] = up_score; //pen is negative number
   orig_out[j] = orig_in[j];
  }
 }
#pragma empty_line
 // Determine if it's the new max path (TODO: allow more than 1 max path end?)
 if (score_out[100 /* Size of each read*/] > max_score) {
  //max = i;
  max_score = score_out[100 /* Size of each read*/];
  max_orig = orig_out[100 /* Size of each read*/];
  //printf("max_orig = %d %d %d %d\n", max_orig, i, max, max_score);
 }
 return max_orig;
}
