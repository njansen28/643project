; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@max_orig = common global i32 0, align 4
@max_score = common global i32 0, align 4
@p_str = private unnamed_addr constant [4 x i8] c"COL\00", align 1
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@best_fits = common global [10 x i32] zeroinitializer, align 16
@needlemanWunsch_str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00"

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define i32 @needlemanWunsch([100 x i8]* %reads, i8 signext %ref_genome, [101 x i32]* %orig_in, [101 x i32]* %orig_out, [101 x i8]* %score_in, [101 x i8]* %score_out, i32 %i) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([100 x i8]* %reads) nounwind, !map !19
  call void (...)* @_ssdm_op_SpecBitsMap(i8 %ref_genome) nounwind, !map !25
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i32]* %orig_in) nounwind, !map !31
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i32]* %orig_out) nounwind, !map !37
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i8]* %score_in) nounwind, !map !41
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i8]* %score_out) nounwind, !map !45
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %i) nounwind, !map !49
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !53
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch_str) nounwind
  %i_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i) nounwind
  %ref_genome_read = call i8 @_ssdm_op_Read.ap_auto.i8(i8 %ref_genome) nounwind
  %tmp = icmp eq i32 %i_read, 1
  br i1 %tmp, label %1, label %._crit_edge

; <label>:1                                       ; preds = %0
  store i32 0, i32* @max_orig, align 4
  store i32 -100, i32* @max_score, align 4
  br label %._crit_edge

._crit_edge:                                      ; preds = %1, %0
  br label %2

; <label>:2                                       ; preds = %9, %._crit_edge
  %j = phi i7 [ 1, %._crit_edge ], [ %j_1, %9 ]
  %exitcond = icmp eq i7 %j, -27
  br i1 %exitcond, label %10, label %3

; <label>:3                                       ; preds = %2
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str) nounwind
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind
  %tmp_3 = add i7 %j, -1
  %tmp_4 = zext i7 %tmp_3 to i64
  %score_in_addr = getelementptr [101 x i8]* %score_in, i64 0, i64 %tmp_4
  %score_in_load = load i8* %score_in_addr, align 1
  %diag_cast = sext i8 %score_in_load to i9
  %tmp_5 = zext i7 %j to i64
  %score_in_addr_1 = getelementptr [101 x i8]* %score_in, i64 0, i64 %tmp_5
  %score_in_load_1 = load i8* %score_in_addr_1, align 1
  %up_cast = sext i8 %score_in_load_1 to i9
  %score_out_addr_1 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_4
  %score_out_load_1 = load i8* %score_out_addr_1, align 1
  %left_cast = sext i8 %score_out_load_1 to i9
  %reads_addr = getelementptr [100 x i8]* %reads, i64 0, i64 %tmp_4
  %reads_load = load i8* %reads_addr, align 1
  %tmp_6 = icmp eq i8 %reads_load, %ref_genome_read
  %diag_score_0_v_cast_cast = select i1 %tmp_6, i9 1, i9 -1
  %diag_score = add i9 %diag_cast, %diag_score_0_v_cast_cast
  %left_score = add i9 %left_cast, -1
  %up_score = add i9 %up_cast, -1
  %tmp_7 = icmp slt i9 %diag_score, %left_score
  %tmp_8 = icmp slt i9 %diag_score, %up_score
  %or_cond = or i1 %tmp_7, %tmp_8
  br i1 %or_cond, label %5, label %4

; <label>:4                                       ; preds = %3
  %tmp_11 = trunc i9 %diag_score to i8
  %score_out_addr_2 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_5
  store i8 %tmp_11, i8* %score_out_addr_2, align 1
  %orig_in_addr = getelementptr [101 x i32]* %orig_in, i64 0, i64 %tmp_4
  %orig_in_load = load i32* %orig_in_addr, align 4
  %orig_out_addr_1 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_5
  store i32 %orig_in_load, i32* %orig_out_addr_1, align 4
  br label %9

; <label>:5                                       ; preds = %3
  %tmp_9 = icmp slt i9 %left_score, %diag_score
  %tmp_s = icmp slt i9 %left_score, %up_score
  %or_cond1 = or i1 %tmp_9, %tmp_s
  br i1 %or_cond1, label %7, label %6

; <label>:6                                       ; preds = %5
  %tmp_13 = trunc i9 %left_score to i8
  %score_out_addr_4 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_5
  store i8 %tmp_13, i8* %score_out_addr_4, align 1
  %orig_out_addr_3 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_4
  %orig_out_load_1 = load i32* %orig_out_addr_3, align 4
  %orig_out_addr_4 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_5
  store i32 %orig_out_load_1, i32* %orig_out_addr_4, align 4
  br label %8

; <label>:7                                       ; preds = %5
  %tmp_12 = trunc i9 %up_score to i8
  %score_out_addr_3 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_5
  store i8 %tmp_12, i8* %score_out_addr_3, align 1
  %orig_in_addr_1 = getelementptr [101 x i32]* %orig_in, i64 0, i64 %tmp_5
  %orig_in_load_1 = load i32* %orig_in_addr_1, align 4
  %orig_out_addr_2 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_5
  store i32 %orig_in_load_1, i32* %orig_out_addr_2, align 4
  br label %8

; <label>:8                                       ; preds = %7, %6
  br label %9

; <label>:9                                       ; preds = %8, %4
  %empty_2 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str, i32 %tmp_10) nounwind
  %j_1 = add i7 %j, 1
  br label %2

; <label>:10                                      ; preds = %2
  %score_out_addr = getelementptr [101 x i8]* %score_out, i64 0, i64 100
  %score_out_load = load i8* %score_out_addr, align 1
  %tmp_1 = sext i8 %score_out_load to i32
  %max_score_load = load i32* @max_score, align 4
  %tmp_2 = icmp sgt i32 %tmp_1, %max_score_load
  br i1 %tmp_2, label %11, label %._crit_edge2

; <label>:11                                      ; preds = %10
  store i32 %tmp_1, i32* @max_score, align 4
  %orig_out_addr = getelementptr [101 x i32]* %orig_out, i64 0, i64 100
  %orig_out_load = load i32* %orig_out_addr, align 4
  store i32 %orig_out_load, i32* @max_orig, align 4
  br label %._crit_edge2

._crit_edge2:                                     ; preds = %11, %10
  %max_orig_load = load i32* @max_orig, align 4
  ret i32 %max_orig_load
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak i8 @_ssdm_op_Read.ap_auto.i8(i8) {
entry:
  ret i8 %0
}

define weak i32 @_ssdm_op_Read.ap_auto.i32(i32) {
entry:
  ret i32 %0
}

declare i8 @_ssdm_op_PartSelect.i8.i9.i32.i32(i9, i32, i32) nounwind readnone

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0, !7, !12}

!0 = metadata !{metadata !1, i32* @max_orig}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 31, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"max_orig", metadata !5, metadata !"unsigned int", i32 0, i32 31}
!5 = metadata !{metadata !6}
!6 = metadata !{i32 0, i32 0, i32 1}
!7 = metadata !{metadata !8, i32* @max_score}
!8 = metadata !{metadata !9}
!9 = metadata !{i32 0, i32 31, metadata !10}
!10 = metadata !{metadata !11}
!11 = metadata !{metadata !"max_score", metadata !5, metadata !"int", i32 0, i32 31}
!12 = metadata !{metadata !13, [10 x i32]* @best_fits}
!13 = metadata !{metadata !14}
!14 = metadata !{i32 0, i32 31, metadata !15}
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !"best_fits", metadata !17, metadata !"unsigned int", i32 0, i32 31}
!17 = metadata !{metadata !18}
!18 = metadata !{i32 0, i32 9, i32 1}
!19 = metadata !{metadata !20}
!20 = metadata !{i32 0, i32 7, metadata !21}
!21 = metadata !{metadata !22}
!22 = metadata !{metadata !"reads", metadata !23, metadata !"char", i32 0, i32 7}
!23 = metadata !{metadata !24}
!24 = metadata !{i32 0, i32 99, i32 1}
!25 = metadata !{metadata !26}
!26 = metadata !{i32 0, i32 7, metadata !27}
!27 = metadata !{metadata !28}
!28 = metadata !{metadata !"ref_genome", metadata !29, metadata !"char", i32 0, i32 7}
!29 = metadata !{metadata !30}
!30 = metadata !{i32 0, i32 0, i32 0}
!31 = metadata !{metadata !32}
!32 = metadata !{i32 0, i32 31, metadata !33}
!33 = metadata !{metadata !34}
!34 = metadata !{metadata !"orig_in", metadata !35, metadata !"unsigned int", i32 0, i32 31}
!35 = metadata !{metadata !36}
!36 = metadata !{i32 0, i32 100, i32 1}
!37 = metadata !{metadata !38}
!38 = metadata !{i32 0, i32 31, metadata !39}
!39 = metadata !{metadata !40}
!40 = metadata !{metadata !"orig_out", metadata !35, metadata !"unsigned int", i32 0, i32 31}
!41 = metadata !{metadata !42}
!42 = metadata !{i32 0, i32 7, metadata !43}
!43 = metadata !{metadata !44}
!44 = metadata !{metadata !"score_in", metadata !35, metadata !"char", i32 0, i32 7}
!45 = metadata !{metadata !46}
!46 = metadata !{i32 0, i32 7, metadata !47}
!47 = metadata !{metadata !48}
!48 = metadata !{metadata !"score_out", metadata !35, metadata !"char", i32 0, i32 7}
!49 = metadata !{metadata !50}
!50 = metadata !{i32 0, i32 31, metadata !51}
!51 = metadata !{metadata !52}
!52 = metadata !{metadata !"i", metadata !29, metadata !"unsigned int", i32 0, i32 31}
!53 = metadata !{metadata !54}
!54 = metadata !{i32 0, i32 31, metadata !55}
!55 = metadata !{metadata !56}
!56 = metadata !{metadata !"return", metadata !57, metadata !"unsigned int", i32 0, i32 31}
!57 = metadata !{metadata !58}
!58 = metadata !{i32 0, i32 1, i32 0}
