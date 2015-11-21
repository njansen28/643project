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
unsigned int doRow(signed int llvm_cbe_i,  char *llvm_cbe_read,  char llvm_cbe_ref_genome,  char *llvm_cbe_score_in,  char *llvm_cbe_score_out, signed int *llvm_cbe_orig_in, signed int *llvm_cbe_orig_out,  char *llvm_cbe_final_score_out);
unsigned int needlemanWunsch( char *llvm_cbe_read,  char *llvm_cbe_ref_genome);


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

unsigned int doRow(signed int llvm_cbe_i,  char *llvm_cbe_read,  char llvm_cbe_ref_genome,  char *llvm_cbe_score_in,  char *llvm_cbe_score_out, signed int *llvm_cbe_orig_in, signed int *llvm_cbe_orig_out,  char *llvm_cbe_final_score_out) {
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
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned char llvm_cbe_tmp__3;
  unsigned char llvm_cbe_tmp__3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge3_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge3_2e_us;
  unsigned int llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
   char *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  signed int *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge10_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge10_2e_us;
  unsigned int llvm_cbe_storemerge10_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  unsigned char llvm_cbe_tmp__7;
  unsigned char llvm_cbe_tmp__7__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge349_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge349_2e_us;
  unsigned int llvm_cbe_storemerge349_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned char llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  unsigned char llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_op13_count = 0;
  unsigned char llvm_cbe__2e_op13;
  static  unsigned long long aesl_llvm_cbe_phitmp12_count = 0;
  unsigned char llvm_cbe_phitmp12;
  static  unsigned long long aesl_llvm_cbe_phitmp14_count = 0;
  unsigned char llvm_cbe_phitmp14;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  unsigned long long llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
   char *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned char llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_v_2e_us_count = 0;
  unsigned char llvm_cbe_storemerge1_2e_v_2e_us;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_us_count = 0;
  unsigned char llvm_cbe_storemerge1_2e_us;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond_2e_us;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_2e_us_count = 0;
  bool llvm_cbe_or_2e_cond8_2e_us;
  static  unsigned long long aesl_llvm_cbe__2e__2e_us_count = 0;
  unsigned char llvm_cbe__2e__2e_us;
  static  unsigned long long aesl_llvm_cbe__2e_storemerge34_2e_us_count = 0;
  unsigned int llvm_cbe__2e_storemerge34_2e_us;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge10_count = 0;
  unsigned int llvm_cbe_storemerge10;
  unsigned int llvm_cbe_storemerge10__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  unsigned char llvm_cbe_tmp__14;
  unsigned char llvm_cbe_tmp__14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge349_count = 0;
  unsigned int llvm_cbe_storemerge349;
  unsigned int llvm_cbe_storemerge349__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
   char *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  unsigned char llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
   char *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  unsigned char llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  signed int *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
   char *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned char llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  unsigned char llvm_cbe_tmp__31;
  unsigned char llvm_cbe_tmp__31__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  unsigned long long llvm_cbe_tmp__32__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned char llvm_cbe_tmp__33;
  unsigned char llvm_cbe_tmp__33__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  unsigned int llvm_cbe_tmp__34;
  unsigned int llvm_cbe_tmp__34__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  signed int *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe__2e_op_count = 0;
  unsigned char llvm_cbe__2e_op;
  static  unsigned long long aesl_llvm_cbe_phitmp_count = 0;
  unsigned char llvm_cbe_phitmp;
  static  unsigned long long aesl_llvm_cbe_phitmp11_count = 0;
  unsigned char llvm_cbe_phitmp11;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
   char *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  unsigned char llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_2e_v_count = 0;
  unsigned char llvm_cbe_storemerge1_2e_v;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned char llvm_cbe_storemerge1;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond8_count = 0;
  bool llvm_cbe_or_2e_cond8;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned char llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe__2e_storemerge34_count = 0;
  unsigned int llvm_cbe__2e_storemerge34;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  unsigned char llvm_cbe_tmp__41;
  unsigned char llvm_cbe_tmp__41__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
   char *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  signed int *llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  unsigned int llvm_cbe_tmp__44;
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
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  unsigned char llvm_cbe__2e_lcssa;
  unsigned char llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_storemerge34_2e_lcssa_count = 0;
  unsigned int llvm_cbe_storemerge34_2e_lcssa;
  unsigned int llvm_cbe_storemerge34_2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @doRow\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = trunc i32 %%i to i20, !dbg !3 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__1 = (unsigned int )((unsigned int )llvm_cbe_i&1048575U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i20 %%1, -1, !dbg !3 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__2 = (unsigned int )((unsigned int )(llvm_cbe_tmp__1&1048575ull)) + ((unsigned int )(((unsigned int )-1)&1048575ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__2&1048575ull)));
  if (((llvm_cbe_i&4294967295U) == (1u&4294967295U))) {
    llvm_cbe_storemerge10_2e_us__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    llvm_cbe_tmp__7__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    llvm_cbe_storemerge349_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__2;   /* for PHI node */
    goto llvm_cbe_tmp__45;
  } else {
    llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )1u;   /* for PHI node */
    llvm_cbe_tmp__14__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    llvm_cbe_storemerge349__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__2;   /* for PHI node */
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__45:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge10.us = phi i32 [ %%8, %%4 ], [ 1, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge10_2e_us_count);
  llvm_cbe_storemerge10_2e_us = (unsigned int )llvm_cbe_storemerge10_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge10.us = 0x%X",llvm_cbe_storemerge10_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__6);
printf("\n = 0x%X",1u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = phi i8 [ %%5, %%4 ], [ 0, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__7 = (unsigned char )llvm_cbe_tmp__7__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__7);
printf("\n = 0x%X",llvm_cbe_tmp__3);
printf("\n = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge349.us = phi i20 [ %%storemerge3.us, %%4 ], [ %%2, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge349_2e_us_count);
  llvm_cbe_storemerge349_2e_us = (unsigned int )llvm_cbe_storemerge349_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge349.us = 0x%X",llvm_cbe_storemerge349_2e_us);
printf("\nstoremerge3.us = 0x%X",llvm_cbe_storemerge3_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = trunc i32 %%storemerge10.us to i8, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__8 = (unsigned char )((unsigned char )llvm_cbe_storemerge10_2e_us&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sub i8 1, %%11, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_102_count);
  llvm_cbe_tmp__9 = (unsigned char )((unsigned char )(((unsigned char )(((unsigned char )1)&255ull)) - ((unsigned char )(llvm_cbe_tmp__8&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__9&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%.op13 = add i8 %%10, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_op13_count);
  llvm_cbe__2e_op13 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__7&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n.op13 = 0x%X\n", ((unsigned char )(llvm_cbe__2e_op13&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp12 = select i1 %%13, i8 -1, i8 %%.op13, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp12_count);
  llvm_cbe_phitmp12 = (unsigned char )((((llvm_cbe_storemerge10_2e_us&4294967295U) == (1u&4294967295U))) ? ((unsigned char )((unsigned char )-1)) : ((unsigned char )llvm_cbe__2e_op13));
if (AESL_DEBUG_TRACE)
printf("\nphitmp12 = 0x%X\n", llvm_cbe_phitmp12);
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp14 = xor i8 %%11, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp14_count);
  llvm_cbe_phitmp14 = (unsigned char )((unsigned char )(llvm_cbe_tmp__8 ^ ((unsigned char )-1)));
if (AESL_DEBUG_TRACE)
printf("\nphitmp14 = 0x%X\n", llvm_cbe_phitmp14);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add nsw i32 %%storemerge10.us, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__10 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10_2e_us&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__10&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = sext i32 %%14 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_114_count);
  llvm_cbe_tmp__11 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds i2* %%read, i64 %%15, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_115_count);
  llvm_cbe_tmp__12 = ( char *)(&llvm_cbe_read[(((signed long long )llvm_cbe_tmp__11))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__11));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i2* %%16, align 1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__13 = (unsigned char )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.v.us = select i1 %%18, i8 1, i8 -1, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_2e_v_2e_us_count);
  llvm_cbe_storemerge1_2e_v_2e_us = (unsigned char )((((llvm_cbe_tmp__13&3U) == (llvm_cbe_ref_genome&3U))) ? ((unsigned char )((unsigned char )1)) : ((unsigned char )((unsigned char )-1)));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.v.us = 0x%X\n", llvm_cbe_storemerge1_2e_v_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.us = add i8 %%storemerge1.v.us, %%12, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_2e_us_count);
  llvm_cbe_storemerge1_2e_us = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1_2e_v_2e_us&255ull)) + ((unsigned char )(llvm_cbe_tmp__9&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.us = 0x%X\n", ((unsigned char )(llvm_cbe_storemerge1_2e_us&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond.us = or i1 %%19, %%20, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond_2e_us_count);
  llvm_cbe_or_2e_cond_2e_us = (bool )((((( char )llvm_cbe_storemerge1_2e_us) < (( char )llvm_cbe_phitmp12)) | ((( char )llvm_cbe_storemerge1_2e_us) < (( char )llvm_cbe_phitmp14)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond.us = 0x%X\n", llvm_cbe_or_2e_cond_2e_us);
  if (llvm_cbe_or_2e_cond_2e_us) {
    goto llvm_cbe_tmp__46;
  } else {
    llvm_cbe_tmp__3__PHI_TEMPORARY = (unsigned char )llvm_cbe_storemerge1_2e_us;   /* for PHI node */
    llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned int )((unsigned int )0);   /* for PHI node */
    goto llvm_cbe_tmp__47;
  }

llvm_cbe_tmp__47:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = phi i8 [ %%storemerge1.us, %%9 ], [ %%..us, %%21  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__3 = (unsigned char )llvm_cbe_tmp__3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__3);
printf("\nstoremerge1.us = 0x%X",llvm_cbe_storemerge1_2e_us);
printf("\n..us = 0x%X",llvm_cbe__2e__2e_us);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3.us = phi i20 [ 0, %%9 ], [ %%.storemerge34.us, %%21  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge3_2e_us_count);
  llvm_cbe_storemerge3_2e_us = (unsigned int )llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3.us = 0x%X",llvm_cbe_storemerge3_2e_us);
printf("\n = 0x%X",((unsigned int )0));
printf("\n.storemerge34.us = 0x%X",llvm_cbe__2e_storemerge34_2e_us);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds i8* %%score_out, i64 %%15, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__4 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__11))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__11));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%5, i8* %%6, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_71_count);
  *llvm_cbe_tmp__4 = llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds i20* %%orig_out, i64 %%15, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__5 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__11))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__11));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i20 %%storemerge3.us, i20* %%7, align 4, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_73_count);
  *llvm_cbe_tmp__5 = ((llvm_cbe_storemerge3_2e_us) & 1048575ull);
if (AESL_DEBUG_TRACE)
printf("\nstoremerge3.us = 0x%X\n", llvm_cbe_storemerge3_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge10.us, 1, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
  if (((llvm_cbe_tmp__6&4294967295U) == (101u&4294967295U))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__3;   /* for PHI node */
    llvm_cbe_storemerge34_2e_lcssa__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge3_2e_us;   /* for PHI node */
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge10_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__6;   /* for PHI node */
    llvm_cbe_tmp__7__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__3;   /* for PHI node */
    llvm_cbe_storemerge349_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge3_2e_us;   /* for PHI node */
    goto llvm_cbe_tmp__45;
  }

llvm_cbe_tmp__46:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8.us = or i1 %%22, %%23, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond8_2e_us_count);
  llvm_cbe_or_2e_cond8_2e_us = (bool )((((( char )llvm_cbe_phitmp12) < (( char )llvm_cbe_storemerge1_2e_us)) | ((( char )llvm_cbe_phitmp12) < (( char )llvm_cbe_phitmp14)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8.us = 0x%X\n", llvm_cbe_or_2e_cond8_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%..us = select i1 %%or.cond8.us, i8 %%phitmp14, i8 %%phitmp12, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e__2e_us_count);
  llvm_cbe__2e__2e_us = (unsigned char )((llvm_cbe_or_2e_cond8_2e_us) ? ((unsigned char )llvm_cbe_phitmp14) : ((unsigned char )llvm_cbe_phitmp12));
if (AESL_DEBUG_TRACE)
printf("\n..us = 0x%X\n", llvm_cbe__2e__2e_us);
if (AESL_DEBUG_TRACE)
printf("\n  %%.storemerge34.us = select i1 %%or.cond8.us, i20 0, i20 %%storemerge349.us, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_storemerge34_2e_us_count);
  llvm_cbe__2e_storemerge34_2e_us = (unsigned int )((llvm_cbe_or_2e_cond8_2e_us) ? ((unsigned int )((unsigned int )0)) : ((unsigned int )llvm_cbe_storemerge349_2e_us));
if (AESL_DEBUG_TRACE)
printf("\n.storemerge34.us = 0x%X\n", llvm_cbe__2e_storemerge34_2e_us);
  llvm_cbe_tmp__3__PHI_TEMPORARY = (unsigned char )llvm_cbe__2e__2e_us;   /* for PHI node */
  llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_storemerge34_2e_us;   /* for PHI node */
  goto llvm_cbe_tmp__47;

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '..split_crit_edge' to make GCC happy */
llvm_cbe__2e__2e_split_crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge10 = phi i32 [ %%64, %%60 ], [ 1, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge10_count);
  llvm_cbe_storemerge10 = (unsigned int )llvm_cbe_storemerge10__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge10 = 0x%X",llvm_cbe_storemerge10);
printf("\n = 0x%X",llvm_cbe_tmp__44);
printf("\n = 0x%X",1u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = phi i8 [ %%61, %%60 ], [ 0, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_151_count);
  llvm_cbe_tmp__14 = (unsigned char )llvm_cbe_tmp__14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__14);
printf("\n = 0x%X",llvm_cbe_tmp__41);
printf("\n = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge349 = phi i20 [ %%storemerge3, %%60 ], [ %%2, %%0  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge349_count);
  llvm_cbe_storemerge349 = (unsigned int )llvm_cbe_storemerge349__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge349 = 0x%X",llvm_cbe_storemerge349);
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",llvm_cbe_tmp__2);
}
  if (((llvm_cbe_storemerge10&4294967295U) == (1u&4294967295U))) {
    goto llvm_cbe_tmp__48;
  } else {
    goto llvm_cbe__2e_thread7;
  }

llvm_cbe_tmp__49:
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = phi i8 [ %%storemerge1, %%43 ], [ %%., %%57  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__41 = (unsigned char )llvm_cbe_tmp__41__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__41);
printf("\nstoremerge1 = 0x%X",llvm_cbe_storemerge1);
printf("\n. = 0x%X",llvm_cbe__2e_);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i20 [ %%47, %%43 ], [ %%.storemerge34, %%57  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",llvm_cbe_tmp__34);
printf("\n.storemerge34 = 0x%X",llvm_cbe__2e_storemerge34);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = getelementptr inbounds i8* %%score_out, i64 %%51, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_238_count);
  llvm_cbe_tmp__42 = ( char *)(&llvm_cbe_score_out[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%61, i8* %%62, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_239_count);
  *llvm_cbe_tmp__42 = llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = getelementptr inbounds i20* %%orig_out, i64 %%51, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_240_count);
  llvm_cbe_tmp__43 = (signed int *)(&llvm_cbe_orig_out[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i20 %%storemerge3, i20* %%63, align 4, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_241_count);
  *llvm_cbe_tmp__43 = ((llvm_cbe_storemerge3) & 1048575ull);
if (AESL_DEBUG_TRACE)
printf("\nstoremerge3 = 0x%X\n", llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = add nsw i32 %%storemerge10, 1, !dbg !8 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_242_count);
  llvm_cbe_tmp__44 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__44&4294967295ull)));
  if (((llvm_cbe_tmp__44&4294967295U) == (101u&4294967295U))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__41;   /* for PHI node */
    llvm_cbe_storemerge34_2e_lcssa__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge3;   /* for PHI node */
    goto llvm_cbe__2e_us_2d_lcssa_2e_us;
  } else {
    llvm_cbe_storemerge10__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__44;   /* for PHI node */
    llvm_cbe_tmp__14__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__41;   /* for PHI node */
    llvm_cbe_storemerge349__PHI_TEMPORARY = (unsigned int )llvm_cbe_storemerge3;   /* for PHI node */
    goto llvm_cbe__2e__2e_split_crit_edge;
  }

llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = phi i8 [ %%33, %%.thread7 ], [ %%42, %%38  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__31 = (unsigned char )llvm_cbe_tmp__31__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__31);
printf("\n = 0x%X",llvm_cbe_tmp__22);
printf("\n = 0x%X",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = phi i64 [ %%31, %%.thread7 ], [ %%40, %%38  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__32 = (unsigned long long )llvm_cbe_tmp__32__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__32);
printf("\n = 0x%I64X",llvm_cbe_tmp__20);
printf("\n = 0x%I64X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = phi i8 [ %%29, %%.thread7 ], [ 0, %%38  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__33 = (unsigned char )llvm_cbe_tmp__33__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__33);
printf("\n = 0x%X",llvm_cbe_tmp__18);
printf("\n = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = phi i20 [ %%37, %%.thread7 ], [ %%2, %%38  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__34 = (unsigned int )llvm_cbe_tmp__34__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__34);
printf("\n = 0x%X",llvm_cbe_tmp__26);
printf("\n = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds i20* %%orig_in, i64 %%45, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__35 = (signed int *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__32))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i20* %%48, align 4, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__36 = (unsigned int )*llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%.op = add i8 %%24, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_op_count);
  llvm_cbe__2e_op = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__14&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\n.op = 0x%X\n", ((unsigned char )(llvm_cbe__2e_op&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp = select i1 %%25, i8 -1, i8 %%.op, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp_count);
  llvm_cbe_phitmp = (unsigned char )((((llvm_cbe_storemerge10&4294967295U) == (1u&4294967295U))) ? ((unsigned char )((unsigned char )-1)) : ((unsigned char )llvm_cbe__2e_op));
if (AESL_DEBUG_TRACE)
printf("\nphitmp = 0x%X\n", llvm_cbe_phitmp);
if (AESL_DEBUG_TRACE)
printf("\n  %%phitmp11 = add i8 %%44, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_phitmp11_count);
  llvm_cbe_phitmp11 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_tmp__31&255ull)) + ((unsigned char )(((unsigned char )-1)&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nphitmp11 = 0x%X\n", ((unsigned char )(llvm_cbe_phitmp11&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = add nsw i32 %%storemerge10, -1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__37 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__37&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = sext i32 %%50 to i64, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_200_count);
  llvm_cbe_tmp__38 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds i2* %%read, i64 %%51, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__39 = ( char *)(&llvm_cbe_read[(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load i2* %%52, align 1, !dbg !5 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_202_count);
  llvm_cbe_tmp__40 = (unsigned char )*llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1.v = select i1 %%54, i8 1, i8 -1, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_2e_v_count);
  llvm_cbe_storemerge1_2e_v = (unsigned char )((((llvm_cbe_tmp__40&3U) == (llvm_cbe_ref_genome&3U))) ? ((unsigned char )((unsigned char )1)) : ((unsigned char )((unsigned char )-1)));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1.v = 0x%X\n", llvm_cbe_storemerge1_2e_v);
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = add i8 %%storemerge1.v, %%46, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_storemerge1_2e_v&255ull)) + ((unsigned char )(llvm_cbe_tmp__33&255ull))));
if (AESL_DEBUG_TRACE)
printf("\nstoremerge1 = 0x%X\n", ((unsigned char )(llvm_cbe_storemerge1&255ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = or i1 %%55, %%56, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )((((( char )llvm_cbe_storemerge1) < (( char )llvm_cbe_phitmp)) | ((( char )llvm_cbe_storemerge1) < (( char )llvm_cbe_phitmp11)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    goto llvm_cbe_tmp__51;
  } else {
    llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned char )llvm_cbe_storemerge1;   /* for PHI node */
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__34;   /* for PHI node */
    goto llvm_cbe_tmp__49;
  }

llvm_cbe__2e_thread7:
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = add nsw i32 %%storemerge10, -2, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__15 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__15&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = sext i32 %%26 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__16 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds i8* %%score_in, i64 %%27, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_159_count);
  llvm_cbe_tmp__17 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__16))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__16));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i8* %%28, align 1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__18 = (unsigned char )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%storemerge10, -1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_167_count);
  llvm_cbe_tmp__19 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__19&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sext i32 %%30 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__20 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds i8* %%score_in, i64 %%31, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__21 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__20))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__20));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load i8* %%32, align 1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__22 = (unsigned char )*llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = add nsw i32 %%storemerge10, -2, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__23 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(4294967294u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__23&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = sext i32 %%34 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__24 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = getelementptr inbounds i20* %%orig_in, i64 %%35, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__25 = (signed int *)(&llvm_cbe_orig_in[(((signed long long )llvm_cbe_tmp__24))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__24));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load i20* %%36, align 4, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__26 = (unsigned int )*llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
  llvm_cbe_tmp__31__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__22;   /* for PHI node */
  llvm_cbe_tmp__32__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__20;   /* for PHI node */
  llvm_cbe_tmp__33__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__18;   /* for PHI node */
  llvm_cbe_tmp__34__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__26;   /* for PHI node */
  goto llvm_cbe_tmp__50;

llvm_cbe_tmp__48:
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add nsw i32 %%storemerge10, -1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_storemerge10&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = sext i32 %%39 to i64, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__28 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds i8* %%score_in, i64 %%40, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__29 = ( char *)(&llvm_cbe_score_in[(((signed long long )llvm_cbe_tmp__28))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__28));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load i8* %%41, align 1, !dbg !4 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__30 = (unsigned char )*llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
  llvm_cbe_tmp__31__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp__30;   /* for PHI node */
  llvm_cbe_tmp__32__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__28;   /* for PHI node */
  llvm_cbe_tmp__33__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
  llvm_cbe_tmp__34__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__2;   /* for PHI node */
  goto llvm_cbe_tmp__50;

llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond8 = or i1 %%58, %%59, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_or_2e_cond8_count);
  llvm_cbe_or_2e_cond8 = (bool )((((( char )llvm_cbe_phitmp) < (( char )llvm_cbe_storemerge1)) | ((( char )llvm_cbe_phitmp) < (( char )llvm_cbe_phitmp11)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond8 = 0x%X\n", llvm_cbe_or_2e_cond8);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%or.cond8, i8 %%phitmp11, i8 %%phitmp, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned char )((llvm_cbe_or_2e_cond8) ? ((unsigned char )llvm_cbe_phitmp11) : ((unsigned char )llvm_cbe_phitmp));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%.storemerge34 = select i1 %%or.cond8, i20 %%49, i20 %%storemerge349, !dbg !10 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_storemerge34_count);
  llvm_cbe__2e_storemerge34 = (unsigned int )((llvm_cbe_or_2e_cond8) ? ((unsigned int )llvm_cbe_tmp__36) : ((unsigned int )llvm_cbe_storemerge349));
if (AESL_DEBUG_TRACE)
printf("\n.storemerge34 = 0x%X\n", llvm_cbe__2e_storemerge34);
  llvm_cbe_tmp__41__PHI_TEMPORARY = (unsigned char )llvm_cbe__2e_;   /* for PHI node */
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe__2e_storemerge34;   /* for PHI node */
  goto llvm_cbe_tmp__49;

  } while (1); /* end of syntactic loop '..split_crit_edge' */
llvm_cbe__2e_us_2d_lcssa_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi i8 [ %%5, %%4 ], [ %%61, %%60  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (unsigned char )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = 0x%X",llvm_cbe__2e_lcssa);
printf("\n = 0x%X",llvm_cbe_tmp__3);
printf("\n = 0x%X",llvm_cbe_tmp__41);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge34.lcssa = phi i20 [ %%storemerge3.us, %%4 ], [ %%storemerge3, %%60  for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_storemerge34_2e_lcssa_count);
  llvm_cbe_storemerge34_2e_lcssa = (unsigned int )llvm_cbe_storemerge34_2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge34.lcssa = 0x%X",llvm_cbe_storemerge34_2e_lcssa);
printf("\nstoremerge3.us = 0x%X",llvm_cbe_storemerge3_2e_us);
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
}
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%.lcssa, i8* %%final_score_out, align 1, !dbg !6 for 0x%I64xth hint within @doRow  --> \n", ++aesl_llvm_cbe_264_count);
  *llvm_cbe_final_score_out = llvm_cbe__2e_lcssa;
if (AESL_DEBUG_TRACE)
printf("\n.lcssa = 0x%X\n", llvm_cbe__2e_lcssa);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @doRow}\n");
  return llvm_cbe_storemerge34_2e_lcssa;
}


unsigned int needlemanWunsch( char *llvm_cbe_read,  char *llvm_cbe_ref_genome) {
  static  unsigned long long aesl_llvm_cbe_score1_count = 0;
   char llvm_cbe_score1[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_score2_count = 0;
   char llvm_cbe_score2[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_orig1_count = 0;
  signed int llvm_cbe_orig1[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_orig2_count = 0;
  signed int llvm_cbe_orig2[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_score_out1_count = 0;
   char llvm_cbe_score_out1;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_score_out2_count = 0;
   char llvm_cbe_score_out2;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
   char *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
   char *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  signed int *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  signed int *llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2_count = 0;
  unsigned int llvm_cbe_storemerge2;
  unsigned int llvm_cbe_storemerge2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  unsigned int llvm_cbe_tmp__56;
  unsigned int llvm_cbe_tmp__56__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  unsigned int llvm_cbe_tmp__57;
  unsigned int llvm_cbe_tmp__57__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned int llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
   char *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  unsigned char llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  unsigned int llvm_cbe_tmp__62;
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
  unsigned char llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  unsigned int llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned int llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe__2e_1_count = 0;
  unsigned int llvm_cbe__2e_1;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  unsigned long long llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
   char *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  unsigned char llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  unsigned char llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  unsigned int llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @needlemanWunsch\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [100 x i8]* %%score1, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__52 = ( char *)(&llvm_cbe_score1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [100 x i8]* %%score2, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__53 = ( char *)(&llvm_cbe_score2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [100 x i20]* %%orig1, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_294_count);
  llvm_cbe_tmp__54 = (signed int *)(&llvm_cbe_orig1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [100 x i20]* %%orig2, i64 0, i64 0, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_295_count);
  llvm_cbe_tmp__55 = (signed int *)(&llvm_cbe_orig2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
  llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__56__PHI_TEMPORARY = (unsigned int )((unsigned int )0);   /* for PHI node */
  llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned int )4294967196u;   /* for PHI node */
  goto llvm_cbe_tmp__74;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__74:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2 = phi i32 [ 0, %%0 ], [ %%16, %%5  for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_storemerge2_count);
  llvm_cbe_storemerge2 = (unsigned int )llvm_cbe_storemerge2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2 = 0x%X",llvm_cbe_storemerge2);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__65);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = phi i20 [ 0, %%0 ], [ %%25, %%5  for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__56 = (unsigned int )llvm_cbe_tmp__56__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__56);
printf("\n = 0x%X",((unsigned int )0));
printf("\n = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = phi i32 [ -100, %%0 ], [ %%24, %%5  for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_298_count);
  llvm_cbe_tmp__57 = (unsigned int )llvm_cbe_tmp__57__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__57);
printf("\n = 0x%X",4294967196u);
printf("\n = 0x%X",llvm_cbe_tmp__72);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = or i32 %%storemerge2, 1, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__58 = (unsigned int )llvm_cbe_storemerge2 | 1u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i32 %%storemerge2 to i64, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_300_count);
  llvm_cbe_tmp__59 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_storemerge2&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds i2* %%ref_genome, i64 %%9, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__60 = ( char *)(&llvm_cbe_ref_genome[(((signed long long )llvm_cbe_tmp__59))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__59));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i2* %%10, align 1, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__61 = (unsigned char )*llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = call zeroext i20 @doRow(i32 %%8, i2* %%read, i2 zeroext %%11, i8* %%1, i8* %%2, i20* %%3, i20* %%4, i8* %%score_out1), !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_303_count);
  llvm_cbe_tmp__62 = (unsigned int )doRow(llvm_cbe_tmp__58, ( char *)llvm_cbe_read, llvm_cbe_tmp__61, ( char *)llvm_cbe_tmp__52, ( char *)llvm_cbe_tmp__53, (signed int *)llvm_cbe_tmp__54, (signed int *)llvm_cbe_tmp__55, ( char *)(&llvm_cbe_score_out1));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__58);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__61);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__62);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i8* %%score_out1, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__63 = (unsigned char )*(&llvm_cbe_score_out1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = sext i8 %%13 to i32, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__64 = (unsigned int )((signed int )( char )llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%15, i32 %%14, i32 %%7, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned int )(((((signed int )llvm_cbe_tmp__64) > ((signed int )llvm_cbe_tmp__57))) ? ((unsigned int )llvm_cbe_tmp__64) : ((unsigned int )llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%.1 = select i1 %%15, i20 %%12, i20 %%6, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe__2e_1_count);
  llvm_cbe__2e_1 = (unsigned int )(((((signed int )llvm_cbe_tmp__64) > ((signed int )llvm_cbe_tmp__57))) ? ((unsigned int )llvm_cbe_tmp__62) : ((unsigned int )llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n.1 = 0x%X\n", llvm_cbe__2e_1);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add i32 %%storemerge2, 2, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_328_count);
  llvm_cbe_tmp__65 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2&4294967295ull)) + ((unsigned int )(2u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__65&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i32 %%8 to i64, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_329_count);
  llvm_cbe_tmp__66 = (unsigned long long )((unsigned long long )(unsigned int )llvm_cbe_tmp__58&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds i2* %%ref_genome, i64 %%17, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_330_count);
  llvm_cbe_tmp__67 = ( char *)(&llvm_cbe_ref_genome[(((signed long long )llvm_cbe_tmp__66))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__66));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i2* %%18, align 1, !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_331_count);
  llvm_cbe_tmp__68 = (unsigned char )*llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = call zeroext i20 @doRow(i32 %%16, i2* %%read, i2 zeroext %%19, i8* %%2, i8* %%1, i20* %%4, i20* %%3, i8* %%score_out2), !dbg !4 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_332_count);
  llvm_cbe_tmp__69 = (unsigned int )doRow(llvm_cbe_tmp__65, ( char *)llvm_cbe_read, llvm_cbe_tmp__68, ( char *)llvm_cbe_tmp__53, ( char *)llvm_cbe_tmp__52, (signed int *)llvm_cbe_tmp__55, (signed int *)llvm_cbe_tmp__54, ( char *)(&llvm_cbe_score_out2));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__65);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__68);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__69);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i8* %%score_out2, align 1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__70 = (unsigned char )*(&llvm_cbe_score_out2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i8 %%21 to i32, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_342_count);
  llvm_cbe_tmp__71 = (unsigned int )((signed int )( char )llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = select i1 %%23, i32 %%22, i32 %%., !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_350_count);
  llvm_cbe_tmp__72 = (unsigned int )(((((signed int )llvm_cbe_tmp__71) > ((signed int )llvm_cbe__2e_))) ? ((unsigned int )llvm_cbe_tmp__71) : ((unsigned int )llvm_cbe__2e_));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = select i1 %%23, i20 %%20, i20 %%.1, !dbg !7 for 0x%I64xth hint within @needlemanWunsch  --> \n", ++aesl_llvm_cbe_352_count);
  llvm_cbe_tmp__73 = (unsigned int )(((((signed int )llvm_cbe_tmp__71) > ((signed int )llvm_cbe__2e_))) ? ((unsigned int )llvm_cbe_tmp__69) : ((unsigned int )llvm_cbe__2e_1));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__73);
  if ((((unsigned int )llvm_cbe_tmp__65&4294967295U) < ((unsigned int )1000000u&4294967295U))) {
    llvm_cbe_storemerge2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__65;   /* for PHI node */
    llvm_cbe_tmp__56__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__73;   /* for PHI node */
    llvm_cbe_tmp__57__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__72;   /* for PHI node */
    goto llvm_cbe_tmp__74;
  } else {
    goto llvm_cbe_tmp__75;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__75:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @needlemanWunsch}\n");
  return llvm_cbe_tmp__73;
}

