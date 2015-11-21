; ModuleID = 'C:/Users/Nathaniel2/hls1121/solution2/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@.str1 = private unnamed_addr constant [4 x i8] c"COL\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str2 = private unnamed_addr constant [12 x i8] c"RAM_1P_BRAM\00", align 1 ; [#uses=1 type=[12 x i8]*]
@.str3 = private unnamed_addr constant [7 x i8] c"CYCLIC\00", align 1 ; [#uses=1 type=[7 x i8]*]
@.str4 = private unnamed_addr constant [5 x i8] c"bram\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str5 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str6 = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str7 = private unnamed_addr constant [4 x i8] c"ROW\00", align 1 ; [#uses=1 type=[4 x i8]*]
@needlemanWunsch.str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=4]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=2]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=0]
define zeroext i20 @needlemanWunsch(i2* %read, i2* %ref_genome) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i20 0) nounwind, !map !37
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch.str) nounwind
  %score1 = alloca [100 x i8], align 16           ; [#uses=4 type=[100 x i8]*]
  %score2 = alloca [100 x i8], align 16           ; [#uses=4 type=[100 x i8]*]
  %orig1 = alloca [100 x i20], align 16           ; [#uses=4 type=[100 x i20]*]
  %orig2 = alloca [100 x i20], align 16           ; [#uses=4 type=[100 x i20]*]
  call void @llvm.dbg.value(metadata !{i2* %read}, i64 0, metadata !43), !dbg !44 ; [debug line = 74:35] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2* %ref_genome}, i64 0, metadata !45), !dbg !46 ; [debug line = 74:80] [debug variable = ref_genome]
  call void (...)* @_ssdm_SpecArrayDimSize(i2* %ref_genome, i32 1000000), !dbg !47 ; [debug line = 74:132]
  call void (...)* @_ssdm_SpecArrayDimSize(i2* %read, i32 100), !dbg !49 ; [debug line = 74:175]
  call void (...)* @_ssdm_op_SpecResource(i2* %read, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([12 x i8]* @.str2, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i32 -1, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !50 ; [debug line = 75:1]
  call void (...)* @_ssdm_SpecArrayReshape(i2* %ref_genome, i32 1, i8* getelementptr inbounds ([7 x i8]* @.str3, i64 0, i64 0), i32 4, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !50 ; [debug line = 75:1]
  call void (...)* @_ssdm_op_SpecInterface(i2* %read, i8* getelementptr inbounds ([5 x i8]* @.str4, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !50 ; [debug line = 75:1]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, i8* getelementptr inbounds ([10 x i8]* @.str5, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !50 ; [debug line = 75:1]
  call void (...)* @_ssdm_SpecArrayReshape(i2* %read, i32 1, i8* getelementptr inbounds ([7 x i8]* @.str3, i64 0, i64 0), i32 16, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !50 ; [debug line = 75:1]
  call void (...)* @_ssdm_op_SpecInterface(i2* %ref_genome, i8* getelementptr inbounds ([5 x i8]* @.str6, i64 0, i64 0), i32 0, i32 0, i32 0, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0), i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !50 ; [debug line = 75:1]
  call void @llvm.dbg.declare(metadata !{[100 x i8]* %score1}, metadata !51), !dbg !55 ; [debug line = 80:10] [debug variable = score1]
  call void @llvm.dbg.declare(metadata !{[100 x i8]* %score2}, metadata !56), !dbg !57 ; [debug line = 81:10] [debug variable = score2]
  call void @llvm.dbg.declare(metadata !{[100 x i20]* %orig1}, metadata !58), !dbg !60 ; [debug line = 82:9] [debug variable = orig1]
  call void @llvm.dbg.declare(metadata !{[100 x i20]* %orig2}, metadata !61), !dbg !62 ; [debug line = 83:9] [debug variable = orig2]
  br label %1, !dbg !63                           ; [debug line = 91:12]

; <label>:1                                       ; preds = %doRow.exit, %0
  %i = phi i32 [ 0, %0 ], [ %i.assign.1, %doRow.exit ] ; [#uses=4 type=i32]
  %max_orig = phi i20 [ 0, %0 ], [ %max_orig.2, %doRow.exit ] ; [#uses=2 type=i20]
  %max_score = phi i32 [ -100, %0 ], [ %max_score.2, %doRow.exit ] ; [#uses=2 type=i32]
  %tmp = icmp ult i32 %i, 1000000, !dbg !63       ; [#uses=1 type=i1] [debug line = 91:12]
  br i1 %tmp, label %._crit_edge, label %20, !dbg !63 ; [debug line = 91:12]

._crit_edge:                                      ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([4 x i8]* @.str7, i64 0, i64 0)), !dbg !65 ; [debug line = 91:64]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([4 x i8]* @.str7, i64 0, i64 0)) nounwind, !dbg !65 ; [#uses=1 type=i32] [debug line = 91:64]
  call void (...)* @_ssdm_op_SpecPipeline(i32 100, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)), !dbg !67 ; [debug line = 92:1]
  %i.assign = or i32 %i, 1, !dbg !68              ; [#uses=5 type=i32] [debug line = 92:15]
  %tmp.2 = zext i32 %i to i64, !dbg !68           ; [#uses=1 type=i64] [debug line = 92:15]
  %ref_genome.addr = getelementptr inbounds i2* %ref_genome, i64 %tmp.2, !dbg !68 ; [#uses=1 type=i2*] [debug line = 92:15]
  %ref_genome.assign = load i2* %ref_genome.addr, align 1, !dbg !68 ; [#uses=2 type=i2] [debug line = 92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i2 %ref_genome.assign) nounwind
  call void @llvm.dbg.value(metadata !{i32 %i.assign}, i64 0, metadata !69) nounwind, !dbg !70 ; [debug line = 3:18@92:15] [debug variable = i]
  call void @llvm.dbg.value(metadata !{i2* %read}, i64 0, metadata !71) nounwind, !dbg !72 ; [debug line = 3:32@92:15] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2 %ref_genome.assign}, i64 0, metadata !73) nounwind, !dbg !74 ; [debug line = 3:77@92:15] [debug variable = ref_genome]
  %tmp.3 = trunc i32 %i.assign to i20, !dbg !75   ; [#uses=1 type=i20] [debug line = 14:28@92:15]
  %prev_orig_out = add i20 %tmp.3, -1, !dbg !75   ; [#uses=1 type=i20] [debug line = 14:28@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out}, i64 0, metadata !77) nounwind, !dbg !75 ; [debug line = 14:28@92:15] [debug variable = prev_orig_out]
  %tmp.5 = icmp eq i32 %i.assign, 1, !dbg !78     ; [#uses=4 type=i1] [debug line = 24:3@92:15]
  %tmp.6 = add nsw i32 %i.assign, -1, !dbg !81    ; [#uses=1 type=i32] [debug line = 41:3@92:15]
  br label %2, !dbg !82                           ; [debug line = 22:12@92:15]

; <label>:2                                       ; preds = %._crit_edge8.i26, %._crit_edge
  %j.0.i2 = phi i32 [ 1, %._crit_edge ], [ %j, %._crit_edge8.i26 ] ; [#uses=12 type=i32]
  %score_out1 = phi i8 [ 0, %._crit_edge ], [ %prev_score_out.2.i1, %._crit_edge8.i26 ] ; [#uses=2 type=i8]
  %prev_orig_out.10 = phi i20 [ %prev_orig_out, %._crit_edge ], [ %prev_orig_out.2.i1, %._crit_edge8.i26 ] ; [#uses=2 type=i20]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.10}, i64 0, metadata !77) nounwind, !dbg !83 ; [debug line = 60:4@92:15] [debug variable = prev_orig_out]
  %exitcond.i5 = icmp eq i32 %j.0.i2, 101, !dbg !82 ; [#uses=1 type=i1] [debug line = 22:12@92:15]
  br i1 %exitcond.i5, label %doRow.exit27, label %3, !dbg !82 ; [debug line = 22:12@92:15]

; <label>:3                                       ; preds = %2
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([4 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !85 ; [debug line = 22:55@92:15]
  %rbegin.i6 = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([4 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !85 ; [#uses=1 type=i32] [debug line = 22:55@92:15]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !86 ; [debug line = 23:1@92:15]
  br i1 %tmp.5, label %.critedge.i8, label %._crit_edge.i7, !dbg !78 ; [debug line = 24:3@92:15]

._crit_edge.i7:                                   ; preds = %3
  %tmp.15 = add nsw i32 %j.0.i2, -1, !dbg !78     ; [#uses=1 type=i32] [debug line = 24:3@92:15]
  %tmp.16 = sext i32 %tmp.15 to i64, !dbg !78     ; [#uses=2 type=i64] [debug line = 24:3@92:15]
  %score1.addr = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.16, !dbg !78 ; [#uses=1 type=i8*] [debug line = 24:3@92:15]
  %score1.load = load i8* %score1.addr, align 1, !dbg !78 ; [#uses=2 type=i8] [debug line = 24:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score1.load) nounwind
  %orig1.addr = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.16, !dbg !87 ; [#uses=1 type=i20*] [debug line = 26:3@92:15]
  %orig1.load = load i20* %orig1.addr, align 4, !dbg !87 ; [#uses=1 type=i20] [debug line = 26:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i20 %orig1.load) nounwind
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score1.load) nounwind
  %tmp.17 = icmp eq i32 %j.0.i2, 1, !dbg !88      ; [#uses=1 type=i1] [debug line = 35:3@92:15]
  br i1 %tmp.17, label %._crit_edge4.i10, label %4, !dbg !88 ; [debug line = 35:3@92:15]

.critedge.i8:                                     ; preds = %3
  %tmp.14 = sub i32 1, %j.0.i2, !dbg !88          ; [#uses=1 type=i32] [debug line = 35:3@92:15]
  br label %._crit_edge4.i10, !dbg !88            ; [debug line = 35:3@92:15]

; <label>:4                                       ; preds = %._crit_edge.i7
  %tmp.20 = add nsw i32 %j.0.i2, -2, !dbg !88     ; [#uses=1 type=i32] [debug line = 35:3@92:15]
  %tmp.21 = sext i32 %tmp.20 to i64, !dbg !88     ; [#uses=1 type=i64] [debug line = 35:3@92:15]
  %score1.addr.1 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.21, !dbg !88 ; [#uses=1 type=i8*] [debug line = 35:3@92:15]
  %score1.load.1 = load i8* %score1.addr.1, align 1, !dbg !88 ; [#uses=2 type=i8] [debug line = 35:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score1.load.1) nounwind
  %tmp.22 = sext i8 %score1.load.1 to i32, !dbg !88 ; [#uses=1 type=i32] [debug line = 35:3@92:15]
  br label %._crit_edge4.i10, !dbg !88            ; [debug line = 35:3@92:15]

._crit_edge4.i10:                                 ; preds = %4, %.critedge.i8, %._crit_edge.i7
  %tmp.27 = phi i32 [ %tmp.14, %.critedge.i8 ], [ %tmp.22, %4 ], [ 0, %._crit_edge.i7 ], !dbg !88 ; [#uses=1 type=i32] [debug line = 35:3@92:15]
  %diag = trunc i32 %tmp.27 to i8, !dbg !88       ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %diag}, i64 0, metadata !89) nounwind, !dbg !88 ; [debug line = 35:3@92:15] [debug variable = diag]
  br i1 %tmp.5, label %5, label %6, !dbg !90      ; [debug line = 36:3@92:15]

; <label>:5                                       ; preds = %._crit_edge4.i10
  %tmp.31 = sub nsw i32 0, %j.0.i2, !dbg !90      ; [#uses=1 type=i32] [debug line = 36:3@92:15]
  br label %7, !dbg !90                           ; [debug line = 36:3@92:15]

; <label>:6                                       ; preds = %._crit_edge4.i10
  %tmp.32 = add nsw i32 %j.0.i2, -1, !dbg !90     ; [#uses=1 type=i32] [debug line = 36:3@92:15]
  %tmp.33 = sext i32 %tmp.32 to i64, !dbg !90     ; [#uses=1 type=i64] [debug line = 36:3@92:15]
  %score1.addr.2 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.33, !dbg !90 ; [#uses=1 type=i8*] [debug line = 36:3@92:15]
  %score1.load.2 = load i8* %score1.addr.2, align 1, !dbg !90 ; [#uses=2 type=i8] [debug line = 36:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score1.load.2) nounwind
  %tmp.34 = sext i8 %score1.load.2 to i32, !dbg !90 ; [#uses=1 type=i32] [debug line = 36:3@92:15]
  br label %7, !dbg !90                           ; [debug line = 36:3@92:15]

; <label>:7                                       ; preds = %6, %5
  %tmp.36 = phi i32 [ %tmp.31, %5 ], [ %tmp.34, %6 ], !dbg !90 ; [#uses=1 type=i32] [debug line = 36:3@92:15]
  %up = trunc i32 %tmp.36 to i8, !dbg !90         ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up}, i64 0, metadata !91) nounwind, !dbg !90 ; [debug line = 36:3@92:15] [debug variable = up]
  %tmp.37 = icmp eq i32 %j.0.i2, 1, !dbg !92      ; [#uses=2 type=i1] [debug line = 37:3@92:15]
  %brmerge.i1 = or i1 %tmp.5, %tmp.37, !dbg !81   ; [#uses=1 type=i1] [debug line = 41:3@92:15]
  br i1 %brmerge.i1, label %._crit_edge5.i14, label %8, !dbg !81 ; [debug line = 41:3@92:15]

; <label>:8                                       ; preds = %7
  %tmp.42 = add nsw i32 %j.0.i2, -2, !dbg !81     ; [#uses=1 type=i32] [debug line = 41:3@92:15]
  %tmp.43 = sext i32 %tmp.42 to i64, !dbg !81     ; [#uses=1 type=i64] [debug line = 41:3@92:15]
  %orig1.addr.1 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.43, !dbg !81 ; [#uses=1 type=i20*] [debug line = 41:3@92:15]
  %orig1.load.1 = load i20* %orig1.addr.1, align 4, !dbg !81 ; [#uses=2 type=i20] [debug line = 41:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i20 %orig1.load.1) nounwind
  %tmp.44 = zext i20 %orig1.load.1 to i32, !dbg !81 ; [#uses=1 type=i32] [debug line = 41:3@92:15]
  br label %._crit_edge5.i14, !dbg !81            ; [debug line = 41:3@92:15]

._crit_edge5.i14:                                 ; preds = %8, %7
  %tmp.47 = phi i32 [ %tmp.44, %8 ], [ %tmp.6, %7 ], !dbg !81 ; [#uses=1 type=i32] [debug line = 41:3@92:15]
  %prev_orig_out.11 = trunc i32 %tmp.47 to i20, !dbg !81 ; [#uses=1 type=i20] [debug line = 41:3@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.11}, i64 0, metadata !77) nounwind, !dbg !93 ; [debug line = 56:4@92:15] [debug variable = prev_orig_out]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.11}, i64 0, metadata !95) nounwind, !dbg !81 ; [debug line = 41:3@92:15] [debug variable = diag_orig]
  br i1 %tmp.5, label %._crit_edge7.i19, label %9, !dbg !96 ; [debug line = 42:3@92:15]

; <label>:9                                       ; preds = %._crit_edge5.i14
  %tmp.51 = add nsw i32 %j.0.i2, -1, !dbg !96     ; [#uses=1 type=i32] [debug line = 42:3@92:15]
  %tmp.52 = sext i32 %tmp.51 to i64, !dbg !96     ; [#uses=1 type=i64] [debug line = 42:3@92:15]
  %orig1.addr.2 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.52, !dbg !96 ; [#uses=1 type=i20*] [debug line = 42:3@92:15]
  %orig1.load.2 = load i20* %orig1.addr.2, align 4, !dbg !96 ; [#uses=2 type=i20] [debug line = 42:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i20 %orig1.load.2) nounwind
  br label %._crit_edge7.i19, !dbg !96            ; [debug line = 42:3@92:15]

._crit_edge7.i19:                                 ; preds = %9, %._crit_edge5.i14
  %up_orig = phi i20 [ %orig1.load.2, %9 ], [ 0, %._crit_edge5.i14 ], !dbg !96 ; [#uses=1 type=i20] [debug line = 42:3@92:15]
  call void @llvm.dbg.value(metadata !{i20 %up_orig}, i64 0, metadata !97) nounwind, !dbg !96 ; [debug line = 42:3@92:15] [debug variable = up_orig]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.10}, i64 0, metadata !98) nounwind, !dbg !99 ; [debug line = 43:3@92:15] [debug variable = left_orig]
  %tmp.55 = add nsw i32 %j.0.i2, -1, !dbg !100    ; [#uses=1 type=i32] [debug line = 46:3@92:15]
  %tmp.56 = sext i32 %tmp.55 to i64, !dbg !100    ; [#uses=3 type=i64] [debug line = 46:3@92:15]
  %read.addr = getelementptr inbounds i2* %read, i64 %tmp.56, !dbg !100 ; [#uses=1 type=i2*] [debug line = 46:3@92:15]
  %read.load = load i2* %read.addr, align 1, !dbg !100 ; [#uses=2 type=i2] [debug line = 46:3@92:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i2 %read.load) nounwind
  %tmp.57 = icmp eq i2 %read.load, %ref_genome.assign, !dbg !100 ; [#uses=1 type=i1] [debug line = 46:3@92:15]
  %diag_score.0.v.i1 = select i1 %tmp.57, i8 1, i8 -1, !dbg !101 ; [#uses=1 type=i8] [debug line = 47:3@92:15]
  %prev_score_out.6 = add i8 %diag_score.0.v.i1, %diag, !dbg !101 ; [#uses=4 type=i8] [debug line = 47:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.6}, i64 0, metadata !102) nounwind, !dbg !103 ; [debug line = 55:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.6}, i64 0, metadata !104) nounwind, !dbg !101 ; [debug line = 47:3@92:15] [debug variable = diag_score]
  %prev_score_out.0.op.i1 = add i8 %score_out1, -1, !dbg !105 ; [#uses=1 type=i8] [debug line = 50:3@92:15]
  %prev_score_out.7 = select i1 %tmp.37, i8 -1, i8 %prev_score_out.0.op.i1, !dbg !105 ; [#uses=4 type=i8] [debug line = 50:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.7}, i64 0, metadata !102) nounwind, !dbg !106 ; [debug line = 59:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.7}, i64 0, metadata !107) nounwind, !dbg !105 ; [debug line = 50:3@92:15] [debug variable = left_score]
  %up_score = add i8 %up, -1, !dbg !108           ; [#uses=3 type=i8] [debug line = 51:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score}, i64 0, metadata !109) nounwind, !dbg !108 ; [debug line = 51:3@92:15] [debug variable = up_score]
  %tmp.60 = icmp slt i8 %prev_score_out.6, %prev_score_out.7, !dbg !110 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  %tmp.61 = icmp slt i8 %prev_score_out.6, %up_score, !dbg !110 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  %or.cond.i1 = or i1 %tmp.60, %tmp.61, !dbg !110 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  br i1 %or.cond.i1, label %10, label %._crit_edge8.i26, !dbg !110 ; [debug line = 54:3@92:15]

; <label>:10                                      ; preds = %._crit_edge7.i19
  %tmp.64 = icmp slt i8 %prev_score_out.7, %prev_score_out.6, !dbg !111 ; [#uses=1 type=i1] [debug line = 58:8@92:15]
  %tmp.65 = icmp slt i8 %prev_score_out.7, %up_score, !dbg !111 ; [#uses=1 type=i1] [debug line = 58:8@92:15]
  %or.cond1.i1 = or i1 %tmp.64, %tmp.65, !dbg !111 ; [#uses=2 type=i1] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score}, i64 0, metadata !102) nounwind, !dbg !112 ; [debug line = 63:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i20 %up_orig}, i64 0, metadata !77) nounwind, !dbg !114 ; [debug line = 64:4@92:15] [debug variable = prev_orig_out]
  %prev_score_out.1 = select i1 %or.cond1.i1, i8 %up_score, i8 %prev_score_out.7, !dbg !111 ; [#uses=1 type=i8] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.1}, i64 0, metadata !102) nounwind, !dbg !111 ; [debug line = 58:8@92:15] [debug variable = prev_score_out]
  %prev_orig_out.7 = select i1 %or.cond1.i1, i20 %up_orig, i20 %prev_orig_out.10, !dbg !111 ; [#uses=1 type=i20] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.7}, i64 0, metadata !77) nounwind, !dbg !111 ; [debug line = 58:8@92:15] [debug variable = prev_orig_out]
  br label %._crit_edge8.i26

._crit_edge8.i26:                                 ; preds = %10, %._crit_edge7.i19
  %prev_score_out.2.i1 = phi i8 [ %prev_score_out.1, %10 ], [ %prev_score_out.6, %._crit_edge7.i19 ] ; [#uses=2 type=i8]
  %prev_orig_out.2.i1 = phi i20 [ %prev_orig_out.7, %10 ], [ %prev_orig_out.11, %._crit_edge7.i19 ] ; [#uses=2 type=i20]
  %score2.addr.3 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.56, !dbg !115 ; [#uses=1 type=i8*] [debug line = 66:3@92:15]
  store i8 %prev_score_out.2.i1, i8* %score2.addr.3, align 1, !dbg !115 ; [debug line = 66:3@92:15]
  %orig2.addr.3 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.56, !dbg !116 ; [#uses=1 type=i20*] [debug line = 67:3@92:15]
  store i20 %prev_orig_out.2.i1, i20* %orig2.addr.3, align 4, !dbg !116 ; [debug line = 67:3@92:15]
  %rend.i25 = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([4 x i8]* @.str1, i64 0, i64 0), i32 %rbegin.i6) nounwind, !dbg !117 ; [#uses=0 type=i32] [debug line = 68:2@92:15]
  %j = add nsw i32 %j.0.i2, 1, !dbg !118          ; [#uses=1 type=i32] [debug line = 22:49@92:15]
  call void @llvm.dbg.value(metadata !{i32 %j}, i64 0, metadata !119) nounwind, !dbg !118 ; [debug line = 22:49@92:15] [debug variable = j]
  br label %2, !dbg !118                          ; [debug line = 22:49@92:15]

doRow.exit27:                                     ; preds = %2
  %prev_orig_out.0.i4.lcssa = phi i20 [ %prev_orig_out.10, %2 ] ; [#uses=1 type=i20]
  %score_out1.0.lcssa = phi i8 [ %score_out1, %2 ] ; [#uses=1 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %score_out1}, i64 0, metadata !120), !dbg !121 ; [debug line = 70:2@92:15] [debug variable = score_out1]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.10}, i64 0, metadata !122), !dbg !68 ; [debug line = 92:15] [debug variable = orig_out1]
  %max_score.3 = sext i8 %score_out1.0.lcssa to i32, !dbg !123 ; [#uses=2 type=i32] [debug line = 95:3]
  %tmp.8 = icmp sgt i32 %max_score.3, %max_score, !dbg !123 ; [#uses=2 type=i1] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.3}, i64 0, metadata !124), !dbg !125 ; [debug line = 97:4] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.10}, i64 0, metadata !127), !dbg !128 ; [debug line = 98:4] [debug variable = max_orig]
  %max_orig.1 = select i1 %tmp.8, i20 %prev_orig_out.0.i4.lcssa, i20 %max_orig, !dbg !123 ; [#uses=1 type=i20] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i20 %max_orig.1}, i64 0, metadata !127), !dbg !123 ; [debug line = 95:3] [debug variable = max_orig]
  %max_score.1 = select i1 %tmp.8, i32 %max_score.3, i32 %max_score, !dbg !123 ; [#uses=2 type=i32] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.1}, i64 0, metadata !124), !dbg !123 ; [debug line = 95:3] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i32 %i.assign}, i64 0, metadata !129), !dbg !130 ; [debug line = 102:3] [debug variable = i]
  %i.assign.1 = add i32 %i, 2, !dbg !131          ; [#uses=3 type=i32] [debug line = 104:15]
  %tmp.10 = zext i32 %i.assign to i64, !dbg !131  ; [#uses=1 type=i64] [debug line = 104:15]
  %ref_genome.addr.1 = getelementptr inbounds i2* %ref_genome, i64 %tmp.10, !dbg !131 ; [#uses=1 type=i2*] [debug line = 104:15]
  %ref_genome.assign.1 = load i2* %ref_genome.addr.1, align 1, !dbg !131 ; [#uses=2 type=i2] [debug line = 104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i2 %ref_genome.assign.1) nounwind
  call void @llvm.dbg.value(metadata !{i32 %i.assign.1}, i64 0, metadata !132) nounwind, !dbg !133 ; [debug line = 3:18@104:15] [debug variable = i]
  call void @llvm.dbg.value(metadata !{i2* %read}, i64 0, metadata !134) nounwind, !dbg !135 ; [debug line = 3:32@104:15] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2 %ref_genome.assign.1}, i64 0, metadata !136) nounwind, !dbg !137 ; [debug line = 3:77@104:15] [debug variable = ref_genome]
  %tmp.11 = trunc i32 %i.assign.1 to i20, !dbg !138 ; [#uses=1 type=i20] [debug line = 14:28@104:15]
  %prev_orig_out.2 = add i20 %tmp.11, -1, !dbg !138 ; [#uses=1 type=i20] [debug line = 14:28@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.2}, i64 0, metadata !139) nounwind, !dbg !138 ; [debug line = 14:28@104:15] [debug variable = prev_orig_out]
  %tmp.13 = icmp eq i32 %i.assign.1, 1, !dbg !140 ; [#uses=4 type=i1] [debug line = 24:3@104:15]
  br label %11, !dbg !141                         ; [debug line = 22:12@104:15]

; <label>:11                                      ; preds = %._crit_edge8.i, %doRow.exit27
  %j.0.i = phi i32 [ 1, %doRow.exit27 ], [ %j.1, %._crit_edge8.i ] ; [#uses=12 type=i32]
  %score_out2 = phi i8 [ 0, %doRow.exit27 ], [ %prev_score_out.2.i, %._crit_edge8.i ] ; [#uses=2 type=i8]
  %prev_orig_out.12 = phi i20 [ %prev_orig_out.2, %doRow.exit27 ], [ %prev_orig_out.2.i, %._crit_edge8.i ] ; [#uses=2 type=i20]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !139) nounwind, !dbg !142 ; [debug line = 60:4@104:15] [debug variable = prev_orig_out]
  %exitcond.i = icmp eq i32 %j.0.i, 101, !dbg !141 ; [#uses=1 type=i1] [debug line = 22:12@104:15]
  br i1 %exitcond.i, label %doRow.exit, label %12, !dbg !141 ; [debug line = 22:12@104:15]

; <label>:12                                      ; preds = %11
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([4 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !143 ; [debug line = 22:55@104:15]
  %rbegin.i = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([4 x i8]* @.str1, i64 0, i64 0)) nounwind, !dbg !143 ; [#uses=1 type=i32] [debug line = 22:55@104:15]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !144 ; [debug line = 23:1@104:15]
  br i1 %tmp.13, label %.critedge.i, label %._crit_edge.i, !dbg !140 ; [debug line = 24:3@104:15]

._crit_edge.i:                                    ; preds = %12
  %tmp.24 = add nsw i32 %j.0.i, -1, !dbg !140     ; [#uses=1 type=i32] [debug line = 24:3@104:15]
  %tmp.25 = sext i32 %tmp.24 to i64, !dbg !140    ; [#uses=2 type=i64] [debug line = 24:3@104:15]
  %score2.addr = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.25, !dbg !140 ; [#uses=1 type=i8*] [debug line = 24:3@104:15]
  %score2.load = load i8* %score2.addr, align 1, !dbg !140 ; [#uses=2 type=i8] [debug line = 24:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score2.load) nounwind
  %orig2.addr = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.25, !dbg !145 ; [#uses=1 type=i20*] [debug line = 26:3@104:15]
  %orig2.load = load i20* %orig2.addr, align 4, !dbg !145 ; [#uses=1 type=i20] [debug line = 26:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i20 %orig2.load) nounwind
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score2.load) nounwind
  %tmp.26 = icmp eq i32 %j.0.i, 1, !dbg !146      ; [#uses=1 type=i1] [debug line = 35:3@104:15]
  br i1 %tmp.26, label %._crit_edge4.i, label %13, !dbg !146 ; [debug line = 35:3@104:15]

.critedge.i:                                      ; preds = %12
  %tmp.23 = sub i32 1, %j.0.i, !dbg !146          ; [#uses=1 type=i32] [debug line = 35:3@104:15]
  br label %._crit_edge4.i, !dbg !146             ; [debug line = 35:3@104:15]

; <label>:13                                      ; preds = %._crit_edge.i
  %tmp.28 = add nsw i32 %j.0.i, -2, !dbg !146     ; [#uses=1 type=i32] [debug line = 35:3@104:15]
  %tmp.29 = sext i32 %tmp.28 to i64, !dbg !146    ; [#uses=1 type=i64] [debug line = 35:3@104:15]
  %score2.addr.1 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.29, !dbg !146 ; [#uses=1 type=i8*] [debug line = 35:3@104:15]
  %score2.load.1 = load i8* %score2.addr.1, align 1, !dbg !146 ; [#uses=2 type=i8] [debug line = 35:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score2.load.1) nounwind
  %tmp.30 = sext i8 %score2.load.1 to i32, !dbg !146 ; [#uses=1 type=i32] [debug line = 35:3@104:15]
  br label %._crit_edge4.i, !dbg !146             ; [debug line = 35:3@104:15]

._crit_edge4.i:                                   ; preds = %13, %.critedge.i, %._crit_edge.i
  %tmp.35 = phi i32 [ %tmp.23, %.critedge.i ], [ %tmp.30, %13 ], [ 0, %._crit_edge.i ], !dbg !146 ; [#uses=1 type=i32] [debug line = 35:3@104:15]
  %diag.1 = trunc i32 %tmp.35 to i8, !dbg !146    ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %diag.1}, i64 0, metadata !147) nounwind, !dbg !146 ; [debug line = 35:3@104:15] [debug variable = diag]
  br i1 %tmp.13, label %14, label %15, !dbg !148  ; [debug line = 36:3@104:15]

; <label>:14                                      ; preds = %._crit_edge4.i
  %tmp.38 = sub nsw i32 0, %j.0.i, !dbg !148      ; [#uses=1 type=i32] [debug line = 36:3@104:15]
  br label %16, !dbg !148                         ; [debug line = 36:3@104:15]

; <label>:15                                      ; preds = %._crit_edge4.i
  %tmp.39 = add nsw i32 %j.0.i, -1, !dbg !148     ; [#uses=1 type=i32] [debug line = 36:3@104:15]
  %tmp.40 = sext i32 %tmp.39 to i64, !dbg !148    ; [#uses=1 type=i64] [debug line = 36:3@104:15]
  %score2.addr.2 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.40, !dbg !148 ; [#uses=1 type=i8*] [debug line = 36:3@104:15]
  %score2.load.2 = load i8* %score2.addr.2, align 1, !dbg !148 ; [#uses=2 type=i8] [debug line = 36:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score2.load.2) nounwind
  %tmp.41 = sext i8 %score2.load.2 to i32, !dbg !148 ; [#uses=1 type=i32] [debug line = 36:3@104:15]
  br label %16, !dbg !148                         ; [debug line = 36:3@104:15]

; <label>:16                                      ; preds = %15, %14
  %tmp.45 = phi i32 [ %tmp.38, %14 ], [ %tmp.41, %15 ], !dbg !148 ; [#uses=1 type=i32] [debug line = 36:3@104:15]
  %up.1 = trunc i32 %tmp.45 to i8, !dbg !148      ; [#uses=1 type=i8] [debug line = 36:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %up.1}, i64 0, metadata !149) nounwind, !dbg !148 ; [debug line = 36:3@104:15] [debug variable = up]
  %tmp.46 = icmp eq i32 %j.0.i, 1, !dbg !150      ; [#uses=2 type=i1] [debug line = 37:3@104:15]
  %brmerge.i = or i1 %tmp.13, %tmp.46, !dbg !151  ; [#uses=1 type=i1] [debug line = 41:3@104:15]
  br i1 %brmerge.i, label %._crit_edge5.i, label %17, !dbg !151 ; [debug line = 41:3@104:15]

; <label>:17                                      ; preds = %16
  %tmp.48 = add nsw i32 %j.0.i, -2, !dbg !151     ; [#uses=1 type=i32] [debug line = 41:3@104:15]
  %tmp.49 = sext i32 %tmp.48 to i64, !dbg !151    ; [#uses=1 type=i64] [debug line = 41:3@104:15]
  %orig2.addr.1 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.49, !dbg !151 ; [#uses=1 type=i20*] [debug line = 41:3@104:15]
  %orig2.load.1 = load i20* %orig2.addr.1, align 4, !dbg !151 ; [#uses=2 type=i20] [debug line = 41:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i20 %orig2.load.1) nounwind
  %tmp.50 = zext i20 %orig2.load.1 to i32, !dbg !151 ; [#uses=1 type=i32] [debug line = 41:3@104:15]
  br label %._crit_edge5.i, !dbg !151             ; [debug line = 41:3@104:15]

._crit_edge5.i:                                   ; preds = %17, %16
  %tmp.53 = phi i32 [ %tmp.50, %17 ], [ %i.assign, %16 ], !dbg !151 ; [#uses=1 type=i32] [debug line = 41:3@104:15]
  %prev_orig_out.13 = trunc i32 %tmp.53 to i20, !dbg !151 ; [#uses=1 type=i20] [debug line = 41:3@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.13}, i64 0, metadata !139) nounwind, !dbg !152 ; [debug line = 56:4@104:15] [debug variable = prev_orig_out]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.13}, i64 0, metadata !153) nounwind, !dbg !151 ; [debug line = 41:3@104:15] [debug variable = diag_orig]
  br i1 %tmp.13, label %._crit_edge7.i, label %18, !dbg !154 ; [debug line = 42:3@104:15]

; <label>:18                                      ; preds = %._crit_edge5.i
  %tmp.62 = add nsw i32 %j.0.i, -1, !dbg !154     ; [#uses=1 type=i32] [debug line = 42:3@104:15]
  %tmp.63 = sext i32 %tmp.62 to i64, !dbg !154    ; [#uses=1 type=i64] [debug line = 42:3@104:15]
  %orig2.addr.2 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.63, !dbg !154 ; [#uses=1 type=i20*] [debug line = 42:3@104:15]
  %orig2.load.2 = load i20* %orig2.addr.2, align 4, !dbg !154 ; [#uses=2 type=i20] [debug line = 42:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i20 %orig2.load.2) nounwind
  br label %._crit_edge7.i, !dbg !154             ; [debug line = 42:3@104:15]

._crit_edge7.i:                                   ; preds = %18, %._crit_edge5.i
  %up_orig.1 = phi i20 [ %orig2.load.2, %18 ], [ 0, %._crit_edge5.i ], !dbg !154 ; [#uses=1 type=i20] [debug line = 42:3@104:15]
  call void @llvm.dbg.value(metadata !{i20 %up_orig.1}, i64 0, metadata !155) nounwind, !dbg !154 ; [debug line = 42:3@104:15] [debug variable = up_orig]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !156) nounwind, !dbg !157 ; [debug line = 43:3@104:15] [debug variable = left_orig]
  %tmp.68 = add nsw i32 %j.0.i, -1, !dbg !158     ; [#uses=1 type=i32] [debug line = 46:3@104:15]
  %tmp.69 = sext i32 %tmp.68 to i64, !dbg !158    ; [#uses=3 type=i64] [debug line = 46:3@104:15]
  %read.addr.1 = getelementptr inbounds i2* %read, i64 %tmp.69, !dbg !158 ; [#uses=1 type=i2*] [debug line = 46:3@104:15]
  %read.load.1 = load i2* %read.addr.1, align 1, !dbg !158 ; [#uses=2 type=i2] [debug line = 46:3@104:15]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i2 %read.load.1) nounwind
  %tmp.70 = icmp eq i2 %read.load.1, %ref_genome.assign.1, !dbg !158 ; [#uses=1 type=i1] [debug line = 46:3@104:15]
  %diag_score.0.v.i = select i1 %tmp.70, i8 1, i8 -1, !dbg !159 ; [#uses=1 type=i8] [debug line = 47:3@104:15]
  %prev_score_out = add i8 %diag_score.0.v.i, %diag.1, !dbg !159 ; [#uses=4 type=i8] [debug line = 47:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out}, i64 0, metadata !160) nounwind, !dbg !161 ; [debug line = 55:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out}, i64 0, metadata !162) nounwind, !dbg !159 ; [debug line = 47:3@104:15] [debug variable = diag_score]
  %prev_score_out.0.op.i = add i8 %score_out2, -1, !dbg !163 ; [#uses=1 type=i8] [debug line = 50:3@104:15]
  %prev_score_out.8 = select i1 %tmp.46, i8 -1, i8 %prev_score_out.0.op.i, !dbg !163 ; [#uses=4 type=i8] [debug line = 50:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.8}, i64 0, metadata !160) nounwind, !dbg !164 ; [debug line = 59:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.8}, i64 0, metadata !165) nounwind, !dbg !163 ; [debug line = 50:3@104:15] [debug variable = left_score]
  %up_score.1 = add i8 %up.1, -1, !dbg !166       ; [#uses=3 type=i8] [debug line = 51:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score.1}, i64 0, metadata !167) nounwind, !dbg !166 ; [debug line = 51:3@104:15] [debug variable = up_score]
  %tmp.73 = icmp slt i8 %prev_score_out, %prev_score_out.8, !dbg !168 ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  %tmp.74 = icmp slt i8 %prev_score_out, %up_score.1, !dbg !168 ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  %or.cond.i = or i1 %tmp.73, %tmp.74, !dbg !168  ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  br i1 %or.cond.i, label %19, label %._crit_edge8.i, !dbg !168 ; [debug line = 54:3@104:15]

; <label>:19                                      ; preds = %._crit_edge7.i
  %tmp.75 = icmp slt i8 %prev_score_out.8, %prev_score_out, !dbg !169 ; [#uses=1 type=i1] [debug line = 58:8@104:15]
  %tmp.76 = icmp slt i8 %prev_score_out.8, %up_score.1, !dbg !169 ; [#uses=1 type=i1] [debug line = 58:8@104:15]
  %or.cond1.i = or i1 %tmp.75, %tmp.76, !dbg !169 ; [#uses=2 type=i1] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score.1}, i64 0, metadata !160) nounwind, !dbg !170 ; [debug line = 63:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i20 %up_orig.1}, i64 0, metadata !139) nounwind, !dbg !171 ; [debug line = 64:4@104:15] [debug variable = prev_orig_out]
  %prev_score_out.5 = select i1 %or.cond1.i, i8 %up_score.1, i8 %prev_score_out.8, !dbg !169 ; [#uses=1 type=i8] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.5}, i64 0, metadata !160) nounwind, !dbg !169 ; [debug line = 58:8@104:15] [debug variable = prev_score_out]
  %prev_orig_out.9 = select i1 %or.cond1.i, i20 %up_orig.1, i20 %prev_orig_out.12, !dbg !169 ; [#uses=1 type=i20] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.9}, i64 0, metadata !139) nounwind, !dbg !169 ; [debug line = 58:8@104:15] [debug variable = prev_orig_out]
  br label %._crit_edge8.i

._crit_edge8.i:                                   ; preds = %19, %._crit_edge7.i
  %prev_score_out.2.i = phi i8 [ %prev_score_out.5, %19 ], [ %prev_score_out, %._crit_edge7.i ] ; [#uses=2 type=i8]
  %prev_orig_out.2.i = phi i20 [ %prev_orig_out.9, %19 ], [ %prev_orig_out.13, %._crit_edge7.i ] ; [#uses=2 type=i20]
  %score1.addr.3 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.69, !dbg !172 ; [#uses=1 type=i8*] [debug line = 66:3@104:15]
  store i8 %prev_score_out.2.i, i8* %score1.addr.3, align 1, !dbg !172 ; [debug line = 66:3@104:15]
  %orig1.addr.3 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.69, !dbg !173 ; [#uses=1 type=i20*] [debug line = 67:3@104:15]
  store i20 %prev_orig_out.2.i, i20* %orig1.addr.3, align 4, !dbg !173 ; [debug line = 67:3@104:15]
  %rend.i = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([4 x i8]* @.str1, i64 0, i64 0), i32 %rbegin.i) nounwind, !dbg !174 ; [#uses=0 type=i32] [debug line = 68:2@104:15]
  %j.1 = add nsw i32 %j.0.i, 1, !dbg !175         ; [#uses=1 type=i32] [debug line = 22:49@104:15]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !176) nounwind, !dbg !175 ; [debug line = 22:49@104:15] [debug variable = j]
  br label %11, !dbg !175                         ; [debug line = 22:49@104:15]

doRow.exit:                                       ; preds = %11
  %prev_orig_out.0.i.lcssa = phi i20 [ %prev_orig_out.12, %11 ] ; [#uses=1 type=i20]
  %score_out2.0.lcssa = phi i8 [ %score_out2, %11 ] ; [#uses=1 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %score_out2}, i64 0, metadata !177), !dbg !178 ; [debug line = 70:2@104:15] [debug variable = score_out2]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !179), !dbg !131 ; [debug line = 104:15] [debug variable = orig_out2]
  %max_score.4 = sext i8 %score_out2.0.lcssa to i32, !dbg !180 ; [#uses=2 type=i32] [debug line = 107:3]
  %tmp.19 = icmp sgt i32 %max_score.4, %max_score.1, !dbg !180 ; [#uses=2 type=i1] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.4}, i64 0, metadata !124), !dbg !181 ; [debug line = 109:4] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !127), !dbg !183 ; [debug line = 110:4] [debug variable = max_orig]
  %max_orig.2 = select i1 %tmp.19, i20 %prev_orig_out.0.i.lcssa, i20 %max_orig.1, !dbg !180 ; [#uses=1 type=i20] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i20 %max_orig.2}, i64 0, metadata !127), !dbg !180 ; [debug line = 107:3] [debug variable = max_orig]
  %max_score.2 = select i1 %tmp.19, i32 %max_score.4, i32 %max_score.1, !dbg !180 ; [#uses=1 type=i32] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.2}, i64 0, metadata !124), !dbg !180 ; [debug line = 107:3] [debug variable = max_score]
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([4 x i8]* @.str7, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !184 ; [#uses=0 type=i32] [debug line = 113:2]
  call void @llvm.dbg.value(metadata !{i32 %i.assign.1}, i64 0, metadata !129), !dbg !185 ; [debug line = 91:58] [debug variable = i]
  br label %1, !dbg !185                          ; [debug line = 91:58]

; <label>:20                                      ; preds = %1
  %max_orig.0.lcssa = phi i20 [ %max_orig, %1 ]   ; [#uses=1 type=i20]
  ret i20 %max_orig.0.lcssa, !dbg !186            ; [debug line = 115:2]
}

; [#uses=1]
declare void @_ssdm_op_SpecResource(...) nounwind

; [#uses=2]
declare void @_ssdm_SpecArrayReshape(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=58]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=18]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecRegionEnd(...)

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/Nathaniel2/hls1121/solution2/.autopilot/db/week3.pragma.2.c", metadata !"c:/Users/Nathaniel2", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !27} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !24}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"doRow", metadata !"doRow", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !22, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"hls1121/week3.c", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !12, metadata !13, metadata !14, metadata !17, metadata !17, metadata !21, metadata !21, metadata !17}
!9 = metadata !{i32 786454, null, metadata !"orig_t", metadata !6, i32 22, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_typedef ]
!10 = metadata !{i32 786454, null, metadata !"uint20", metadata !6, i32 22, i64 0, i64 0, i64 0, i32 0, metadata !11} ; [ DW_TAG_typedef ]
!11 = metadata !{i32 786468, null, metadata !"uint20", null, i32 0, i64 20, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!13 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !14} ; [ DW_TAG_pointer_type ]
!14 = metadata !{i32 786454, null, metadata !"basepair_t", metadata !6, i32 20, i64 0, i64 0, i64 0, i32 0, metadata !15} ; [ DW_TAG_typedef ]
!15 = metadata !{i32 786454, null, metadata !"uint2", metadata !6, i32 4, i64 0, i64 0, i64 0, i32 0, metadata !16} ; [ DW_TAG_typedef ]
!16 = metadata !{i32 786468, null, metadata !"uint2", null, i32 0, i64 2, i64 2, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!17 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !18} ; [ DW_TAG_pointer_type ]
!18 = metadata !{i32 786454, null, metadata !"score_t", metadata !6, i32 21, i64 0, i64 0, i64 0, i32 0, metadata !19} ; [ DW_TAG_typedef ]
!19 = metadata !{i32 786454, null, metadata !"int8", metadata !6, i32 10, i64 0, i64 0, i64 0, i32 0, metadata !20} ; [ DW_TAG_typedef ]
!20 = metadata !{i32 786468, null, metadata !"int8", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!21 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!22 = metadata !{metadata !23}
!23 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!24 = metadata !{i32 786478, i32 0, metadata !6, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !6, i32 74, metadata !25, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i20 (i2*, i2*)* @needlemanWunsch, null, null, metadata !22, i32 74} ; [ DW_TAG_subprogram ]
!25 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !26, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!26 = metadata !{metadata !9, metadata !13, metadata !13}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !29, metadata !31, metadata !32, metadata !34}
!29 = metadata !{i32 786484, i32 0, null, metadata !"_daylight", metadata !"_daylight", metadata !"", metadata !30, i32 103, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!30 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Ctime.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!31 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !30, i32 250, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!32 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !33, i32 157, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!33 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!34 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !35, i32 53, metadata !36, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!35 = metadata !{i32 786473, metadata !"C:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"c:/Users/Nathaniel2", null} ; [ DW_TAG_file_type ]
!36 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 19, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"return", metadata !41, metadata !"orig_t", i32 0, i32 19}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 1, i32 0}
!43 = metadata !{i32 786689, metadata !24, metadata !"read", metadata !6, i32 16777290, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!44 = metadata !{i32 74, i32 35, metadata !24, null}
!45 = metadata !{i32 786689, metadata !24, metadata !"ref_genome", metadata !6, i32 33554506, metadata !13, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!46 = metadata !{i32 74, i32 80, metadata !24, null}
!47 = metadata !{i32 74, i32 132, metadata !48, null}
!48 = metadata !{i32 786443, metadata !24, i32 74, i32 131, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 74, i32 175, metadata !48, null}
!50 = metadata !{i32 75, i32 1, metadata !48, null}
!51 = metadata !{i32 786688, metadata !48, metadata !"score1", metadata !6, i32 80, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!52 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !18, metadata !53, i32 0, i32 0} ; [ DW_TAG_array_type ]
!53 = metadata !{metadata !54}
!54 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!55 = metadata !{i32 80, i32 10, metadata !48, null}
!56 = metadata !{i32 786688, metadata !48, metadata !"score2", metadata !6, i32 81, metadata !52, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!57 = metadata !{i32 81, i32 10, metadata !48, null}
!58 = metadata !{i32 786688, metadata !48, metadata !"orig1", metadata !6, i32 82, metadata !59, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!59 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3200, i64 32, i32 0, i32 0, metadata !9, metadata !53, i32 0, i32 0} ; [ DW_TAG_array_type ]
!60 = metadata !{i32 82, i32 9, metadata !48, null}
!61 = metadata !{i32 786688, metadata !48, metadata !"orig2", metadata !6, i32 83, metadata !59, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!62 = metadata !{i32 83, i32 9, metadata !48, null}
!63 = metadata !{i32 91, i32 12, metadata !64, null}
!64 = metadata !{i32 786443, metadata !48, i32 91, i32 7, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!65 = metadata !{i32 91, i32 64, metadata !66, null}
!66 = metadata !{i32 786443, metadata !64, i32 91, i32 63, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 92, i32 1, metadata !66, null}
!68 = metadata !{i32 92, i32 15, metadata !66, null}
!69 = metadata !{i32 786689, metadata !5, metadata !"i", metadata !6, i32 16777219, metadata !12, i32 0, metadata !68} ; [ DW_TAG_arg_variable ]
!70 = metadata !{i32 3, i32 18, metadata !5, metadata !68}
!71 = metadata !{i32 786689, metadata !5, metadata !"read", metadata !6, i32 33554435, metadata !13, i32 0, metadata !68} ; [ DW_TAG_arg_variable ]
!72 = metadata !{i32 3, i32 32, metadata !5, metadata !68}
!73 = metadata !{i32 786689, metadata !5, metadata !"ref_genome", metadata !6, i32 50331651, metadata !14, i32 0, metadata !68} ; [ DW_TAG_arg_variable ]
!74 = metadata !{i32 3, i32 77, metadata !5, metadata !68}
!75 = metadata !{i32 14, i32 28, metadata !76, metadata !68}
!76 = metadata !{i32 786443, metadata !5, i32 5, i32 118, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!77 = metadata !{i32 786688, metadata !76, metadata !"prev_orig_out", metadata !6, i32 14, metadata !9, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!78 = metadata !{i32 24, i32 3, metadata !79, metadata !68}
!79 = metadata !{i32 786443, metadata !80, i32 22, i32 54, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 786443, metadata !76, i32 22, i32 7, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!81 = metadata !{i32 41, i32 3, metadata !79, metadata !68}
!82 = metadata !{i32 22, i32 12, metadata !80, metadata !68}
!83 = metadata !{i32 60, i32 4, metadata !84, metadata !68}
!84 = metadata !{i32 786443, metadata !79, i32 58, i32 64, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!85 = metadata !{i32 22, i32 55, metadata !79, metadata !68}
!86 = metadata !{i32 23, i32 1, metadata !79, metadata !68}
!87 = metadata !{i32 26, i32 3, metadata !79, metadata !68}
!88 = metadata !{i32 35, i32 3, metadata !79, metadata !68}
!89 = metadata !{i32 786688, metadata !76, metadata !"diag", metadata !6, i32 8, metadata !18, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!90 = metadata !{i32 36, i32 3, metadata !79, metadata !68}
!91 = metadata !{i32 786688, metadata !76, metadata !"up", metadata !6, i32 8, metadata !18, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!92 = metadata !{i32 37, i32 3, metadata !79, metadata !68}
!93 = metadata !{i32 56, i32 4, metadata !94, metadata !68}
!94 = metadata !{i32 786443, metadata !79, i32 54, i32 59, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!95 = metadata !{i32 786688, metadata !76, metadata !"diag_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!96 = metadata !{i32 42, i32 3, metadata !79, metadata !68}
!97 = metadata !{i32 786688, metadata !76, metadata !"up_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!98 = metadata !{i32 786688, metadata !76, metadata !"left_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!99 = metadata !{i32 43, i32 3, metadata !79, metadata !68}
!100 = metadata !{i32 46, i32 3, metadata !79, metadata !68}
!101 = metadata !{i32 47, i32 3, metadata !79, metadata !68}
!102 = metadata !{i32 786688, metadata !76, metadata !"prev_score_out", metadata !6, i32 11, metadata !18, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!103 = metadata !{i32 55, i32 4, metadata !94, metadata !68}
!104 = metadata !{i32 786688, metadata !76, metadata !"diag_score", metadata !6, i32 9, metadata !18, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!105 = metadata !{i32 50, i32 3, metadata !79, metadata !68}
!106 = metadata !{i32 59, i32 4, metadata !84, metadata !68}
!107 = metadata !{i32 786688, metadata !76, metadata !"left_score", metadata !6, i32 9, metadata !18, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!108 = metadata !{i32 51, i32 3, metadata !79, metadata !68}
!109 = metadata !{i32 786688, metadata !76, metadata !"up_score", metadata !6, i32 9, metadata !18, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!110 = metadata !{i32 54, i32 3, metadata !79, metadata !68}
!111 = metadata !{i32 58, i32 8, metadata !79, metadata !68}
!112 = metadata !{i32 63, i32 4, metadata !113, metadata !68}
!113 = metadata !{i32 786443, metadata !79, i32 62, i32 8, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!114 = metadata !{i32 64, i32 4, metadata !113, metadata !68}
!115 = metadata !{i32 66, i32 3, metadata !79, metadata !68}
!116 = metadata !{i32 67, i32 3, metadata !79, metadata !68}
!117 = metadata !{i32 68, i32 2, metadata !79, metadata !68}
!118 = metadata !{i32 22, i32 49, metadata !80, metadata !68}
!119 = metadata !{i32 786688, metadata !76, metadata !"j", metadata !6, i32 6, metadata !12, i32 0, metadata !68} ; [ DW_TAG_auto_variable ]
!120 = metadata !{i32 786688, metadata !48, metadata !"score_out1", metadata !6, i32 86, metadata !18, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 70, i32 2, metadata !76, metadata !68}
!122 = metadata !{i32 786688, metadata !48, metadata !"orig_out1", metadata !6, i32 85, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!123 = metadata !{i32 95, i32 3, metadata !66, null}
!124 = metadata !{i32 786688, metadata !48, metadata !"max_score", metadata !6, i32 78, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!125 = metadata !{i32 97, i32 4, metadata !126, null}
!126 = metadata !{i32 786443, metadata !66, i32 95, i32 31, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!127 = metadata !{i32 786688, metadata !48, metadata !"max_orig", metadata !6, i32 77, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!128 = metadata !{i32 98, i32 4, metadata !126, null}
!129 = metadata !{i32 786688, metadata !48, metadata !"i", metadata !6, i32 76, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!130 = metadata !{i32 102, i32 3, metadata !66, null}
!131 = metadata !{i32 104, i32 15, metadata !66, null}
!132 = metadata !{i32 786689, metadata !5, metadata !"i", metadata !6, i32 16777219, metadata !12, i32 0, metadata !131} ; [ DW_TAG_arg_variable ]
!133 = metadata !{i32 3, i32 18, metadata !5, metadata !131}
!134 = metadata !{i32 786689, metadata !5, metadata !"read", metadata !6, i32 33554435, metadata !13, i32 0, metadata !131} ; [ DW_TAG_arg_variable ]
!135 = metadata !{i32 3, i32 32, metadata !5, metadata !131}
!136 = metadata !{i32 786689, metadata !5, metadata !"ref_genome", metadata !6, i32 50331651, metadata !14, i32 0, metadata !131} ; [ DW_TAG_arg_variable ]
!137 = metadata !{i32 3, i32 77, metadata !5, metadata !131}
!138 = metadata !{i32 14, i32 28, metadata !76, metadata !131}
!139 = metadata !{i32 786688, metadata !76, metadata !"prev_orig_out", metadata !6, i32 14, metadata !9, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!140 = metadata !{i32 24, i32 3, metadata !79, metadata !131}
!141 = metadata !{i32 22, i32 12, metadata !80, metadata !131}
!142 = metadata !{i32 60, i32 4, metadata !84, metadata !131}
!143 = metadata !{i32 22, i32 55, metadata !79, metadata !131}
!144 = metadata !{i32 23, i32 1, metadata !79, metadata !131}
!145 = metadata !{i32 26, i32 3, metadata !79, metadata !131}
!146 = metadata !{i32 35, i32 3, metadata !79, metadata !131}
!147 = metadata !{i32 786688, metadata !76, metadata !"diag", metadata !6, i32 8, metadata !18, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!148 = metadata !{i32 36, i32 3, metadata !79, metadata !131}
!149 = metadata !{i32 786688, metadata !76, metadata !"up", metadata !6, i32 8, metadata !18, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!150 = metadata !{i32 37, i32 3, metadata !79, metadata !131}
!151 = metadata !{i32 41, i32 3, metadata !79, metadata !131}
!152 = metadata !{i32 56, i32 4, metadata !94, metadata !131}
!153 = metadata !{i32 786688, metadata !76, metadata !"diag_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!154 = metadata !{i32 42, i32 3, metadata !79, metadata !131}
!155 = metadata !{i32 786688, metadata !76, metadata !"up_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!156 = metadata !{i32 786688, metadata !76, metadata !"left_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!157 = metadata !{i32 43, i32 3, metadata !79, metadata !131}
!158 = metadata !{i32 46, i32 3, metadata !79, metadata !131}
!159 = metadata !{i32 47, i32 3, metadata !79, metadata !131}
!160 = metadata !{i32 786688, metadata !76, metadata !"prev_score_out", metadata !6, i32 11, metadata !18, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!161 = metadata !{i32 55, i32 4, metadata !94, metadata !131}
!162 = metadata !{i32 786688, metadata !76, metadata !"diag_score", metadata !6, i32 9, metadata !18, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!163 = metadata !{i32 50, i32 3, metadata !79, metadata !131}
!164 = metadata !{i32 59, i32 4, metadata !84, metadata !131}
!165 = metadata !{i32 786688, metadata !76, metadata !"left_score", metadata !6, i32 9, metadata !18, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!166 = metadata !{i32 51, i32 3, metadata !79, metadata !131}
!167 = metadata !{i32 786688, metadata !76, metadata !"up_score", metadata !6, i32 9, metadata !18, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!168 = metadata !{i32 54, i32 3, metadata !79, metadata !131}
!169 = metadata !{i32 58, i32 8, metadata !79, metadata !131}
!170 = metadata !{i32 63, i32 4, metadata !113, metadata !131}
!171 = metadata !{i32 64, i32 4, metadata !113, metadata !131}
!172 = metadata !{i32 66, i32 3, metadata !79, metadata !131}
!173 = metadata !{i32 67, i32 3, metadata !79, metadata !131}
!174 = metadata !{i32 68, i32 2, metadata !79, metadata !131}
!175 = metadata !{i32 22, i32 49, metadata !80, metadata !131}
!176 = metadata !{i32 786688, metadata !76, metadata !"j", metadata !6, i32 6, metadata !12, i32 0, metadata !131} ; [ DW_TAG_auto_variable ]
!177 = metadata !{i32 786688, metadata !48, metadata !"score_out2", metadata !6, i32 86, metadata !18, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!178 = metadata !{i32 70, i32 2, metadata !76, metadata !131}
!179 = metadata !{i32 786688, metadata !48, metadata !"orig_out2", metadata !6, i32 85, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!180 = metadata !{i32 107, i32 3, metadata !66, null}
!181 = metadata !{i32 109, i32 4, metadata !182, null}
!182 = metadata !{i32 786443, metadata !66, i32 107, i32 31, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!183 = metadata !{i32 110, i32 4, metadata !182, null}
!184 = metadata !{i32 113, i32 2, metadata !66, null}
!185 = metadata !{i32 91, i32 58, metadata !64, null}
!186 = metadata !{i32 115, i32 2, metadata !48, null}
