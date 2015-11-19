; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@.str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=11 type=[1 x i8]*]
@.str1 = private unnamed_addr constant [4 x i8] c"COL\00", align 1 ; [#uses=6 type=[4 x i8]*]
@.str3 = private unnamed_addr constant [5 x i8] c"bram\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str4 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=1 type=[10 x i8]*]
@.str5 = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=1 type=[5 x i8]*]
@.str6 = private unnamed_addr constant [4 x i8] c"ROW\00", align 1 ; [#uses=3 type=[4 x i8]*]
@needlemanWunsch.str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=4]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=3]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=2]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=3]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=59]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=3]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=3]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

; [#uses=4]
declare i2 @_ssdm_op_PartSelect.i2.i8.i5.i5(i8, i5, i5) nounwind readnone

; [#uses=0]
define i20 @needlemanWunsch([25 x i8]* %read, i8* %ref_genome) {
  call void (...)* @_ssdm_op_SpecBitsMap([25 x i8]* %read), !map !37
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %ref_genome), !map !58
  call void (...)* @_ssdm_op_SpecBitsMap(i20 0) nounwind, !map !79
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch.str) nounwind
  %score1 = alloca [100 x i8], align 16           ; [#uses=3 type=[100 x i8]*]
  %score2 = alloca [100 x i8], align 16           ; [#uses=3 type=[100 x i8]*]
  %orig1 = alloca [100 x i20], align 16           ; [#uses=3 type=[100 x i20]*]
  %orig2 = alloca [100 x i20], align 16           ; [#uses=3 type=[100 x i20]*]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %read}, i64 0, metadata !85), !dbg !89 ; [debug line = 74:35] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i8* %ref_genome}, i64 0, metadata !90), !dbg !94 ; [debug line = 74:80] [debug variable = ref_genome]
  call void (...)* @_ssdm_op_SpecInterface([25 x i8]* %read, [5 x i8]* @.str3, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str, [1 x i8]* @.str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @.str4, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str, [1 x i8]* @.str) nounwind, !dbg !95 ; [debug line = 75:1]
  call void (...)* @_ssdm_op_SpecInterface(i8* %ref_genome, [5 x i8]* @.str5, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @.str, [1 x i8]* @.str, [1 x i8]* @.str)
  call void @llvm.dbg.declare(metadata !{[100 x i8]* %score1}, metadata !97), !dbg !99 ; [debug line = 80:10] [debug variable = score1]
  call void @llvm.dbg.declare(metadata !{[100 x i8]* %score2}, metadata !100), !dbg !101 ; [debug line = 81:10] [debug variable = score2]
  call void @llvm.dbg.declare(metadata !{[100 x i20]* %orig1}, metadata !102), !dbg !104 ; [debug line = 82:9] [debug variable = orig1]
  call void @llvm.dbg.declare(metadata !{[100 x i20]* %orig2}, metadata !105), !dbg !106 ; [debug line = 83:9] [debug variable = orig2]
  br label %1, !dbg !107                          ; [debug line = 91:12]

; <label>:1                                       ; preds = %doRow.exit, %0
  %i.assign = phi i20 [ 1, %0 ], [ %i, %doRow.exit ] ; [#uses=8 type=i20]
  %max_orig = phi i20 [ 0, %0 ], [ %max_orig.2, %doRow.exit ] ; [#uses=2 type=i20]
  %max_score = phi i32 [ -100, %0 ], [ %max_score.2, %doRow.exit ] ; [#uses=2 type=i32]
  %tmp = icmp ult i20 %i.assign, -48575, !dbg !107 ; [#uses=1 type=i1] [debug line = 91:12]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 500000, i64 500000, i64 500000) nounwind ; [#uses=0 type=i32]
  br i1 %tmp, label %._crit_edge, label %10, !dbg !107 ; [debug line = 91:12]

._crit_edge:                                      ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @.str6) nounwind, !dbg !109 ; [debug line = 91:66]
  %tmp.2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @.str6) nounwind, !dbg !109 ; [#uses=1 type=i32] [debug line = 91:66]
  %tmp.1 = add i20 %i.assign, -1, !dbg !111       ; [#uses=2 type=i20] [debug line = 92:15]
  %tmp.3.cast = trunc i20 %tmp.1 to i3, !dbg !111 ; [#uses=1 type=i3] [debug line = 92:15]
  %ref_genome.load = load volatile i8* %ref_genome, align 1, !dbg !111 ; [#uses=1 type=i8] [debug line = 92:15]
  %tmp.4 = shl i3 %tmp.3.cast, 1                  ; [#uses=2 type=i3]
  %tmp.8.cast = zext i3 %tmp.4 to i5              ; [#uses=1 type=i5]
  %tmp.9 = or i3 %tmp.4, 1                        ; [#uses=1 type=i3]
  %tmp.9.cast = zext i3 %tmp.9 to i5              ; [#uses=1 type=i5]
  %ref_genome.assign = call i2 @_ssdm_op_PartSelect.i2.i8.i5.i5(i8 %ref_genome.load, i5 %tmp.8.cast, i5 %tmp.9.cast), !dbg !111 ; [#uses=1 type=i2] [debug line = 92:15]
  call void @llvm.dbg.value(metadata !{i20 %i.assign}, i64 0, metadata !112) nounwind, !dbg !113 ; [debug line = 3:18@92:15] [debug variable = i]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %read}, i64 0, metadata !114), !dbg !115 ; [debug line = 3:32@92:15] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2 %ref_genome.assign}, i64 0, metadata !116) nounwind, !dbg !117 ; [debug line = 3:77@92:15] [debug variable = ref_genome]
  %prev_orig_out = add i20 %i.assign, -1, !dbg !118 ; [#uses=1 type=i20] [debug line = 14:28@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out}, i64 0, metadata !120) nounwind, !dbg !118 ; [debug line = 14:28@92:15] [debug variable = prev_orig_out]
  %tmp.5 = icmp eq i20 %i.assign, 1, !dbg !121    ; [#uses=5 type=i1] [debug line = 24:3@92:15]
  br label %3, !dbg !124                          ; [debug line = 22:12@92:15]

; <label>:3                                       ; preds = %_ifconv, %._crit_edge
  %j.0.i2 = phi i7 [ 1, %._crit_edge ], [ %j, %_ifconv ] ; [#uses=5 type=i7]
  %score_out1 = phi i8 [ 0, %._crit_edge ], [ %prev_score_out.3, %_ifconv ] ; [#uses=2 type=i8]
  %prev_orig_out.12 = phi i20 [ %prev_orig_out, %._crit_edge ], [ %prev_orig_out.7, %_ifconv ] ; [#uses=2 type=i20]
  %j.0.i2.cast = zext i7 %j.0.i2 to i8, !dbg !125 ; [#uses=3 type=i8] [debug line = 60:4@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !120) nounwind, !dbg !125 ; [debug line = 60:4@92:15] [debug variable = prev_orig_out]
  %exitcond.i5 = icmp eq i7 %j.0.i2, -27, !dbg !124 ; [#uses=1 type=i1] [debug line = 22:12@92:15]
  %4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond.i5, label %doRow.exit27, label %_ifconv, !dbg !124 ; [debug line = 22:12@92:15]

_ifconv:                                          ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @.str1) nounwind, !dbg !127 ; [debug line = 22:55@92:15]
  %tmp.13 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @.str1) nounwind, !dbg !127 ; [#uses=1 type=i32] [debug line = 22:55@92:15]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !128 ; [debug line = 23:1@92:15]
  %tmp. = sub i8 1, %j.0.i2.cast, !dbg !129       ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %tmp.6 = icmp eq i7 %j.0.i2, 1, !dbg !129       ; [#uses=3 type=i1] [debug line = 35:3@92:15]
  %tmp.11 = add i8 %j.0.i2.cast, -2, !dbg !129    ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %tmp.11.cast = sext i8 %tmp.11 to i32, !dbg !129 ; [#uses=1 type=i32] [debug line = 35:3@92:15]
  %tmp.12 = zext i32 %tmp.11.cast to i64, !dbg !129 ; [#uses=2 type=i64] [debug line = 35:3@92:15]
  %score1.addr = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.12, !dbg !129 ; [#uses=1 type=i8*] [debug line = 35:3@92:15]
  %score1.load = load i8* %score1.addr, align 1, !dbg !129 ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %sel_tmp = select i1 %tmp.5, i8 %tmp., i8 %score1.load, !dbg !129 ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  %sel_tmp1 = xor i1 %tmp.5, true, !dbg !121      ; [#uses=1 type=i1] [debug line = 24:3@92:15]
  %sel_tmp2 = and i1 %tmp.6, %sel_tmp1            ; [#uses=1 type=i1]
  %diag = select i1 %sel_tmp2, i8 0, i8 %sel_tmp, !dbg !129 ; [#uses=1 type=i8] [debug line = 35:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %diag}, i64 0, metadata !130) nounwind, !dbg !129 ; [debug line = 35:3@92:15] [debug variable = diag]
  %tmp.14 = sub i8 0, %j.0.i2.cast, !dbg !131     ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  %tmp.18 = add i7 %j.0.i2, -1, !dbg !131         ; [#uses=3 type=i7] [debug line = 36:3@92:15]
  %tmp.21 = zext i7 %tmp.18 to i64, !dbg !131     ; [#uses=4 type=i64] [debug line = 36:3@92:15]
  %score1.addr.1 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.21, !dbg !131 ; [#uses=1 type=i8*] [debug line = 36:3@92:15]
  %score1.load.1 = load i8* %score1.addr.1, align 1, !dbg !131 ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  %up = select i1 %tmp.5, i8 %tmp.14, i8 %score1.load.1, !dbg !131 ; [#uses=1 type=i8] [debug line = 36:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up}, i64 0, metadata !132) nounwind, !dbg !131 ; [debug line = 36:3@92:15] [debug variable = up]
  %brmerge.i1 = or i1 %tmp.5, %tmp.6, !dbg !133   ; [#uses=1 type=i1] [debug line = 41:3@92:15]
  %orig1.addr = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.12, !dbg !133 ; [#uses=1 type=i20*] [debug line = 41:3@92:15]
  %orig1.load = load i20* %orig1.addr, align 4, !dbg !133 ; [#uses=1 type=i20] [debug line = 41:3@92:15]
  %prev_orig_out.13 = select i1 %brmerge.i1, i20 %tmp.1, i20 %orig1.load, !dbg !133 ; [#uses=1 type=i20] [debug line = 41:3@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.13}, i64 0, metadata !120) nounwind, !dbg !134 ; [debug line = 56:4@92:15] [debug variable = prev_orig_out]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.13}, i64 0, metadata !136) nounwind, !dbg !133 ; [debug line = 41:3@92:15] [debug variable = diag_orig]
  %orig1.addr.2 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.21, !dbg !137 ; [#uses=1 type=i20*] [debug line = 42:3@92:15]
  %orig1.load.1 = load i20* %orig1.addr.2, align 4, !dbg !137 ; [#uses=1 type=i20] [debug line = 42:3@92:15]
  %up_orig = select i1 %tmp.5, i20 0, i20 %orig1.load.1, !dbg !137 ; [#uses=1 type=i20] [debug line = 42:3@92:15]
  call void @llvm.dbg.value(metadata !{i20 %up_orig}, i64 0, metadata !138) nounwind, !dbg !137 ; [debug line = 42:3@92:15] [debug variable = up_orig]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !139) nounwind, !dbg !140 ; [debug line = 43:3@92:15] [debug variable = left_orig]
  %tmp.24 = lshr i7 %tmp.18, 2, !dbg !141         ; [#uses=1 type=i7] [debug line = 46:3@92:15]
  %tmp.64.cast = trunc i7 %tmp.18 to i3, !dbg !141 ; [#uses=1 type=i3] [debug line = 46:3@92:15]
  %tmp.25 = zext i7 %tmp.24 to i64, !dbg !141     ; [#uses=1 type=i64] [debug line = 46:3@92:15]
  %read.addr.1 = getelementptr [25 x i8]* %read, i64 0, i64 %tmp.25, !dbg !141 ; [#uses=1 type=i8*] [debug line = 46:3@92:15]
  %read.load.1 = load i8* %read.addr.1, align 1, !dbg !141 ; [#uses=1 type=i8] [debug line = 46:3@92:15]
  %tmp.26 = shl i3 %tmp.64.cast, 1                ; [#uses=2 type=i3]
  %tmp.67.cast = zext i3 %tmp.26 to i5            ; [#uses=1 type=i5]
  %tmp.27 = or i3 %tmp.26, 1                      ; [#uses=1 type=i3]
  %tmp.68.cast = zext i3 %tmp.27 to i5            ; [#uses=1 type=i5]
  %tmp.28 = call i2 @_ssdm_op_PartSelect.i2.i8.i5.i5(i8 %read.load.1, i5 %tmp.67.cast, i5 %tmp.68.cast), !dbg !141 ; [#uses=1 type=i2] [debug line = 46:3@92:15]
  %tmp.29 = icmp eq i2 %tmp.28, %ref_genome.assign, !dbg !141 ; [#uses=1 type=i1] [debug line = 46:3@92:15]
  %diag_score.0.v.i1.cast = select i1 %tmp.29, i8 1, i8 -1, !dbg !142 ; [#uses=1 type=i8] [debug line = 47:3@92:15]
  %prev_score_out.8 = add i8 %diag_score.0.v.i1.cast, %diag, !dbg !142 ; [#uses=4 type=i8] [debug line = 47:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.8}, i64 0, metadata !143) nounwind, !dbg !144 ; [debug line = 55:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.8}, i64 0, metadata !145) nounwind, !dbg !142 ; [debug line = 47:3@92:15] [debug variable = diag_score]
  %prev_score_out.0.op.i1 = add i8 %score_out1, -1, !dbg !146 ; [#uses=1 type=i8] [debug line = 50:3@92:15]
  %prev_score_out.9 = select i1 %tmp.6, i8 -1, i8 %prev_score_out.0.op.i1, !dbg !146 ; [#uses=4 type=i8] [debug line = 50:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.9}, i64 0, metadata !143) nounwind, !dbg !147 ; [debug line = 59:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.9}, i64 0, metadata !148) nounwind, !dbg !146 ; [debug line = 50:3@92:15] [debug variable = left_score]
  %up_score = add i8 %up, -1, !dbg !149           ; [#uses=3 type=i8] [debug line = 51:3@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score}, i64 0, metadata !150) nounwind, !dbg !149 ; [debug line = 51:3@92:15] [debug variable = up_score]
  %tmp.30 = icmp slt i8 %prev_score_out.8, %prev_score_out.9, !dbg !151 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  %tmp.32 = icmp slt i8 %prev_score_out.8, %up_score, !dbg !151 ; [#uses=1 type=i1] [debug line = 54:3@92:15]
  %or.cond.i1 = or i1 %tmp.30, %tmp.32, !dbg !151 ; [#uses=2 type=i1] [debug line = 54:3@92:15]
  %tmp.33 = icmp slt i8 %prev_score_out.9, %prev_score_out.8, !dbg !152 ; [#uses=1 type=i1] [debug line = 58:8@92:15]
  %tmp.34 = icmp slt i8 %prev_score_out.9, %up_score, !dbg !152 ; [#uses=1 type=i1] [debug line = 58:8@92:15]
  %or.cond1.i1 = or i1 %tmp.33, %tmp.34, !dbg !152 ; [#uses=2 type=i1] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score}, i64 0, metadata !143) nounwind, !dbg !153 ; [debug line = 63:4@92:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i20 %up_orig}, i64 0, metadata !120) nounwind, !dbg !155 ; [debug line = 64:4@92:15] [debug variable = prev_orig_out]
  %prev_score_out.1 = select i1 %or.cond1.i1, i8 %up_score, i8 %prev_score_out.9, !dbg !152 ; [#uses=1 type=i8] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.1}, i64 0, metadata !143) nounwind, !dbg !152 ; [debug line = 58:8@92:15] [debug variable = prev_score_out]
  %prev_orig_out.5 = select i1 %or.cond1.i1, i20 %up_orig, i20 %prev_orig_out.12, !dbg !152 ; [#uses=1 type=i20] [debug line = 58:8@92:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.5}, i64 0, metadata !120) nounwind, !dbg !152 ; [debug line = 58:8@92:15] [debug variable = prev_orig_out]
  %prev_score_out.3 = select i1 %or.cond.i1, i8 %prev_score_out.1, i8 %prev_score_out.8 ; [#uses=2 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.3}, i64 0, metadata !143) nounwind, !dbg !144 ; [debug line = 55:4@92:15] [debug variable = prev_score_out]
  %prev_orig_out.7 = select i1 %or.cond.i1, i20 %prev_orig_out.5, i20 %prev_orig_out.13 ; [#uses=2 type=i20]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.7}, i64 0, metadata !120) nounwind, !dbg !134 ; [debug line = 56:4@92:15] [debug variable = prev_orig_out]
  %score2.addr.2 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.21, !dbg !156 ; [#uses=1 type=i8*] [debug line = 66:3@92:15]
  store i8 %prev_score_out.3, i8* %score2.addr.2, align 1, !dbg !156 ; [debug line = 66:3@92:15]
  %orig2.addr.2 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.21, !dbg !157 ; [#uses=1 type=i20*] [debug line = 67:3@92:15]
  store i20 %prev_orig_out.7, i20* %orig2.addr.2, align 4, !dbg !157 ; [debug line = 67:3@92:15]
  %5 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @.str1, i32 %tmp.13) nounwind, !dbg !158 ; [#uses=0 type=i32] [debug line = 68:2@92:15]
  %j = add i7 %j.0.i2, 1, !dbg !159               ; [#uses=1 type=i7] [debug line = 22:49@92:15]
  call void @llvm.dbg.value(metadata !{i7 %j}, i64 0, metadata !160) nounwind, !dbg !159 ; [debug line = 22:49@92:15] [debug variable = j]
  br label %3, !dbg !159                          ; [debug line = 22:49@92:15]

doRow.exit27:                                     ; preds = %3
  %prev_orig_out.10.lcssa = phi i20 [ %prev_orig_out.12, %3 ] ; [#uses=1 type=i20]
  %score_out1.lcssa = phi i8 [ %score_out1, %3 ]  ; [#uses=1 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %score_out1}, i64 0, metadata !161), !dbg !162 ; [debug line = 70:2@92:15] [debug variable = score_out1]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !163), !dbg !111 ; [debug line = 92:15] [debug variable = orig_out1]
  %max_score.3 = sext i8 %score_out1.lcssa to i32, !dbg !164 ; [#uses=2 type=i32] [debug line = 95:3]
  %tmp.7 = icmp sgt i32 %max_score.3, %max_score, !dbg !164 ; [#uses=2 type=i1] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.3}, i64 0, metadata !165), !dbg !166 ; [debug line = 97:4] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.12}, i64 0, metadata !168), !dbg !169 ; [debug line = 98:4] [debug variable = max_orig]
  %max_orig.1 = select i1 %tmp.7, i20 %prev_orig_out.10.lcssa, i20 %max_orig, !dbg !164 ; [#uses=1 type=i20] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i20 %max_orig.1}, i64 0, metadata !168), !dbg !164 ; [debug line = 95:3] [debug variable = max_orig]
  %max_score.1 = select i1 %tmp.7, i32 %max_score.3, i32 %max_score, !dbg !164 ; [#uses=2 type=i32] [debug line = 95:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.1}, i64 0, metadata !165), !dbg !164 ; [debug line = 95:3] [debug variable = max_score]
  %tmp.14.cast = trunc i20 %i.assign to i3, !dbg !170 ; [#uses=1 type=i3] [debug line = 104:15]
  %ref_genome.load.1 = load volatile i8* %ref_genome, align 1, !dbg !170 ; [#uses=1 type=i8] [debug line = 104:15]
  %tmp.3 = shl i3 %tmp.14.cast, 1                 ; [#uses=2 type=i3]
  %tmp.26.cast = zext i3 %tmp.3 to i5             ; [#uses=1 type=i5]
  %tmp.8 = or i3 %tmp.3, 1                        ; [#uses=1 type=i3]
  %tmp.29.cast = zext i3 %tmp.8 to i5             ; [#uses=1 type=i5]
  %ref_genome.assign.1 = call i2 @_ssdm_op_PartSelect.i2.i8.i5.i5(i8 %ref_genome.load.1, i5 %tmp.26.cast, i5 %tmp.29.cast), !dbg !170 ; [#uses=1 type=i2] [debug line = 104:15]
  call void @llvm.dbg.value(metadata !{[25 x i8]* %read}, i64 0, metadata !114), !dbg !171 ; [debug line = 3:32@104:15] [debug variable = read]
  call void @llvm.dbg.value(metadata !{i2 %ref_genome.assign.1}, i64 0, metadata !172) nounwind, !dbg !173 ; [debug line = 3:77@104:15] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{i20 %i.assign}, i64 0, metadata !174) nounwind, !dbg !175 ; [debug line = 14:28@104:15] [debug variable = prev_orig_out]
  br label %6, !dbg !176                          ; [debug line = 22:12@104:15]

; <label>:6                                       ; preds = %._crit_edge.i_ifconv, %doRow.exit27
  %j.0.i = phi i7 [ 1, %doRow.exit27 ], [ %j.1, %._crit_edge.i_ifconv ] ; [#uses=5 type=i7]
  %score_out2 = phi i8 [ 0, %doRow.exit27 ], [ %prev_score_out.7, %._crit_edge.i_ifconv ] ; [#uses=2 type=i8]
  %prev_orig_out.14 = phi i20 [ %i.assign, %doRow.exit27 ], [ %prev_orig_out.11, %._crit_edge.i_ifconv ] ; [#uses=2 type=i20]
  %j.0.i.cast = zext i7 %j.0.i to i8, !dbg !177   ; [#uses=1 type=i8] [debug line = 60:4@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.14}, i64 0, metadata !174) nounwind, !dbg !177 ; [debug line = 60:4@104:15] [debug variable = prev_orig_out]
  %exitcond.i = icmp eq i7 %j.0.i, -27, !dbg !176 ; [#uses=1 type=i1] [debug line = 22:12@104:15]
  %7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond.i, label %doRow.exit, label %._crit_edge.i_ifconv, !dbg !176 ; [debug line = 22:12@104:15]

._crit_edge.i_ifconv:                             ; preds = %6
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @.str1) nounwind, !dbg !178 ; [debug line = 22:55@104:15]
  %tmp.31 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @.str1) nounwind, !dbg !178 ; [#uses=1 type=i32] [debug line = 22:55@104:15]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @.str) nounwind, !dbg !179 ; [debug line = 23:1@104:15]
  %tmp.15 = add i7 %j.0.i, -1, !dbg !180          ; [#uses=3 type=i7] [debug line = 24:3@104:15]
  %tmp.16 = zext i7 %tmp.15 to i64, !dbg !180     ; [#uses=4 type=i64] [debug line = 24:3@104:15]
  %score2.addr = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.16, !dbg !180 ; [#uses=1 type=i8*] [debug line = 24:3@104:15]
  %score2.load = load i8* %score2.addr, align 1, !dbg !180 ; [#uses=1 type=i8] [debug line = 24:3@104:15]
  %orig2.addr = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.16, !dbg !181 ; [#uses=1 type=i20*] [debug line = 26:3@104:15]
  %up_orig.1 = load i20* %orig2.addr, align 4, !dbg !181 ; [#uses=1 type=i20] [debug line = 26:3@104:15]
  %tmp.17 = icmp eq i7 %j.0.i, 1, !dbg !182       ; [#uses=3 type=i1] [debug line = 35:3@104:15]
  %tmp.19 = add i8 %j.0.i.cast, -2, !dbg !182     ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  %tmp.19.cast = sext i8 %tmp.19 to i32, !dbg !182 ; [#uses=1 type=i32] [debug line = 35:3@104:15]
  %tmp.20 = zext i32 %tmp.19.cast to i64, !dbg !182 ; [#uses=2 type=i64] [debug line = 35:3@104:15]
  %score2.addr.1 = getelementptr inbounds [100 x i8]* %score2, i64 0, i64 %tmp.20, !dbg !182 ; [#uses=1 type=i8*] [debug line = 35:3@104:15]
  %score2.load.1 = load i8* %score2.addr.1, align 1, !dbg !182 ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  %diag.1 = select i1 %tmp.17, i8 0, i8 %score2.load.1, !dbg !182 ; [#uses=1 type=i8] [debug line = 35:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %diag.1}, i64 0, metadata !183) nounwind, !dbg !182 ; [debug line = 35:3@104:15] [debug variable = diag]
  %up_score.1 = add i8 %score2.load, -1, !dbg !184 ; [#uses=3 type=i8] [debug line = 36:3@104:15]
  %orig2.addr.1 = getelementptr inbounds [100 x i20]* %orig2, i64 0, i64 %tmp.20, !dbg !185 ; [#uses=1 type=i20*] [debug line = 41:3@104:15]
  %orig2.load.1 = load i20* %orig2.addr.1, align 4, !dbg !185 ; [#uses=1 type=i20] [debug line = 41:3@104:15]
  %prev_orig_out.15 = select i1 %tmp.17, i20 %i.assign, i20 %orig2.load.1, !dbg !185 ; [#uses=1 type=i20] [debug line = 41:3@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.15}, i64 0, metadata !174) nounwind, !dbg !186 ; [debug line = 56:4@104:15] [debug variable = prev_orig_out]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.15}, i64 0, metadata !187) nounwind, !dbg !185 ; [debug line = 41:3@104:15] [debug variable = diag_orig]
  call void @llvm.dbg.value(metadata !{i20 %up_orig.1}, i64 0, metadata !188) nounwind, !dbg !189 ; [debug line = 42:3@104:15] [debug variable = up_orig]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.14}, i64 0, metadata !190) nounwind, !dbg !191 ; [debug line = 43:3@104:15] [debug variable = left_orig]
  %tmp.36 = lshr i7 %tmp.15, 2, !dbg !192         ; [#uses=1 type=i7] [debug line = 46:3@104:15]
  %tmp.50.cast = trunc i7 %tmp.15 to i3, !dbg !192 ; [#uses=1 type=i3] [debug line = 46:3@104:15]
  %tmp.37 = zext i7 %tmp.36 to i64, !dbg !192     ; [#uses=1 type=i64] [debug line = 46:3@104:15]
  %read.addr = getelementptr [25 x i8]* %read, i64 0, i64 %tmp.37, !dbg !192 ; [#uses=1 type=i8*] [debug line = 46:3@104:15]
  %read.load = load i8* %read.addr, align 1, !dbg !192 ; [#uses=1 type=i8] [debug line = 46:3@104:15]
  %tmp.38 = shl i3 %tmp.50.cast, 1                ; [#uses=2 type=i3]
  %tmp.55.cast = zext i3 %tmp.38 to i5            ; [#uses=1 type=i5]
  %tmp.39 = or i3 %tmp.38, 1                      ; [#uses=1 type=i3]
  %tmp.60.cast = zext i3 %tmp.39 to i5            ; [#uses=1 type=i5]
  %tmp.40 = call i2 @_ssdm_op_PartSelect.i2.i8.i5.i5(i8 %read.load, i5 %tmp.55.cast, i5 %tmp.60.cast), !dbg !192 ; [#uses=1 type=i2] [debug line = 46:3@104:15]
  %tmp.41 = icmp eq i2 %tmp.40, %ref_genome.assign.1, !dbg !192 ; [#uses=1 type=i1] [debug line = 46:3@104:15]
  %diag_score.0.v.i.cast = select i1 %tmp.41, i8 1, i8 -1, !dbg !193 ; [#uses=1 type=i8] [debug line = 47:3@104:15]
  %prev_score_out = add i8 %diag_score.0.v.i.cast, %diag.1, !dbg !193 ; [#uses=4 type=i8] [debug line = 47:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out}, i64 0, metadata !194) nounwind, !dbg !195 ; [debug line = 55:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out}, i64 0, metadata !196) nounwind, !dbg !193 ; [debug line = 47:3@104:15] [debug variable = diag_score]
  %prev_score_out.0.op.i = add i8 %score_out2, -1, !dbg !197 ; [#uses=1 type=i8] [debug line = 50:3@104:15]
  %prev_score_out.10 = select i1 %tmp.17, i8 -1, i8 %prev_score_out.0.op.i, !dbg !197 ; [#uses=4 type=i8] [debug line = 50:3@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.10}, i64 0, metadata !194) nounwind, !dbg !198 ; [debug line = 59:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.10}, i64 0, metadata !199) nounwind, !dbg !197 ; [debug line = 50:3@104:15] [debug variable = left_score]
  call void @llvm.dbg.value(metadata !{i8 %up_score.1}, i64 0, metadata !200) nounwind, !dbg !201 ; [debug line = 51:3@104:15] [debug variable = up_score]
  %tmp.42 = icmp slt i8 %prev_score_out, %prev_score_out.10, !dbg !202 ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  %tmp.43 = icmp slt i8 %prev_score_out, %up_score.1, !dbg !202 ; [#uses=1 type=i1] [debug line = 54:3@104:15]
  %or.cond.i = or i1 %tmp.42, %tmp.43, !dbg !202  ; [#uses=2 type=i1] [debug line = 54:3@104:15]
  %tmp.44 = icmp slt i8 %prev_score_out.10, %prev_score_out, !dbg !203 ; [#uses=1 type=i1] [debug line = 58:8@104:15]
  %tmp.45 = icmp slt i8 %prev_score_out.10, %up_score.1, !dbg !203 ; [#uses=1 type=i1] [debug line = 58:8@104:15]
  %or.cond1.i = or i1 %tmp.44, %tmp.45, !dbg !203 ; [#uses=2 type=i1] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i8 %up_score.1}, i64 0, metadata !194) nounwind, !dbg !204 ; [debug line = 63:4@104:15] [debug variable = prev_score_out]
  call void @llvm.dbg.value(metadata !{i20 %up_orig.1}, i64 0, metadata !174) nounwind, !dbg !205 ; [debug line = 64:4@104:15] [debug variable = prev_orig_out]
  %prev_score_out.2 = select i1 %or.cond1.i, i8 %up_score.1, i8 %prev_score_out.10, !dbg !203 ; [#uses=1 type=i8] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.2}, i64 0, metadata !194) nounwind, !dbg !203 ; [debug line = 58:8@104:15] [debug variable = prev_score_out]
  %prev_orig_out.6 = select i1 %or.cond1.i, i20 %up_orig.1, i20 %prev_orig_out.14, !dbg !203 ; [#uses=1 type=i20] [debug line = 58:8@104:15]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.6}, i64 0, metadata !174) nounwind, !dbg !203 ; [debug line = 58:8@104:15] [debug variable = prev_orig_out]
  %prev_score_out.7 = select i1 %or.cond.i, i8 %prev_score_out.2, i8 %prev_score_out ; [#uses=2 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %prev_score_out.7}, i64 0, metadata !194) nounwind, !dbg !195 ; [debug line = 55:4@104:15] [debug variable = prev_score_out]
  %prev_orig_out.11 = select i1 %or.cond.i, i20 %prev_orig_out.6, i20 %prev_orig_out.15 ; [#uses=2 type=i20]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.11}, i64 0, metadata !174) nounwind, !dbg !186 ; [debug line = 56:4@104:15] [debug variable = prev_orig_out]
  %score1.addr.2 = getelementptr inbounds [100 x i8]* %score1, i64 0, i64 %tmp.16, !dbg !206 ; [#uses=1 type=i8*] [debug line = 66:3@104:15]
  store i8 %prev_score_out.7, i8* %score1.addr.2, align 1, !dbg !206 ; [debug line = 66:3@104:15]
  %orig1.addr.1 = getelementptr inbounds [100 x i20]* %orig1, i64 0, i64 %tmp.16, !dbg !207 ; [#uses=1 type=i20*] [debug line = 67:3@104:15]
  store i20 %prev_orig_out.11, i20* %orig1.addr.1, align 4, !dbg !207 ; [debug line = 67:3@104:15]
  %8 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @.str1, i32 %tmp.31) nounwind, !dbg !208 ; [#uses=0 type=i32] [debug line = 68:2@104:15]
  %j.1 = add i7 %j.0.i, 1, !dbg !209              ; [#uses=1 type=i7] [debug line = 22:49@104:15]
  call void @llvm.dbg.value(metadata !{i7 %j.1}, i64 0, metadata !210) nounwind, !dbg !209 ; [debug line = 22:49@104:15] [debug variable = j]
  br label %6, !dbg !209                          ; [debug line = 22:49@104:15]

doRow.exit:                                       ; preds = %6
  %prev_orig_out.12.lcssa = phi i20 [ %prev_orig_out.14, %6 ] ; [#uses=1 type=i20]
  %score_out2.lcssa = phi i8 [ %score_out2, %6 ]  ; [#uses=1 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %score_out2}, i64 0, metadata !211), !dbg !212 ; [debug line = 70:2@104:15] [debug variable = score_out2]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.14}, i64 0, metadata !213), !dbg !170 ; [debug line = 104:15] [debug variable = orig_out2]
  %max_score.4 = sext i8 %score_out2.lcssa to i32, !dbg !214 ; [#uses=2 type=i32] [debug line = 107:3]
  %tmp.10 = icmp sgt i32 %max_score.4, %max_score.1, !dbg !214 ; [#uses=2 type=i1] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.4}, i64 0, metadata !165), !dbg !215 ; [debug line = 109:4] [debug variable = max_score]
  call void @llvm.dbg.value(metadata !{i20 %prev_orig_out.14}, i64 0, metadata !168), !dbg !217 ; [debug line = 110:4] [debug variable = max_orig]
  %max_orig.2 = select i1 %tmp.10, i20 %prev_orig_out.12.lcssa, i20 %max_orig.1, !dbg !214 ; [#uses=1 type=i20] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i20 %max_orig.2}, i64 0, metadata !168), !dbg !214 ; [debug line = 107:3] [debug variable = max_orig]
  %max_score.2 = select i1 %tmp.10, i32 %max_score.4, i32 %max_score.1, !dbg !214 ; [#uses=1 type=i32] [debug line = 107:3]
  call void @llvm.dbg.value(metadata !{i32 %max_score.2}, i64 0, metadata !165), !dbg !214 ; [debug line = 107:3] [debug variable = max_score]
  %9 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @.str6, i32 %tmp.2) nounwind, !dbg !218 ; [#uses=0 type=i32] [debug line = 113:2]
  %i = add i20 %i.assign, 2, !dbg !219            ; [#uses=1 type=i20] [debug line = 91:60]
  call void @llvm.dbg.value(metadata !{i20 %i}, i64 0, metadata !220), !dbg !219 ; [debug line = 91:60] [debug variable = i]
  br label %1, !dbg !219                          ; [debug line = 91:60]

; <label>:10                                      ; preds = %1
  %max_orig.lcssa = phi i20 [ %max_orig, %1 ]     ; [#uses=1 type=i20]
  ret i20 %max_orig.lcssa, !dbg !221              ; [debug line = 115:2]
}

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/week3.pragma.2.c", metadata !"c:/Users/Nathaniel", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !27} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5, metadata !24}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"doRow", metadata !"doRow", metadata !"", metadata !6, i32 3, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !22, i32 5} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"643_PE/week3.c", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
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
!24 = metadata !{i32 786478, i32 0, metadata !6, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !6, i32 74, metadata !25, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !22, i32 74} ; [ DW_TAG_subprogram ]
!25 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !26, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!26 = metadata !{metadata !9, metadata !13, metadata !13}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !29, metadata !31, metadata !32, metadata !34}
!29 = metadata !{i32 786484, i32 0, null, metadata !"_daylight", metadata !"_daylight", metadata !"", metadata !30, i32 103, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!30 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Ctime.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!31 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !30, i32 250, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!32 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !33, i32 157, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!33 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!34 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !35, i32 53, metadata !36, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!35 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!36 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!37 = metadata !{metadata !38, metadata !43, metadata !48, metadata !53}
!38 = metadata !{i32 0, i32 1, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"read", metadata !41, metadata !"uint2", i32 0, i32 1}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 96, i32 4}
!43 = metadata !{i32 2, i32 3, metadata !44}
!44 = metadata !{metadata !45}
!45 = metadata !{metadata !"read", metadata !46, metadata !"uint2", i32 0, i32 1}
!46 = metadata !{metadata !47}
!47 = metadata !{i32 1, i32 97, i32 4}
!48 = metadata !{i32 4, i32 5, metadata !49}
!49 = metadata !{metadata !50}
!50 = metadata !{metadata !"read", metadata !51, metadata !"uint2", i32 0, i32 1}
!51 = metadata !{metadata !52}
!52 = metadata !{i32 2, i32 98, i32 4}
!53 = metadata !{i32 6, i32 7, metadata !54}
!54 = metadata !{metadata !55}
!55 = metadata !{metadata !"read", metadata !56, metadata !"uint2", i32 0, i32 1}
!56 = metadata !{metadata !57}
!57 = metadata !{i32 3, i32 99, i32 4}
!58 = metadata !{metadata !59, metadata !64, metadata !69, metadata !74}
!59 = metadata !{i32 0, i32 1, metadata !60}
!60 = metadata !{metadata !61}
!61 = metadata !{metadata !"ref_genome", metadata !62, metadata !"uint2", i32 0, i32 1}
!62 = metadata !{metadata !63}
!63 = metadata !{i32 0, i32 999996, i32 4}
!64 = metadata !{i32 2, i32 3, metadata !65}
!65 = metadata !{metadata !66}
!66 = metadata !{metadata !"ref_genome", metadata !67, metadata !"uint2", i32 0, i32 1}
!67 = metadata !{metadata !68}
!68 = metadata !{i32 1, i32 999997, i32 4}
!69 = metadata !{i32 4, i32 5, metadata !70}
!70 = metadata !{metadata !71}
!71 = metadata !{metadata !"ref_genome", metadata !72, metadata !"uint2", i32 0, i32 1}
!72 = metadata !{metadata !73}
!73 = metadata !{i32 2, i32 999998, i32 4}
!74 = metadata !{i32 6, i32 7, metadata !75}
!75 = metadata !{metadata !76}
!76 = metadata !{metadata !"ref_genome", metadata !77, metadata !"uint2", i32 0, i32 1}
!77 = metadata !{metadata !78}
!78 = metadata !{i32 3, i32 999999, i32 4}
!79 = metadata !{metadata !80}
!80 = metadata !{i32 0, i32 19, metadata !81}
!81 = metadata !{metadata !82}
!82 = metadata !{metadata !"return", metadata !83, metadata !"orig_t", i32 0, i32 19}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 0, i32 1, i32 0}
!85 = metadata !{i32 786689, metadata !24, metadata !"read", null, i32 74, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!86 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !14, metadata !87, i32 0, i32 0} ; [ DW_TAG_array_type ]
!87 = metadata !{metadata !88}
!88 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!89 = metadata !{i32 74, i32 35, metadata !24, null}
!90 = metadata !{i32 786689, metadata !24, metadata !"ref_genome", null, i32 74, metadata !91, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!91 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !14, metadata !92, i32 0, i32 0} ; [ DW_TAG_array_type ]
!92 = metadata !{metadata !93}
!93 = metadata !{i32 786465, i64 0, i64 999999}   ; [ DW_TAG_subrange_type ]
!94 = metadata !{i32 74, i32 80, metadata !24, null}
!95 = metadata !{i32 75, i32 1, metadata !96, null}
!96 = metadata !{i32 786443, metadata !24, i32 74, i32 131, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!97 = metadata !{i32 786688, metadata !96, metadata !"score1", metadata !6, i32 80, metadata !98, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!98 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !18, metadata !87, i32 0, i32 0} ; [ DW_TAG_array_type ]
!99 = metadata !{i32 80, i32 10, metadata !96, null}
!100 = metadata !{i32 786688, metadata !96, metadata !"score2", metadata !6, i32 81, metadata !98, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!101 = metadata !{i32 81, i32 10, metadata !96, null}
!102 = metadata !{i32 786688, metadata !96, metadata !"orig1", metadata !6, i32 82, metadata !103, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!103 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3200, i64 32, i32 0, i32 0, metadata !9, metadata !87, i32 0, i32 0} ; [ DW_TAG_array_type ]
!104 = metadata !{i32 82, i32 9, metadata !96, null}
!105 = metadata !{i32 786688, metadata !96, metadata !"orig2", metadata !6, i32 83, metadata !103, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!106 = metadata !{i32 83, i32 9, metadata !96, null}
!107 = metadata !{i32 91, i32 12, metadata !108, null}
!108 = metadata !{i32 786443, metadata !96, i32 91, i32 7, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 91, i32 66, metadata !110, null}
!110 = metadata !{i32 786443, metadata !108, i32 91, i32 65, metadata !6, i32 8} ; [ DW_TAG_lexical_block ]
!111 = metadata !{i32 92, i32 15, metadata !110, null}
!112 = metadata !{i32 786689, metadata !5, metadata !"i", metadata !6, i32 16777219, metadata !12, i32 0, metadata !111} ; [ DW_TAG_arg_variable ]
!113 = metadata !{i32 3, i32 18, metadata !5, metadata !111}
!114 = metadata !{i32 786689, metadata !5, metadata !"read", null, i32 3, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!115 = metadata !{i32 3, i32 32, metadata !5, metadata !111}
!116 = metadata !{i32 786689, metadata !5, metadata !"ref_genome", metadata !6, i32 50331651, metadata !14, i32 0, metadata !111} ; [ DW_TAG_arg_variable ]
!117 = metadata !{i32 3, i32 77, metadata !5, metadata !111}
!118 = metadata !{i32 14, i32 28, metadata !119, metadata !111}
!119 = metadata !{i32 786443, metadata !5, i32 5, i32 118, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!120 = metadata !{i32 786688, metadata !119, metadata !"prev_orig_out", metadata !6, i32 14, metadata !9, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!121 = metadata !{i32 24, i32 3, metadata !122, metadata !111}
!122 = metadata !{i32 786443, metadata !123, i32 22, i32 54, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!123 = metadata !{i32 786443, metadata !119, i32 22, i32 7, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!124 = metadata !{i32 22, i32 12, metadata !123, metadata !111}
!125 = metadata !{i32 60, i32 4, metadata !126, metadata !111}
!126 = metadata !{i32 786443, metadata !122, i32 58, i32 64, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!127 = metadata !{i32 22, i32 55, metadata !122, metadata !111}
!128 = metadata !{i32 23, i32 1, metadata !122, metadata !111}
!129 = metadata !{i32 35, i32 3, metadata !122, metadata !111}
!130 = metadata !{i32 786688, metadata !119, metadata !"diag", metadata !6, i32 8, metadata !18, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!131 = metadata !{i32 36, i32 3, metadata !122, metadata !111}
!132 = metadata !{i32 786688, metadata !119, metadata !"up", metadata !6, i32 8, metadata !18, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!133 = metadata !{i32 41, i32 3, metadata !122, metadata !111}
!134 = metadata !{i32 56, i32 4, metadata !135, metadata !111}
!135 = metadata !{i32 786443, metadata !122, i32 54, i32 59, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!136 = metadata !{i32 786688, metadata !119, metadata !"diag_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!137 = metadata !{i32 42, i32 3, metadata !122, metadata !111}
!138 = metadata !{i32 786688, metadata !119, metadata !"up_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!139 = metadata !{i32 786688, metadata !119, metadata !"left_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!140 = metadata !{i32 43, i32 3, metadata !122, metadata !111}
!141 = metadata !{i32 46, i32 3, metadata !122, metadata !111}
!142 = metadata !{i32 47, i32 3, metadata !122, metadata !111}
!143 = metadata !{i32 786688, metadata !119, metadata !"prev_score_out", metadata !6, i32 11, metadata !18, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!144 = metadata !{i32 55, i32 4, metadata !135, metadata !111}
!145 = metadata !{i32 786688, metadata !119, metadata !"diag_score", metadata !6, i32 9, metadata !18, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!146 = metadata !{i32 50, i32 3, metadata !122, metadata !111}
!147 = metadata !{i32 59, i32 4, metadata !126, metadata !111}
!148 = metadata !{i32 786688, metadata !119, metadata !"left_score", metadata !6, i32 9, metadata !18, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!149 = metadata !{i32 51, i32 3, metadata !122, metadata !111}
!150 = metadata !{i32 786688, metadata !119, metadata !"up_score", metadata !6, i32 9, metadata !18, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!151 = metadata !{i32 54, i32 3, metadata !122, metadata !111}
!152 = metadata !{i32 58, i32 8, metadata !122, metadata !111}
!153 = metadata !{i32 63, i32 4, metadata !154, metadata !111}
!154 = metadata !{i32 786443, metadata !122, i32 62, i32 8, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!155 = metadata !{i32 64, i32 4, metadata !154, metadata !111}
!156 = metadata !{i32 66, i32 3, metadata !122, metadata !111}
!157 = metadata !{i32 67, i32 3, metadata !122, metadata !111}
!158 = metadata !{i32 68, i32 2, metadata !122, metadata !111}
!159 = metadata !{i32 22, i32 49, metadata !123, metadata !111}
!160 = metadata !{i32 786688, metadata !119, metadata !"j", metadata !6, i32 6, metadata !12, i32 0, metadata !111} ; [ DW_TAG_auto_variable ]
!161 = metadata !{i32 786688, metadata !96, metadata !"score_out1", metadata !6, i32 86, metadata !18, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!162 = metadata !{i32 70, i32 2, metadata !119, metadata !111}
!163 = metadata !{i32 786688, metadata !96, metadata !"orig_out1", metadata !6, i32 85, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!164 = metadata !{i32 95, i32 3, metadata !110, null}
!165 = metadata !{i32 786688, metadata !96, metadata !"max_score", metadata !6, i32 78, metadata !12, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!166 = metadata !{i32 97, i32 4, metadata !167, null}
!167 = metadata !{i32 786443, metadata !110, i32 95, i32 31, metadata !6, i32 9} ; [ DW_TAG_lexical_block ]
!168 = metadata !{i32 786688, metadata !96, metadata !"max_orig", metadata !6, i32 77, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!169 = metadata !{i32 98, i32 4, metadata !167, null}
!170 = metadata !{i32 104, i32 15, metadata !110, null}
!171 = metadata !{i32 3, i32 32, metadata !5, metadata !170}
!172 = metadata !{i32 786689, metadata !5, metadata !"ref_genome", metadata !6, i32 50331651, metadata !14, i32 0, metadata !170} ; [ DW_TAG_arg_variable ]
!173 = metadata !{i32 3, i32 77, metadata !5, metadata !170}
!174 = metadata !{i32 786688, metadata !119, metadata !"prev_orig_out", metadata !6, i32 14, metadata !9, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!175 = metadata !{i32 14, i32 28, metadata !119, metadata !170}
!176 = metadata !{i32 22, i32 12, metadata !123, metadata !170}
!177 = metadata !{i32 60, i32 4, metadata !126, metadata !170}
!178 = metadata !{i32 22, i32 55, metadata !122, metadata !170}
!179 = metadata !{i32 23, i32 1, metadata !122, metadata !170}
!180 = metadata !{i32 24, i32 3, metadata !122, metadata !170}
!181 = metadata !{i32 26, i32 3, metadata !122, metadata !170}
!182 = metadata !{i32 35, i32 3, metadata !122, metadata !170}
!183 = metadata !{i32 786688, metadata !119, metadata !"diag", metadata !6, i32 8, metadata !18, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!184 = metadata !{i32 36, i32 3, metadata !122, metadata !170}
!185 = metadata !{i32 41, i32 3, metadata !122, metadata !170}
!186 = metadata !{i32 56, i32 4, metadata !135, metadata !170}
!187 = metadata !{i32 786688, metadata !119, metadata !"diag_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!188 = metadata !{i32 786688, metadata !119, metadata !"up_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!189 = metadata !{i32 42, i32 3, metadata !122, metadata !170}
!190 = metadata !{i32 786688, metadata !119, metadata !"left_orig", metadata !6, i32 10, metadata !9, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!191 = metadata !{i32 43, i32 3, metadata !122, metadata !170}
!192 = metadata !{i32 46, i32 3, metadata !122, metadata !170}
!193 = metadata !{i32 47, i32 3, metadata !122, metadata !170}
!194 = metadata !{i32 786688, metadata !119, metadata !"prev_score_out", metadata !6, i32 11, metadata !18, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!195 = metadata !{i32 55, i32 4, metadata !135, metadata !170}
!196 = metadata !{i32 786688, metadata !119, metadata !"diag_score", metadata !6, i32 9, metadata !18, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!197 = metadata !{i32 50, i32 3, metadata !122, metadata !170}
!198 = metadata !{i32 59, i32 4, metadata !126, metadata !170}
!199 = metadata !{i32 786688, metadata !119, metadata !"left_score", metadata !6, i32 9, metadata !18, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!200 = metadata !{i32 786688, metadata !119, metadata !"up_score", metadata !6, i32 9, metadata !18, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!201 = metadata !{i32 51, i32 3, metadata !122, metadata !170}
!202 = metadata !{i32 54, i32 3, metadata !122, metadata !170}
!203 = metadata !{i32 58, i32 8, metadata !122, metadata !170}
!204 = metadata !{i32 63, i32 4, metadata !154, metadata !170}
!205 = metadata !{i32 64, i32 4, metadata !154, metadata !170}
!206 = metadata !{i32 66, i32 3, metadata !122, metadata !170}
!207 = metadata !{i32 67, i32 3, metadata !122, metadata !170}
!208 = metadata !{i32 68, i32 2, metadata !122, metadata !170}
!209 = metadata !{i32 22, i32 49, metadata !123, metadata !170}
!210 = metadata !{i32 786688, metadata !119, metadata !"j", metadata !6, i32 6, metadata !12, i32 0, metadata !170} ; [ DW_TAG_auto_variable ]
!211 = metadata !{i32 786688, metadata !96, metadata !"score_out2", metadata !6, i32 86, metadata !18, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!212 = metadata !{i32 70, i32 2, metadata !119, metadata !170}
!213 = metadata !{i32 786688, metadata !96, metadata !"orig_out2", metadata !6, i32 85, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!214 = metadata !{i32 107, i32 3, metadata !110, null}
!215 = metadata !{i32 109, i32 4, metadata !216, null}
!216 = metadata !{i32 786443, metadata !110, i32 107, i32 31, metadata !6, i32 10} ; [ DW_TAG_lexical_block ]
!217 = metadata !{i32 110, i32 4, metadata !216, null}
!218 = metadata !{i32 113, i32 2, metadata !110, null}
!219 = metadata !{i32 91, i32 60, metadata !108, null}
!220 = metadata !{i32 786688, metadata !96, metadata !"i", metadata !6, i32 76, metadata !36, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!221 = metadata !{i32 115, i32 2, metadata !96, null}
