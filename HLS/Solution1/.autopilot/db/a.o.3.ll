; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@max_orig = common global i32 0, align 4          ; [#uses=3 type=i32*]
@max_score = common global i32 0, align 4         ; [#uses=3 type=i32*]
@p_str = private unnamed_addr constant [4 x i8] c"COL\00", align 1 ; [#uses=3 type=[4 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@best_fits = common global [10 x i32] zeroinitializer, align 16 ; [#uses=0 type=[10 x i32]*]
@needlemanWunsch_str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=1]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=13]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=8]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=0]
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
  %i_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i) nounwind ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %i_read}, i64 0, metadata !59), !dbg !70 ; [debug line = 12:113] [debug variable = i]
  %ref_genome_read = call i8 @_ssdm_op_Read.ap_auto.i8(i8 %ref_genome) nounwind ; [#uses=1 type=i8]
  call void @llvm.dbg.value(metadata !{i8 %ref_genome_read}, i64 0, metadata !71), !dbg !72 ; [debug line = 11:75] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{[100 x i8]* %reads}, i64 0, metadata !73), !dbg !77 ; [debug line = 11:35] [debug variable = reads]
  call void @llvm.dbg.value(metadata !{i8 %ref_genome}, i64 0, metadata !71), !dbg !72 ; [debug line = 11:75] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{[101 x i32]* %orig_in}, i64 0, metadata !78), !dbg !82 ; [debug line = 11:100] [debug variable = orig_in]
  call void @llvm.dbg.value(metadata !{[101 x i32]* %orig_out}, i64 0, metadata !83), !dbg !84 ; [debug line = 11:152] [debug variable = orig_out]
  call void @llvm.dbg.value(metadata !{[101 x i8]* %score_in}, i64 0, metadata !85), !dbg !87 ; [debug line = 12:14] [debug variable = score_in]
  call void @llvm.dbg.value(metadata !{[101 x i8]* %score_out}, i64 0, metadata !88), !dbg !89 ; [debug line = 12:59] [debug variable = score_out]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !59), !dbg !70 ; [debug line = 12:113] [debug variable = i]
  %tmp = icmp eq i32 %i_read, 1, !dbg !90         ; [#uses=1 type=i1] [debug line = 27:2]
  br i1 %tmp, label %1, label %._crit_edge, !dbg !90 ; [debug line = 27:2]

; <label>:1                                       ; preds = %0
  store i32 0, i32* @max_orig, align 4, !dbg !92  ; [debug line = 29:3]
  store i32 -100, i32* @max_score, align 4, !dbg !94 ; [debug line = 30:3]
  br label %._crit_edge, !dbg !95                 ; [debug line = 31:2]

._crit_edge:                                      ; preds = %1, %0
  br label %2, !dbg !96                           ; [debug line = 37:12]

; <label>:2                                       ; preds = %9, %._crit_edge
  %j = phi i7 [ 1, %._crit_edge ], [ %j_1, %9 ]   ; [#uses=4 type=i7]
  %exitcond = icmp eq i7 %j, -27, !dbg !96        ; [#uses=1 type=i1] [debug line = 37:12]
  br i1 %exitcond, label %10, label %3, !dbg !96  ; [debug line = 37:12]

; <label>:3                                       ; preds = %2
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str) nounwind, !dbg !98 ; [debug line = 37:55]
  %tmp_10 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str) nounwind, !dbg !98 ; [#uses=1 type=i32] [debug line = 37:55]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !100 ; [debug line = 38:1]
  %tmp_3 = add i7 %j, -1, !dbg !101               ; [#uses=1 type=i7] [debug line = 39:3]
  %tmp_4 = zext i7 %tmp_3 to i64, !dbg !101       ; [#uses=5 type=i64] [debug line = 39:3]
  %score_in_addr = getelementptr [101 x i8]* %score_in, i64 0, i64 %tmp_4, !dbg !101 ; [#uses=1 type=i8*] [debug line = 39:3]
  %score_in_load = load i8* %score_in_addr, align 1, !dbg !101 ; [#uses=1 type=i8] [debug line = 39:3]
  %diag_cast = sext i8 %score_in_load to i9, !dbg !101 ; [#uses=1 type=i9] [debug line = 39:3]
  %tmp_5 = zext i7 %j to i64, !dbg !102           ; [#uses=8 type=i64] [debug line = 40:3]
  %score_in_addr_1 = getelementptr [101 x i8]* %score_in, i64 0, i64 %tmp_5, !dbg !102 ; [#uses=1 type=i8*] [debug line = 40:3]
  %score_in_load_1 = load i8* %score_in_addr_1, align 1, !dbg !102 ; [#uses=1 type=i8] [debug line = 40:3]
  %up_cast = sext i8 %score_in_load_1 to i9, !dbg !102 ; [#uses=1 type=i9] [debug line = 40:3]
  %score_out_addr_1 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_4, !dbg !103 ; [#uses=1 type=i8*] [debug line = 41:3]
  %score_out_load_1 = load i8* %score_out_addr_1, align 1, !dbg !103 ; [#uses=1 type=i8] [debug line = 41:3]
  %left_cast = sext i8 %score_out_load_1 to i9, !dbg !103 ; [#uses=1 type=i9] [debug line = 41:3]
  %reads_addr = getelementptr [100 x i8]* %reads, i64 0, i64 %tmp_4, !dbg !104 ; [#uses=1 type=i8*] [debug line = 44:3]
  %reads_load = load i8* %reads_addr, align 1, !dbg !104 ; [#uses=1 type=i8] [debug line = 44:3]
  %tmp_6 = icmp eq i8 %reads_load, %ref_genome_read, !dbg !104 ; [#uses=1 type=i1] [debug line = 44:3]
  %diag_score_0_v_cast_cast = select i1 %tmp_6, i9 1, i9 -1, !dbg !105 ; [#uses=1 type=i9] [debug line = 45:3]
  %diag_score = add i9 %diag_cast, %diag_score_0_v_cast_cast, !dbg !105 ; [#uses=4 type=i9] [debug line = 45:3]
  call void @llvm.dbg.value(metadata !{i9 %diag_score}, i64 0, metadata !106), !dbg !105 ; [debug line = 45:3] [debug variable = diag_score]
  %left_score = add i9 %left_cast, -1, !dbg !108  ; [#uses=4 type=i9] [debug line = 48:3]
  call void @llvm.dbg.value(metadata !{i9 %left_score}, i64 0, metadata !109), !dbg !108 ; [debug line = 48:3] [debug variable = left_score]
  %up_score = add i9 %up_cast, -1, !dbg !110      ; [#uses=3 type=i9] [debug line = 49:3]
  call void @llvm.dbg.value(metadata !{i9 %up_score}, i64 0, metadata !111), !dbg !110 ; [debug line = 49:3] [debug variable = up_score]
  %tmp_7 = icmp slt i9 %diag_score, %left_score, !dbg !112 ; [#uses=1 type=i1] [debug line = 52:3]
  %tmp_8 = icmp slt i9 %diag_score, %up_score, !dbg !112 ; [#uses=1 type=i1] [debug line = 52:3]
  %or_cond = or i1 %tmp_7, %tmp_8, !dbg !112      ; [#uses=1 type=i1] [debug line = 52:3]
  br i1 %or_cond, label %5, label %4, !dbg !112   ; [debug line = 52:3]

; <label>:4                                       ; preds = %3
  %tmp_11 = trunc i9 %diag_score to i8, !dbg !113 ; [#uses=1 type=i8] [debug line = 53:4]
  %score_out_addr_2 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_5, !dbg !113 ; [#uses=1 type=i8*] [debug line = 53:4]
  store i8 %tmp_11, i8* %score_out_addr_2, align 1, !dbg !113 ; [debug line = 53:4]
  %orig_in_addr = getelementptr [101 x i32]* %orig_in, i64 0, i64 %tmp_4, !dbg !115 ; [#uses=1 type=i32*] [debug line = 54:4]
  %orig_in_load = load i32* %orig_in_addr, align 4, !dbg !115 ; [#uses=1 type=i32] [debug line = 54:4]
  %orig_out_addr_1 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_5, !dbg !115 ; [#uses=1 type=i32*] [debug line = 54:4]
  store i32 %orig_in_load, i32* %orig_out_addr_1, align 4, !dbg !115 ; [debug line = 54:4]
  br label %9, !dbg !116                          ; [debug line = 55:3]

; <label>:5                                       ; preds = %3
  %tmp_9 = icmp slt i9 %left_score, %diag_score, !dbg !117 ; [#uses=1 type=i1] [debug line = 56:8]
  %tmp_s = icmp slt i9 %left_score, %up_score, !dbg !117 ; [#uses=1 type=i1] [debug line = 56:8]
  %or_cond1 = or i1 %tmp_9, %tmp_s, !dbg !117     ; [#uses=1 type=i1] [debug line = 56:8]
  br i1 %or_cond1, label %7, label %6, !dbg !117  ; [debug line = 56:8]

; <label>:6                                       ; preds = %5
  %tmp_13 = trunc i9 %left_score to i8, !dbg !118 ; [#uses=1 type=i8] [debug line = 57:4]
  %score_out_addr_4 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_5, !dbg !118 ; [#uses=1 type=i8*] [debug line = 57:4]
  store i8 %tmp_13, i8* %score_out_addr_4, align 1, !dbg !118 ; [debug line = 57:4]
  %orig_out_addr_3 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_4, !dbg !120 ; [#uses=1 type=i32*] [debug line = 58:4]
  %orig_out_load_1 = load i32* %orig_out_addr_3, align 4, !dbg !120 ; [#uses=1 type=i32] [debug line = 58:4]
  %orig_out_addr_4 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_5, !dbg !120 ; [#uses=1 type=i32*] [debug line = 58:4]
  store i32 %orig_out_load_1, i32* %orig_out_addr_4, align 4, !dbg !120 ; [debug line = 58:4]
  br label %8, !dbg !121                          ; [debug line = 59:3]

; <label>:7                                       ; preds = %5
  %tmp_12 = trunc i9 %up_score to i8, !dbg !122   ; [#uses=1 type=i8] [debug line = 61:4]
  %score_out_addr_3 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp_5, !dbg !122 ; [#uses=1 type=i8*] [debug line = 61:4]
  store i8 %tmp_12, i8* %score_out_addr_3, align 1, !dbg !122 ; [debug line = 61:4]
  %orig_in_addr_1 = getelementptr [101 x i32]* %orig_in, i64 0, i64 %tmp_5, !dbg !124 ; [#uses=1 type=i32*] [debug line = 62:4]
  %orig_in_load_1 = load i32* %orig_in_addr_1, align 4, !dbg !124 ; [#uses=1 type=i32] [debug line = 62:4]
  %orig_out_addr_2 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp_5, !dbg !124 ; [#uses=1 type=i32*] [debug line = 62:4]
  store i32 %orig_in_load_1, i32* %orig_out_addr_2, align 4, !dbg !124 ; [debug line = 62:4]
  br label %8

; <label>:8                                       ; preds = %7, %6
  br label %9

; <label>:9                                       ; preds = %8, %4
  %empty_2 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str, i32 %tmp_10) nounwind, !dbg !125 ; [#uses=0 type=i32] [debug line = 64:2]
  %j_1 = add i7 %j, 1, !dbg !126                  ; [#uses=1 type=i7] [debug line = 37:49]
  call void @llvm.dbg.value(metadata !{i7 %j_1}, i64 0, metadata !127), !dbg !126 ; [debug line = 37:49] [debug variable = j]
  br label %2, !dbg !126                          ; [debug line = 37:49]

; <label>:10                                      ; preds = %2
  %score_out_addr = getelementptr [101 x i8]* %score_out, i64 0, i64 100, !dbg !128 ; [#uses=1 type=i8*] [debug line = 67:2]
  %score_out_load = load i8* %score_out_addr, align 1, !dbg !128 ; [#uses=1 type=i8] [debug line = 67:2]
  %tmp_1 = sext i8 %score_out_load to i32, !dbg !128 ; [#uses=2 type=i32] [debug line = 67:2]
  %max_score_load = load i32* @max_score, align 4, !dbg !128 ; [#uses=1 type=i32] [debug line = 67:2]
  %tmp_2 = icmp sgt i32 %tmp_1, %max_score_load, !dbg !128 ; [#uses=1 type=i1] [debug line = 67:2]
  br i1 %tmp_2, label %11, label %._crit_edge2, !dbg !128 ; [debug line = 67:2]

; <label>:11                                      ; preds = %10
  store i32 %tmp_1, i32* @max_score, align 4, !dbg !129 ; [debug line = 69:3]
  %orig_out_addr = getelementptr [101 x i32]* %orig_out, i64 0, i64 100, !dbg !131 ; [#uses=1 type=i32*] [debug line = 70:3]
  %orig_out_load = load i32* %orig_out_addr, align 4, !dbg !131 ; [#uses=1 type=i32] [debug line = 70:3]
  store i32 %orig_out_load, i32* @max_orig, align 4, !dbg !131 ; [debug line = 70:3]
  br label %._crit_edge2, !dbg !132               ; [debug line = 72:2]

._crit_edge2:                                     ; preds = %11, %10
  %max_orig_load = load i32* @max_orig, align 4, !dbg !133 ; [#uses=1 type=i32] [debug line = 73:2]
  ret i32 %max_orig_load, !dbg !133               ; [debug line = 73:2]
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i8 @_ssdm_op_Read.ap_auto.i8(i8) {
entry:
  ret i8 %0
}

; [#uses=1]
define weak i32 @_ssdm_op_Read.ap_auto.i32(i32) {
entry:
  ret i32 %0
}

; [#uses=0]
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
!59 = metadata !{i32 786689, metadata !60, metadata !"i", metadata !61, i32 117440524, metadata !64, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!60 = metadata !{i32 786478, i32 0, metadata !61, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !61, i32 11, metadata !62, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !68, i32 12} ; [ DW_TAG_subprogram ]
!61 = metadata !{i32 786473, metadata !"S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!62 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !63, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!63 = metadata !{metadata !64, metadata !65, metadata !66, metadata !67, metadata !67, metadata !65, metadata !65, metadata !64}
!64 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!65 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !66} ; [ DW_TAG_pointer_type ]
!66 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!67 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !64} ; [ DW_TAG_pointer_type ]
!68 = metadata !{metadata !69}
!69 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!70 = metadata !{i32 12, i32 113, metadata !60, null}
!71 = metadata !{i32 786689, metadata !60, metadata !"ref_genome", metadata !61, i32 33554443, metadata !66, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!72 = metadata !{i32 11, i32 75, metadata !60, null}
!73 = metadata !{i32 786689, metadata !60, metadata !"reads", null, i32 11, metadata !74, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!74 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !66, metadata !75, i32 0, i32 0} ; [ DW_TAG_array_type ]
!75 = metadata !{metadata !76}
!76 = metadata !{i32 786465, i64 0, i64 99}       ; [ DW_TAG_subrange_type ]
!77 = metadata !{i32 11, i32 35, metadata !60, null}
!78 = metadata !{i32 786689, metadata !60, metadata !"orig_in", null, i32 11, metadata !79, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!79 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3232, i64 32, i32 0, i32 0, metadata !64, metadata !80, i32 0, i32 0} ; [ DW_TAG_array_type ]
!80 = metadata !{metadata !81}
!81 = metadata !{i32 786465, i64 0, i64 100}      ; [ DW_TAG_subrange_type ]
!82 = metadata !{i32 11, i32 100, metadata !60, null}
!83 = metadata !{i32 786689, metadata !60, metadata !"orig_out", null, i32 11, metadata !79, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!84 = metadata !{i32 11, i32 152, metadata !60, null}
!85 = metadata !{i32 786689, metadata !60, metadata !"score_in", null, i32 12, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!86 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 808, i64 8, i32 0, i32 0, metadata !66, metadata !80, i32 0, i32 0} ; [ DW_TAG_array_type ]
!87 = metadata !{i32 12, i32 14, metadata !60, null}
!88 = metadata !{i32 786689, metadata !60, metadata !"score_out", null, i32 12, metadata !86, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!89 = metadata !{i32 12, i32 59, metadata !60, null}
!90 = metadata !{i32 27, i32 2, metadata !91, null}
!91 = metadata !{i32 786443, metadata !60, i32 12, i32 116, metadata !61, i32 0} ; [ DW_TAG_lexical_block ]
!92 = metadata !{i32 29, i32 3, metadata !93, null}
!93 = metadata !{i32 786443, metadata !91, i32 27, i32 14, metadata !61, i32 1} ; [ DW_TAG_lexical_block ]
!94 = metadata !{i32 30, i32 3, metadata !93, null}
!95 = metadata !{i32 31, i32 2, metadata !93, null}
!96 = metadata !{i32 37, i32 12, metadata !97, null}
!97 = metadata !{i32 786443, metadata !91, i32 37, i32 7, metadata !61, i32 2} ; [ DW_TAG_lexical_block ]
!98 = metadata !{i32 37, i32 55, metadata !99, null}
!99 = metadata !{i32 786443, metadata !97, i32 37, i32 54, metadata !61, i32 3} ; [ DW_TAG_lexical_block ]
!100 = metadata !{i32 38, i32 1, metadata !99, null}
!101 = metadata !{i32 39, i32 3, metadata !99, null}
!102 = metadata !{i32 40, i32 3, metadata !99, null}
!103 = metadata !{i32 41, i32 3, metadata !99, null}
!104 = metadata !{i32 44, i32 3, metadata !99, null}
!105 = metadata !{i32 45, i32 3, metadata !99, null}
!106 = metadata !{i32 786688, metadata !91, metadata !"diag_score", metadata !61, i32 16, metadata !107, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!107 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!108 = metadata !{i32 48, i32 3, metadata !99, null}
!109 = metadata !{i32 786688, metadata !91, metadata !"left_score", metadata !61, i32 16, metadata !107, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!110 = metadata !{i32 49, i32 3, metadata !99, null}
!111 = metadata !{i32 786688, metadata !91, metadata !"up_score", metadata !61, i32 16, metadata !107, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!112 = metadata !{i32 52, i32 3, metadata !99, null}
!113 = metadata !{i32 53, i32 4, metadata !114, null}
!114 = metadata !{i32 786443, metadata !99, i32 52, i32 59, metadata !61, i32 4} ; [ DW_TAG_lexical_block ]
!115 = metadata !{i32 54, i32 4, metadata !114, null}
!116 = metadata !{i32 55, i32 3, metadata !114, null}
!117 = metadata !{i32 56, i32 8, metadata !99, null}
!118 = metadata !{i32 57, i32 4, metadata !119, null}
!119 = metadata !{i32 786443, metadata !99, i32 56, i32 64, metadata !61, i32 5} ; [ DW_TAG_lexical_block ]
!120 = metadata !{i32 58, i32 4, metadata !119, null}
!121 = metadata !{i32 59, i32 3, metadata !119, null}
!122 = metadata !{i32 61, i32 4, metadata !123, null}
!123 = metadata !{i32 786443, metadata !99, i32 60, i32 8, metadata !61, i32 6} ; [ DW_TAG_lexical_block ]
!124 = metadata !{i32 62, i32 4, metadata !123, null}
!125 = metadata !{i32 64, i32 2, metadata !99, null}
!126 = metadata !{i32 37, i32 49, metadata !97, null}
!127 = metadata !{i32 786688, metadata !91, metadata !"j", metadata !61, i32 14, metadata !64, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!128 = metadata !{i32 67, i32 2, metadata !91, null}
!129 = metadata !{i32 69, i32 3, metadata !130, null}
!130 = metadata !{i32 786443, metadata !91, i32 67, i32 57, metadata !61, i32 7} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 70, i32 3, metadata !130, null}
!132 = metadata !{i32 72, i32 2, metadata !130, null}
!133 = metadata !{i32 73, i32 2, metadata !91, null}
