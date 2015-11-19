/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void doRow(signed int llvm_cbe_i,  char *llvm_cbe_read,  char llvm_cbe_ref_genome,  char *llvm_cbe_score_in,  char *llvm_cbe_score_out, signed long long *llvm_cbe_orig_in, signed long long *llvm_cbe_orig_out);
signed long long AESL_ORIG_DUT_needlemanWunsch( char *llvm_cbe_read,  char *llvm_cbe_ref_genome);


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void doRow(signed int llvm_cbe_i,  char *llvm_cbe_read,  char llvm_cbe_ref_genome,  char *llvm_cbe_score_in,  char *llvm_cbe_score_out, signed long long *llvm_cbe_orig_in, signed long long *llvm_cbe_orig_out) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  unsigned char llvm_cbe_tmp__3;
  unsigned char llvm_cbe_tmp__3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge3_2e_us_count = 0;
  unsigned long long llvm_cbe_storemerge3_2e_us;
  unsigned long long llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  signed long long *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  unsigned char llvm_cbe_tmp__7;
  unsigned char llvm_cbe_tmp__7__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  unsigned long long llvm_cbe_tmp__8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
   char *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned char llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_v_2e_us_count = 0;
  unsigned char llvm_cbe_storemerge1_2e_v_2e_us;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_us_count = 0;
  unsigned char llvm_cbe_storemerge1_2e_us;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond_2e_us;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge8_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge8_2e_us;
  unsigned int llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  unsigned char llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  unsigned char llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_phitmp12_count = 0;
  unsigned char llvm_cbe_phitmp12;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned char llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_phitmp_2e_us_count = 0;
  unsigned char llvm_cbe_phitmp_2e_us;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  signed long long *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond6_2e_us;
  static  unsigned long long aesl_llvm_cbe__2e__2e_us_count = 0;
  unsigned char llvm_cbe__2e__2e_us;
  static  unsigned long long aesl_llvm_cbe__2e_7_2e_us_count = 0;
  unsigned long long llvm_cbe__2e_7_2e_us;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge8_count = 0;
  unsigned int llvm_cbe_storemerge8;
  unsigned int llvm_cbe_storemerge8__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
   char *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned char llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  signed long long *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
   char *llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  unsigned char llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  unsigned long long llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
   char *llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  unsigned char llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
   char *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  unsigned char llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_phitmp_count = 0;
  unsigned char llvm_cbe_phitmp;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  signed long long *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  unsigned long long llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  unsigned long long llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  signed long long *llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned long long llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  unsigned int llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  unsigned long long llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  signed long long *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  unsigned long long llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned long long llvm_cbe_tmp__55;
  unsigned long long llvm_cbe_tmp__55__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  unsigned long long llvm_cbe_tmp__56;
  unsigned long long llvm_cbe_tmp__56__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_phitmp10161720_2e_in_count = 0;
  unsigned char llvm_cbe_phitmp10161720_2e_in;
  unsigned char llvm_cbe_phitmp10161720_2e_in__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned char llvm_cbe_tmp__57;
  unsigned char llvm_cbe_tmp__57__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  unsigned char llvm_cbe_tmp__58;
  unsigned char llvm_cbe_tmp__58__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  unsigned long long llvm_cbe_tmp__59__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_phitmp10161720_count = 0;
  unsigned char llvm_cbe_phitmp10161720;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  unsigned long long llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
   char *llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  unsigned char llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_v_count = 0;
  unsigned char llvm_cbe_storemerge1_2e_v;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned char llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond6_count = 0;
  bool llvm_cbe_or_2e_cond6;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned char llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe__2e_7_count = 0;
  unsigned long long llvm_cbe__2e_7;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned char llvm_cbe_tmp__64;
  unsigned char llvm_cbe_tmp__64__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned long long llvm_cbe_storemerge3;
  unsigned long long llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
   char *llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  signed long long *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  unsigned int llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond13_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @doRow\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add nsw i32 %%i, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__1 = (unsigned int )((unsigned int )(llvm_cbe_i&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sext i32 %%2 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
  if (((llvm_cbe_i&4294967295U) == (1u&4294967295U))) {
    llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe_tmp__68;
  } else {
    llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__68:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge8.us = phi i32 [ %%8, %%4 ], [ 1, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge8_2e_us_count);
  llvm_cbe_storemerge8_2e_us = (unsigned int )llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge8.us = 0x%X",llvm_cbe_storemerge8_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__6);
printf("\n = 0x%X",1u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = trunc i32 %%storemerge8.us to i8, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_98_count);
  llvm_cbe_tmp__13 = (unsigned char )((unsigned char )llvm_cbe_storemerge8_2e_us&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = sub i8 1, %%19, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__14 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )1)&255ull)) - ((unsigned char )(llvm_cbe_tmp__13&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__14&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp12 = xor i8 %%19, -1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp12_count);
  llvm_cbe_phitmp12 = (unsigned char )((unsigned char )(llvm_cbe_tmp__13 ^ ((unsigned char )-1)));
if (AESL_DEBUG_TRACE)
printf("\nphitmp12 = 0x%X\n", llvm_cbe_phitmp12);
  if (((llvm_cbe_storemerge8_2e_us&4294967295U) == (1u&4294967295U))) {
    llvm_cbe_tmp__7__PHI_TEMPORARY = (unsigned char )((unsigned char )-1);   /* for PHI node */
    llvm_cbe_tmp__8__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__2;   /* for PHI node */
    goto llvm_cbe__2e_thread_2e_us_2e_thread;
  } else {
    goto llvm_cbe_tmp__69;
  }

llvm_cbe_tmp__70:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = phi i8 [ %%storemerge1.us, %%.thread.us.thread ], [ %%..us, %%31  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__3 = (unsigned char )llvm_cbe_tmp__3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__3);
printf("\nstoremerge1.us = 0x%X",llvm_cbe_storemerge1_2e_us);
printf("\n..us = 0x%X",llvm_cbe__2e__2e_us);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3.us = phi i64 [ 0, %%.thread.us.thread ], [ %%.7.us, %%31  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge3_2e_us_count);
  llvm_cbe_storemerge3_2e_us = (unsigned long long )llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3.us = 0x%I64X",llvm_cbe_storemerge3_2e_us);
printf("\n = 0x%I64X",0ull);
printf("\n.7.us = 0x%I64X",llvm_cbe__2e_7_2e_us);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%score_out, i64 %%12, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__10))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%5, i8* %%6, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_54_count);
  *llvm_cbe_tmp__4 = llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i64* %%orig_out, i64 %%12, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__5 = (signed long long *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__10))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%storemerge3.us, i64* %%7, align 8, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_56_count);
  *llvm_cbe_tmp__5 = llvm_cbe_storemerge3_2e_us;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge3.us = 0x%I64X\n", llvm_cbe_storemerge3_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge8.us, 1, !dbg !7 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
  if (((llvm_cbe_tmp__6&4294967295U) == (101u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge8_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__6;   /* for PHI node */
    goto llvm_cbe_tmp__68;
  }

llvm_cbe__2e_thread_2e_us_2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = phi i8 [ %%phitmp.us, %%22 ], [ -1, %%18  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__7 = (unsigned char )llvm_cbe_tmp__7__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__7);
printf("\nphitmp.us = 0x%X",llvm_cbe_phitmp_2e_us);
printf("\n = 0x%X",((unsigned char )-1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = phi i64 [ %%30, %%22 ], [ %%3, %%18 ], !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__8 = (unsigned long long )llvm_cbe_tmp__8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__8);
printf("\n = 0x%I64X",llvm_cbe_tmp__22);
printf("\n = 0x%I64X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = add nsw i32 %%storemerge8.us, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8_2e_us&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%11 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds i2* %%read, i64 %%12, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__11 = ( char *)(&llvm_cbe_read[(((signed long long )llvm_cbe_tmp__10))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i2* %%13, align 1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__12 = (unsigned char )*llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.v.us = select i1 %%15, i8 1, i8 -1, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_2e_v_2e_us_count);
  llvm_cbe_storemerge1_2e_v_2e_us = (unsigned char )((((llvm_cbe_tmp__12&3U) == (llvm_cbe_ref_genome&3U))) ? ((unsigned char )((unsigned char )1)) : ((unsigned char )((unsigned char )-1)));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.v.us = 0x%X\n", llvm_cbe_storemerge1_2e_v_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.us = add i8 %%storemerge1.v.us, %%20, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_2e_us_count);
  llvm_cbe_storemerge1_2e_us = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1_2e_v_2e_us&255ull)) + ((unsigned char )(llvm_cbe_tmp__14&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.us = 0x%X\n", ((unsigned char )(llvm_cbe_storemerge1_2e_us&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond.us = or i1 %%16, %%17, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond_2e_us_count);
  llvm_cbe_or_2e_cond_2e_us = (bool )((((( char )llvm_cbe_storemerge1_2e_us) < (( char )llvm_cbe_tmp__7)) | ((( char )llvm_cbe_storemerge1_2e_us) < (( char )llvm_cbe_phitmp12)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond.us = 0x%X\n", llvm_cbe_or_2e_cond_2e_us);
  if (llvm_cbe_or_2e_cond_2e_us) {
    goto llvm_cbe_tmp__71;
  } else {
    llvm_cbe_tmp__3__PHI_TEMPORARY = (unsigned char )llvm_cbe_storemerge1_2e_us;   /* for PHI node */
    llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__70;
  }

llvm_cbe_tmp__69:
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = add nsw i32 %%storemerge8.us, -2, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8_2e_us&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__15&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = sext i32 %%23 to i64, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__16 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds i8* %%score_out, i64 %%24, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__16))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__16));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i8* %%25, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__18 = (unsigned char )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp.us = add i8 %%26, -1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp_2e_us_count);
  llvm_cbe_phitmp_2e_us = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__18&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nphitmp.us = 0x%X\n", ((unsigned char )(llvm_cbe_phitmp_2e_us&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add nsw i32 %%storemerge8.us, -2, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__19 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8_2e_us&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__19&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sext i32 %%27 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__20 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds i64* %%orig_out, i64 %%28, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__21 = (signed long long *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__20))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__20));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i64* %%29, align 8, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__22 = (unsigned long long )*llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__22);
  llvm_cbe_tmp__7__PHI_TEMPORARY = (unsigned char )llvm_cbe_phitmp_2e_us;   /* for PHI node */
  llvm_cbe_tmp__8__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__22;   /* for PHI node */
  goto llvm_cbe__2e_thread_2e_us_2e_thread;

llvm_cbe_tmp__71:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6.us = or i1 %%32, %%33, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond6_2e_us_count);
  llvm_cbe_or_2e_cond6_2e_us = (bool )((((( char )llvm_cbe_tmp__7) < (( char )llvm_cbe_storemerge1_2e_us)) | ((( char )llvm_cbe_tmp__7) < (( char )llvm_cbe_phitmp12)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6.us = 0x%X\n", llvm_cbe_or_2e_cond6_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%..us = select i1 %%or.cond6.us, i8 %%phitmp12, i8 %%9, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e__2e_us_count);
  llvm_cbe__2e__2e_us = (unsigned char )((llvm_cbe_or_2e_cond6_2e_us) ? ((unsigned char )llvm_cbe_phitmp12) : ((unsigned char )llvm_cbe_tmp__7));
if (AESL_DEBUG_TRACE)
printf("\n..us = 0x%X\n", llvm_cbe__2e__2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%.7.us = select i1 %%or.cond6.us, i64 0, i64 %%10, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_7_2e_us_count);
  llvm_cbe__2e_7_2e_us = (unsigned long long )((llvm_cbe_or_2e_cond6_2e_us) ? ((unsigned long long )0ull) : ((unsigned long long )llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n.7.us = 0x%I64X\n", llvm_cbe__2e_7_2e_us);
  llvm_cbe_tmp__3__PHI_TEMPORARY = (unsigned char )llvm_cbe__2e__2e_us;   /* for PHI node */
  llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_7_2e_us;   /* for PHI node */
  goto llvm_cbe_tmp__70;

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '..split_crit_edge' to make GCC happy */
llvm_cbe__2e__2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge8 = phi i32 [ %%88, %%84 ], [ 1, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge8_count);
  llvm_cbe_storemerge8 = (unsigned int )llvm_cbe_storemerge8__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge8 = 0x%X",llvm_cbe_storemerge8);
printf("\n = 0x%X",llvm_cbe_tmp__67);
printf("\n = 0x%X",1u);
}
  if (((llvm_cbe_storemerge8&4294967295U) == (1u&4294967295U))) {
    goto llvm_cbe__2e_thread;
  } else {
    goto llvm_cbe_tmp__72;
  }

llvm_cbe_tmp__73:
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = phi i8 [ %%storemerge1, %%68 ], [ %%., %%81  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__64 = (unsigned char )llvm_cbe_tmp__64__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__64);
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n. = 0x%X",llvm_cbe__2e_);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i64 [ %%70, %%68 ], [ %%.7, %%81  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned long long )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%I64X",llvm_cbe_storemerge3);
printf("\n = 0x%I64X",llvm_cbe_tmp__56);
printf("\n.7 = 0x%I64X",llvm_cbe__2e_7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds i8* %%score_out, i64 %%75, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_204_count);
  llvm_cbe_tmp__65 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__61))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__61));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%85, i8* %%86, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_205_count);
  *llvm_cbe_tmp__65 = llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = getelementptr inbounds i64* %%orig_out, i64 %%75, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__66 = (signed long long *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__61))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__61));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i64 %%storemerge3, i64* %%87, align 8, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_207_count);
  *llvm_cbe_tmp__66 = llvm_cbe_storemerge3;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge3 = 0x%I64X\n", llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = add nsw i32 %%storemerge8, 1, !dbg !7 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__67 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__67&4294967295ull)));
  if (((llvm_cbe_tmp__67&4294967295U) == (101u&4294967295U))) {
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge8__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__67;   /* for PHI node */
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

llvm_cbe_tmp__74:
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = phi i64 [ %%63, %%43 ], [ %%42, %%.thread  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__55 = (unsigned long long )llvm_cbe_tmp__55__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__55);
printf("\n = 0x%I64X",llvm_cbe_tmp__50);
printf("\n = 0x%I64X",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = phi i64 [ %%59, %%43 ], [ %%3, %%.thread  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__56 = (unsigned long long )llvm_cbe_tmp__56__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__56);
printf("\n = 0x%I64X",llvm_cbe_tmp__46);
printf("\n = 0x%I64X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp10161720.in = phi i8 [ %%51, %%43 ], [ %%38, %%.thread  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp10161720_2e_in_count);
  llvm_cbe_phitmp10161720_2e_in = (unsigned char )llvm_cbe_phitmp10161720_2e_in__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nphitmp10161720.in = 0x%X",llvm_cbe_phitmp10161720_2e_in);
printf("\n = 0x%X",llvm_cbe_tmp__38);
printf("\n = 0x%X",llvm_cbe_tmp__26);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = phi i8 [ %%47, %%43 ], [ 0, %%.thread  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__57 = (unsigned char )llvm_cbe_tmp__57__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__57);
printf("\n = 0x%X",llvm_cbe_tmp__34);
printf("\n = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = phi i8 [ %%phitmp, %%43 ], [ -1, %%.thread  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__58 = (unsigned char )llvm_cbe_tmp__58__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__58);
printf("\nphitmp = 0x%X",llvm_cbe_phitmp);
printf("\n = 0x%X",((unsigned char )-1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = phi i64 [ %%67, %%43 ], [ %%3, %%.thread ], !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__59 = (unsigned long long )llvm_cbe_tmp__59__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__59);
printf("\n = 0x%I64X",llvm_cbe_tmp__54);
printf("\n = 0x%I64X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp10161720 = add i8 %%phitmp10161720.in, -1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp10161720_count);
  llvm_cbe_phitmp10161720 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_phitmp10161720_2e_in&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nphitmp10161720 = 0x%X\n", ((unsigned char )(llvm_cbe_phitmp10161720&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = add nsw i32 %%storemerge8, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__60 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__60&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = sext i32 %%74 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_177_count);
  llvm_cbe_tmp__61 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = getelementptr inbounds i2* %%read, i64 %%75, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__62 = ( char *)(&llvm_cbe_read[(((signed long long )llvm_cbe_tmp__61))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__61));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load i2* %%76, align 1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__63 = (unsigned char )*llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.v = select i1 %%78, i8 1, i8 -1, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_2e_v_count);
  llvm_cbe_storemerge1_2e_v = (unsigned char )((((llvm_cbe_tmp__63&3U) == (llvm_cbe_ref_genome&3U))) ? ((unsigned char )((unsigned char )1)) : ((unsigned char )((unsigned char )-1)));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.v = 0x%X\n", llvm_cbe_storemerge1_2e_v);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = add i8 %%storemerge1.v, %%71, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1_2e_v&255ull)) + ((unsigned char )(llvm_cbe_tmp__57&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1 = 0x%X\n", ((unsigned char )(llvm_cbe_storemerge1&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = or i1 %%79, %%80, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )((((( char )llvm_cbe_storemerge1) < (( char )llvm_cbe_tmp__58)) | ((( char )llvm_cbe_storemerge1) < (( char )llvm_cbe_phitmp10161720)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe_tmp__75;
  } else {
    llvm_cbe_tmp__64__PHI_TEMPORARY = (unsigned char )llvm_cbe_storemerge1;   /* for PHI node */
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__56;   /* for PHI node */
    goto llvm_cbe_tmp__73;
  }

llvm_cbe__2e_thread:
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add nsw i32 %%storemerge8, -1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__23 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__23&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = sext i32 %%35 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__24 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i8* %%score_in, i64 %%36, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__25 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__24))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__24));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load i8* %%37, align 1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__26 = (unsigned char )*llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add nsw i32 %%storemerge8, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = sext i32 %%39 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_124_count);
  llvm_cbe_tmp__28 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds i64* %%orig_in, i64 %%40, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__29 = (signed long long *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__28))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__28));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load i64* %%41, align 8, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_126_count);
  llvm_cbe_tmp__30 = (unsigned long long )*llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__30);
  llvm_cbe_tmp__55__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__30;   /* for PHI node */
  llvm_cbe_tmp__56__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__2;   /* for PHI node */
  llvm_cbe_phitmp10161720_2e_in__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__26;   /* for PHI node */
  llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
  llvm_cbe_tmp__58__PHI_TEMPORARY = (unsigned char )((unsigned char )-1);   /* for PHI node */
  llvm_cbe_tmp__59__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__2;   /* for PHI node */
  goto llvm_cbe_tmp__74;

llvm_cbe_tmp__72:
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = add nsw i32 %%storemerge8, -2, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__31 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__31&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = sext i32 %%44 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__32 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds i8* %%score_in, i64 %%45, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_133_count);
  llvm_cbe_tmp__33 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__32))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load i8* %%46, align 1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__34 = (unsigned char )*llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = add nsw i32 %%storemerge8, -1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__35 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__35&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = sext i32 %%48 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__36 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = getelementptr inbounds i8* %%score_in, i64 %%49, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__37 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__36))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__36));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i8* %%50, align 1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__38 = (unsigned char )*llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add nsw i32 %%storemerge8, -2, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__39&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = sext i32 %%52 to i64, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__40 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = getelementptr inbounds i8* %%score_out, i64 %%53, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_147_count);
  llvm_cbe_tmp__41 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__40))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i8* %%54, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__42 = (unsigned char )*llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp = add i8 %%55, -1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp_count);
  llvm_cbe_phitmp = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__42&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nphitmp = 0x%X\n", ((unsigned char )(llvm_cbe_phitmp&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add nsw i32 %%storemerge8, -2, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__43 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__43&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = sext i32 %%56 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__44 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds i64* %%orig_in, i64 %%57, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__45 = (signed long long *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__44))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load i64* %%58, align 8, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__46 = (unsigned long long )*llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = add nsw i32 %%storemerge8, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__47 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__47&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = sext i32 %%60 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__48 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds i64* %%orig_in, i64 %%61, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__49 = (signed long long *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__48))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__48));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load i64* %%62, align 8, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__50 = (unsigned long long )*llvm_cbe_tmp__49;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = add nsw i32 %%storemerge8, -2, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__51 = (unsigned int )((unsigned int )(llvm_cbe_storemerge8&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__51&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = sext i32 %%64 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_163_count);
  llvm_cbe_tmp__52 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = getelementptr inbounds i64* %%orig_out, i64 %%65, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__53 = (signed long long *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__52))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__52));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load i64* %%66, align 8, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_165_count);
  llvm_cbe_tmp__54 = (unsigned long long )*llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__54);
  llvm_cbe_tmp__55__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__50;   /* for PHI node */
  llvm_cbe_tmp__56__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__46;   /* for PHI node */
  llvm_cbe_phitmp10161720_2e_in__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__38;   /* for PHI node */
  llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__34;   /* for PHI node */
  llvm_cbe_tmp__58__PHI_TEMPORARY = (unsigned char )llvm_cbe_phitmp;   /* for PHI node */
  llvm_cbe_tmp__59__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__54;   /* for PHI node */
  goto llvm_cbe_tmp__74;

llvm_cbe_tmp__75:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond6 = or i1 %%82, %%83, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond6_count);
  llvm_cbe_or_2e_cond6 = (bool )((((( char )llvm_cbe_tmp__58) < (( char )llvm_cbe_storemerge1)) | ((( char )llvm_cbe_tmp__58) < (( char )llvm_cbe_phitmp10161720)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond6 = 0x%X\n", llvm_cbe_or_2e_cond6);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%or.cond6, i8 %%phitmp10161720, i8 %%72, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned char )((llvm_cbe_or_2e_cond6) ? ((unsigned char )llvm_cbe_phitmp10161720) : ((unsigned char )llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%.7 = select i1 %%or.cond6, i64 %%69, i64 %%73, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_7_count);
  llvm_cbe__2e_7 = (unsigned long long )((llvm_cbe_or_2e_cond6) ? ((unsigned long long )llvm_cbe_tmp__55) : ((unsigned long long )llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n.7 = 0x%I64X\n", llvm_cbe__2e_7);
  llvm_cbe_tmp__64__PHI_TEMPORARY = (unsigned char )llvm_cbe__2e_;   /* for PHI node */
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned long long )llvm_cbe__2e_7;   /* for PHI node */
  goto llvm_cbe_tmp__73;

  } while (1); /* end of syntactic loop '..split_crit_edge' */
llvm_cbe__2e_us_2d_lcssa_2e_us:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @doRow}\n");
  return;
}


signed long long AESL_ORIG_DUT_needlemanWunsch( char *llvm_cbe_read,  char *llvm_cbe_ref_genome) {
  static  unsigned long long aesl_llvm_cbe_score1_count = 0;
   char llvm_cbe_score1[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_score2_count = 0;
   char llvm_cbe_score2[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_orig1_count = 0;
  signed long long llvm_cbe_orig1[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_orig2_count = 0;
  signed long long llvm_cbe_orig2[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
   char *llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
   char *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  signed long long *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  signed long long *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
   char *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  signed long long *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
   char *llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  signed long long *llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned int llvm_cbe_storemerge1;
  unsigned int llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned long long llvm_cbe_tmp__84;
  unsigned long long llvm_cbe_tmp__84__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  unsigned int llvm_cbe_tmp__85;
  unsigned int llvm_cbe_tmp__85__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  unsigned int llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  unsigned long long llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
   char *llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned char llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  unsigned char llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  unsigned long long llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe__2e_2_count = 0;
  unsigned long long llvm_cbe__2e_2;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  unsigned long long llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
   char *llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  unsigned char llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  unsigned char llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  unsigned long long llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  unsigned long long llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned int llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @AESL_ORIG_DUT_needlemanWunsch\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [100 x i8]* %%score1, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__76 = ( char *)(&llvm_cbe_score1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [100 x i8]* %%score2, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__77 = ( char *)(&llvm_cbe_score2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [100 x i64]* %%orig1, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__78 = (signed long long *)(&llvm_cbe_orig1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [100 x i64]* %%orig2, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__79 = (signed long long *)(&llvm_cbe_orig2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [100 x i8]* %%score2, i64 0, i64 99, !dbg !6 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__80 = ( char *)(&llvm_cbe_score2[(((signed long long )99ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [100 x i64]* %%orig2, i64 0, i64 99, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__81 = (signed long long *)(&llvm_cbe_orig2[(((signed long long )99ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [100 x i8]* %%score1, i64 0, i64 99, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__82 = ( char *)(&llvm_cbe_score1[(((signed long long )99ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [100 x i64]* %%orig1, i64 0, i64 99, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__83 = (signed long long *)(&llvm_cbe_orig1[(((signed long long )99ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
  llvm_cbe_tmp__84__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
  llvm_cbe_tmp__85__PHI_TEMPORARY = (unsigned int )4294967196u;   /* for PHI node */
  goto llvm_cbe_tmp__103;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__103:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i32 [ 1, %%0 ], [ %%30, %%9  for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned int )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n = 0x%X",1u);
printf("\n = 0x%X",llvm_cbe_tmp__102);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = phi i64 [ 0, %%0 ], [ %%29, %%9  for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__84 = (unsigned long long )llvm_cbe_tmp__84__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__84);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",llvm_cbe_tmp__101);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = phi i32 [ -100, %%0 ], [ %%28, %%9  for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__85 = (unsigned int )llvm_cbe_tmp__85__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__85);
printf("\n = 0x%X",4294967196u);
printf("\n = 0x%X",llvm_cbe_tmp__100);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i32 %%storemerge1, -1, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_263_count);
  llvm_cbe_tmp__86 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__86&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i32 %%12 to i64, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_264_count);
  llvm_cbe_tmp__87 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__86&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i2* %%ref_genome, i64 %%13, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_265_count);
  llvm_cbe_tmp__88 = ( char *)(&llvm_cbe_ref_genome[(((signed long long )llvm_cbe_tmp__87))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__87));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i2* %%14, align 1, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__89 = (unsigned char )*llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  call void @doRow(i32 %%storemerge1, i2* %%read, i2 zeroext %%15, i8* %%1, i8* %%2, i64* %%3, i64* %%4), !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_267_count);
  doRow(llvm_cbe_storemerge1, ( char *)llvm_cbe_read, llvm_cbe_tmp__89, ( char *)llvm_cbe_tmp__76, ( char *)llvm_cbe_tmp__77, (signed long long *)llvm_cbe_tmp__78, (signed long long *)llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__89);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )99ull) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'score2' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* %%5, align 1, !dbg !6 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_268_count);
  llvm_cbe_tmp__90 = (unsigned char )*llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = sext i8 %%16 to i32, !dbg !6 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__91 = (unsigned int )((signed int )( char )llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__91);

#ifdef AESL_BC_SIM
  if (!(((signed long long )99ull) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'orig2' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i64* %%6, align 8, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__92 = (unsigned long long )*llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%18, i32 %%17, i32 %%11, !dbg !6 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )(((((signed int )llvm_cbe_tmp__91) > ((signed int )llvm_cbe_tmp__85))) ? ((unsigned int )llvm_cbe_tmp__91) : ((unsigned int )llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%.2 = select i1 %%18, i64 %%19, i64 %%10, !dbg !6 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe__2e_2_count);
  llvm_cbe__2e_2 = (unsigned long long )(((((signed int )llvm_cbe_tmp__91) > ((signed int )llvm_cbe_tmp__85))) ? ((unsigned long long )llvm_cbe_tmp__92) : ((unsigned long long )llvm_cbe_tmp__84));
if (AESL_DEBUG_TRACE)
printf("\n.2 = 0x%I64X\n", llvm_cbe__2e_2);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add i32 %%storemerge1, 1, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__93 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__93&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = zext i32 %%storemerge1 to i64, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__94 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge1&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds i2* %%ref_genome, i64 %%21, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__95 = ( char *)(&llvm_cbe_ref_genome[(((signed long long )llvm_cbe_tmp__94))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__94));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load i2* %%22, align 1, !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__96 = (unsigned char )*llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  call void @doRow(i32 %%20, i2* %%read, i2 zeroext %%23, i8* %%2, i8* %%1, i64* %%4, i64* %%3), !dbg !4 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_289_count);
  doRow(llvm_cbe_tmp__93, ( char *)llvm_cbe_read, llvm_cbe_tmp__96, ( char *)llvm_cbe_tmp__77, ( char *)llvm_cbe_tmp__76, (signed long long *)llvm_cbe_tmp__79, (signed long long *)llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__93);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__96);
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )99ull) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'score1' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i8* %%7, align 1, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__97 = (unsigned char )*llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sext i8 %%24 to i32, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_291_count);
  llvm_cbe_tmp__98 = (unsigned int )((signed int )( char )llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__98);

#ifdef AESL_BC_SIM
  if (!(((signed long long )99ull) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'orig1' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i64* %%8, align 8, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__99 = (unsigned long long )*llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = select i1 %%26, i32 %%25, i32 %%., !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__100 = (unsigned int )(((((signed int )llvm_cbe_tmp__98) > ((signed int )llvm_cbe__2e_))) ? ((unsigned int )llvm_cbe_tmp__98) : ((unsigned int )llvm_cbe__2e_));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = select i1 %%26, i64 %%27, i64 %%.2, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__101 = (unsigned long long )(((((signed int )llvm_cbe_tmp__98) > ((signed int )llvm_cbe__2e_))) ? ((unsigned long long )llvm_cbe_tmp__99) : ((unsigned long long )llvm_cbe__2e_2));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add i32 %%storemerge1, 2, !dbg !7 for 0x%I64xth hint within @AESL_ORIG_DUT_needlemanWunsch  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__102 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__102&4294967295ull)));
  if ((((unsigned int )llvm_cbe_tmp__102&4294967295U) < ((unsigned int )1000001u&4294967295U))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__102;   /* for PHI node */
    llvm_cbe_tmp__84__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__101;   /* for PHI node */
    llvm_cbe_tmp__85__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__100;   /* for PHI node */
    goto llvm_cbe_tmp__103;
  } else {
    goto llvm_cbe_tmp__104;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__104:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @AESL_ORIG_DUT_needlemanWunsch}\n");
  return llvm_cbe_tmp__101;
}

