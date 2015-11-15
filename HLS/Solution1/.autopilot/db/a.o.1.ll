; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.g.1.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@max_orig = common global i32 0, align 4          ; [#uses=3 type=i32*]
@max_score = common global i32 0, align 4         ; [#uses=3 type=i32*]
@.str = private unnamed_addr constant [4 x i8] c"COL\00", align 1 ; [#uses=1 type=[4 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@best_fits = common global [10 x i32] zeroinitializer, align 16 ; [#uses=0 type=[10 x i32]*]
@needlemanWunsch.str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=0]
define i32 @needlemanWunsch(i8* %reads, i8 signext %ref_genome, i32* %orig_in, i32* %orig_out, i8* %score_in, i8* %score_out, i32 %i) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !48
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch.str) nounwind
  call void @llvm.dbg.value(metadata !{i8* %reads}, i64 0, metadata !54), !dbg !55 ; [debug line = 11:35] [debug variable = reads]
  call void @llvm.dbg.value(metadata !{i8 %ref_genome}, i64 0, metadata !56), !dbg !57 ; [debug line = 11:75] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{i32* %orig_in}, i64 0, metadata !58), !dbg !59 ; [debug line = 11:100] [debug variable = orig_in]
  call void @llvm.dbg.value(metadata !{i32* %orig_out}, i64 0, metadata !60), !dbg !61 ; [debug line = 11:152] [debug variable = orig_out]
  call void @llvm.dbg.value(metadata !{i8* %score_in}, i64 0, metadata !62), !dbg !63 ; [debug line = 12:14] [debug variable = score_in]
  call void @llvm.dbg.value(metadata !{i8* %score_out}, i64 0, metadata !64), !dbg !65 ; [debug line = 12:59] [debug variable = score_out]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !66), !dbg !67 ; [debug line = 12:113] [debug variable = i]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %orig_in, i32 101), !dbg !68 ; [debug line = 12:117]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %reads, i32 100), !dbg !70 ; [debug line = 12:178]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %score_out, i32 101), !dbg !71 ; [debug line = 12:212]
  call void (...)* @_ssdm_SpecArrayDimSize(i8* %score_in, i32 101), !dbg !72 ; [debug line = 12:0]
  call void (...)* @_ssdm_SpecArrayDimSize(i32* %orig_out, i32 101), !dbg !72 ; [debug line = 12:0]
  %tmp = icmp eq i32 %i, 1, !dbg !73              ; [#uses=1 type=i1] [debug line = 27:2]
  br i1 %tmp, label %1, label %._crit_edge, !dbg !73 ; [debug line = 27:2]

; <label>:1                                       ; preds = %0
  store i32 0, i32* @max_orig, align 4, !dbg !74  ; [debug line = 29:3]
  store i32 -100, i32* @max_score, align 4, !dbg !76 ; [debug line = 30:3]
  br label %._crit_edge, !dbg !77                 ; [debug line = 31:2]

._crit_edge:                                      ; preds = %1, %0
  br label %2, !dbg !78                           ; [debug line = 37:12]

; <label>:2                                       ; preds = %9, %._crit_edge
  %j = phi i32 [ 1, %._crit_edge ], [ %j.1, %9 ]  ; [#uses=4 type=i32]
  %exitcond = icmp eq i32 %j, 101, !dbg !78       ; [#uses=1 type=i1] [debug line = 37:12]
  br i1 %exitcond, label %10, label %3, !dbg !78  ; [debug line = 37:12]

; <label>:3                                       ; preds = %2
  call void (...)* @_ssdm_op_SpecLoopName(i8* getelementptr inbounds ([4 x i8]* @.str, i64 0, i64 0)), !dbg !80 ; [debug line = 37:55]
  %rbegin = call i32 (...)* @_ssdm_op_SpecRegionBegin(i8* getelementptr inbounds ([4 x i8]* @.str, i64 0, i64 0)) nounwind, !dbg !80 ; [#uses=1 type=i32] [debug line = 37:55]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, i8* getelementptr inbounds ([1 x i8]* @.str1, i64 0, i64 0)), !dbg !82 ; [debug line = 38:1]
  %tmp.3 = add i32 %j, -1, !dbg !83               ; [#uses=1 type=i32] [debug line = 39:3]
  %tmp.4 = zext i32 %tmp.3 to i64, !dbg !83       ; [#uses=5 type=i64] [debug line = 39:3]
  %score_in.addr = getelementptr inbounds i8* %score_in, i64 %tmp.4, !dbg !83 ; [#uses=1 type=i8*] [debug line = 39:3]
  %score_in.load = load i8* %score_in.addr, align 1, !dbg !83 ; [#uses=2 type=i8] [debug line = 39:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score_in.load) nounwind
  %diag = sext i8 %score_in.load to i32, !dbg !83 ; [#uses=1 type=i32] [debug line = 39:3]
  call void @llvm.dbg.value(metadata !{i32 %diag}, i64 0, metadata !84), !dbg !83 ; [debug line = 39:3] [debug variable = diag]
  %tmp.5 = zext i32 %j to i64, !dbg !85           ; [#uses=8 type=i64] [debug line = 40:3]
  %score_in.addr.1 = getelementptr inbounds i8* %score_in, i64 %tmp.5, !dbg !85 ; [#uses=1 type=i8*] [debug line = 40:3]
  %score_in.load.1 = load i8* %score_in.addr.1, align 1, !dbg !85 ; [#uses=2 type=i8] [debug line = 40:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score_in.load.1) nounwind
  %up = sext i8 %score_in.load.1 to i32, !dbg !85 ; [#uses=1 type=i32] [debug line = 40:3]
  call void @llvm.dbg.value(metadata !{i32 %up}, i64 0, metadata !86), !dbg !85 ; [debug line = 40:3] [debug variable = up]
  %score_out.addr.1 = getelementptr inbounds i8* %score_out, i64 %tmp.4, !dbg !87 ; [#uses=1 type=i8*] [debug line = 41:3]
  %score_out.load.1 = load i8* %score_out.addr.1, align 1, !dbg !87 ; [#uses=2 type=i8] [debug line = 41:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score_out.load.1) nounwind
  %left = sext i8 %score_out.load.1 to i32, !dbg !87 ; [#uses=1 type=i32] [debug line = 41:3]
  call void @llvm.dbg.value(metadata !{i32 %left}, i64 0, metadata !88), !dbg !87 ; [debug line = 41:3] [debug variable = left]
  %reads.addr = getelementptr inbounds i8* %reads, i64 %tmp.4, !dbg !89 ; [#uses=1 type=i8*] [debug line = 44:3]
  %reads.load = load i8* %reads.addr, align 1, !dbg !89 ; [#uses=2 type=i8] [debug line = 44:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %reads.load) nounwind
  %tmp.6 = icmp eq i8 %reads.load, %ref_genome, !dbg !89 ; [#uses=1 type=i1] [debug line = 44:3]
  %diag_score.0.v = select i1 %tmp.6, i32 1, i32 -1, !dbg !90 ; [#uses=1 type=i32] [debug line = 45:3]
  %diag_score = add i32 %diag_score.0.v, %diag, !dbg !90 ; [#uses=4 type=i32] [debug line = 45:3]
  call void @llvm.dbg.value(metadata !{i32 %diag_score}, i64 0, metadata !91), !dbg !90 ; [debug line = 45:3] [debug variable = diag_score]
  %left_score = add nsw i32 %left, -1, !dbg !92   ; [#uses=4 type=i32] [debug line = 48:3]
  call void @llvm.dbg.value(metadata !{i32 %left_score}, i64 0, metadata !93), !dbg !92 ; [debug line = 48:3] [debug variable = left_score]
  %up_score = add nsw i32 %up, -1, !dbg !94       ; [#uses=3 type=i32] [debug line = 49:3]
  call void @llvm.dbg.value(metadata !{i32 %up_score}, i64 0, metadata !95), !dbg !94 ; [debug line = 49:3] [debug variable = up_score]
  %tmp.7 = icmp slt i32 %diag_score, %left_score, !dbg !96 ; [#uses=1 type=i1] [debug line = 52:3]
  %tmp.8 = icmp slt i32 %diag_score, %up_score, !dbg !96 ; [#uses=1 type=i1] [debug line = 52:3]
  %or.cond = or i1 %tmp.7, %tmp.8, !dbg !96       ; [#uses=1 type=i1] [debug line = 52:3]
  br i1 %or.cond, label %5, label %4, !dbg !96    ; [debug line = 52:3]

; <label>:4                                       ; preds = %3
  %tmp.11 = trunc i32 %diag_score to i8, !dbg !97 ; [#uses=1 type=i8] [debug line = 53:4]
  %score_out.addr.2 = getelementptr inbounds i8* %score_out, i64 %tmp.5, !dbg !97 ; [#uses=1 type=i8*] [debug line = 53:4]
  store i8 %tmp.11, i8* %score_out.addr.2, align 1, !dbg !97 ; [debug line = 53:4]
  %orig_in.addr = getelementptr inbounds i32* %orig_in, i64 %tmp.4, !dbg !99 ; [#uses=1 type=i32*] [debug line = 54:4]
  %orig_in.load = load i32* %orig_in.addr, align 4, !dbg !99 ; [#uses=2 type=i32] [debug line = 54:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %orig_in.load) nounwind
  %orig_out.addr.1 = getelementptr inbounds i32* %orig_out, i64 %tmp.5, !dbg !99 ; [#uses=1 type=i32*] [debug line = 54:4]
  store i32 %orig_in.load, i32* %orig_out.addr.1, align 4, !dbg !99 ; [debug line = 54:4]
  br label %9, !dbg !100                          ; [debug line = 55:3]

; <label>:5                                       ; preds = %3
  %tmp.9 = icmp slt i32 %left_score, %diag_score, !dbg !101 ; [#uses=1 type=i1] [debug line = 56:8]
  %tmp.10 = icmp slt i32 %left_score, %up_score, !dbg !101 ; [#uses=1 type=i1] [debug line = 56:8]
  %or.cond1 = or i1 %tmp.9, %tmp.10, !dbg !101    ; [#uses=1 type=i1] [debug line = 56:8]
  br i1 %or.cond1, label %7, label %6, !dbg !101  ; [debug line = 56:8]

; <label>:6                                       ; preds = %5
  %tmp.13 = trunc i32 %left_score to i8, !dbg !102 ; [#uses=1 type=i8] [debug line = 57:4]
  %score_out.addr.4 = getelementptr inbounds i8* %score_out, i64 %tmp.5, !dbg !102 ; [#uses=1 type=i8*] [debug line = 57:4]
  store i8 %tmp.13, i8* %score_out.addr.4, align 1, !dbg !102 ; [debug line = 57:4]
  %orig_out.addr.3 = getelementptr inbounds i32* %orig_out, i64 %tmp.4, !dbg !104 ; [#uses=1 type=i32*] [debug line = 58:4]
  %orig_out.load.1 = load i32* %orig_out.addr.3, align 4, !dbg !104 ; [#uses=2 type=i32] [debug line = 58:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %orig_out.load.1) nounwind
  %orig_out.addr.4 = getelementptr inbounds i32* %orig_out, i64 %tmp.5, !dbg !104 ; [#uses=1 type=i32*] [debug line = 58:4]
  store i32 %orig_out.load.1, i32* %orig_out.addr.4, align 4, !dbg !104 ; [debug line = 58:4]
  br label %8, !dbg !105                          ; [debug line = 59:3]

; <label>:7                                       ; preds = %5
  %tmp.12 = trunc i32 %up_score to i8, !dbg !106  ; [#uses=1 type=i8] [debug line = 61:4]
  %score_out.addr.3 = getelementptr inbounds i8* %score_out, i64 %tmp.5, !dbg !106 ; [#uses=1 type=i8*] [debug line = 61:4]
  store i8 %tmp.12, i8* %score_out.addr.3, align 1, !dbg !106 ; [debug line = 61:4]
  %orig_in.addr.1 = getelementptr inbounds i32* %orig_in, i64 %tmp.5, !dbg !108 ; [#uses=1 type=i32*] [debug line = 62:4]
  %orig_in.load.1 = load i32* %orig_in.addr.1, align 4, !dbg !108 ; [#uses=2 type=i32] [debug line = 62:4]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %orig_in.load.1) nounwind
  %orig_out.addr.2 = getelementptr inbounds i32* %orig_out, i64 %tmp.5, !dbg !108 ; [#uses=1 type=i32*] [debug line = 62:4]
  store i32 %orig_in.load.1, i32* %orig_out.addr.2, align 4, !dbg !108 ; [debug line = 62:4]
  br label %8

; <label>:8                                       ; preds = %7, %6
  br label %9

; <label>:9                                       ; preds = %8, %4
  %rend = call i32 (...)* @_ssdm_op_SpecRegionEnd(i8* getelementptr inbounds ([4 x i8]* @.str, i64 0, i64 0), i32 %rbegin) nounwind, !dbg !109 ; [#uses=0 type=i32] [debug line = 64:2]
  %j.1 = add i32 %j, 1, !dbg !110                 ; [#uses=1 type=i32] [debug line = 37:49]
  call void @llvm.dbg.value(metadata !{i32 %j.1}, i64 0, metadata !111), !dbg !110 ; [debug line = 37:49] [debug variable = j]
  br label %2, !dbg !110                          ; [debug line = 37:49]

; <label>:10                                      ; preds = %2
  %score_out.addr = getelementptr inbounds i8* %score_out, i64 100, !dbg !112 ; [#uses=1 type=i8*] [debug line = 67:2]
  %score_out.load = load i8* %score_out.addr, align 1, !dbg !112 ; [#uses=3 type=i8] [debug line = 67:2]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score_out.load) nounwind
  %tmp.1 = sext i8 %score_out.load to i32, !dbg !112 ; [#uses=2 type=i32] [debug line = 67:2]
  %max_score.load = load i32* @max_score, align 4, !dbg !112 ; [#uses=1 type=i32] [debug line = 67:2]
  %tmp.2 = icmp sgt i32 %tmp.1, %max_score.load, !dbg !112 ; [#uses=1 type=i1] [debug line = 67:2]
  br i1 %tmp.2, label %11, label %._crit_edge2, !dbg !112 ; [debug line = 67:2]

; <label>:11                                      ; preds = %10
  call void (...)* @_ssdm_SpecKeepArrayLoad(i8 %score_out.load) nounwind
  store i32 %tmp.1, i32* @max_score, align 4, !dbg !113 ; [debug line = 69:3]
  %orig_out.addr = getelementptr inbounds i32* %orig_out, i64 100, !dbg !115 ; [#uses=1 type=i32*] [debug line = 70:3]
  %orig_out.load = load i32* %orig_out.addr, align 4, !dbg !115 ; [#uses=2 type=i32] [debug line = 70:3]
  call void (...)* @_ssdm_SpecKeepArrayLoad(i32 %orig_out.load) nounwind
  store i32 %orig_out.load, i32* @max_orig, align 4, !dbg !115 ; [debug line = 70:3]
  br label %._crit_edge2, !dbg !116               ; [debug line = 72:2]

._crit_edge2:                                     ; preds = %11, %10
  %max_orig.load = load i32* @max_orig, align 4, !dbg !117 ; [#uses=1 type=i32] [debug line = 73:2]
  ret i32 %max_orig.load, !dbg !117               ; [debug line = 73:2]
}

; [#uses=5]
declare void @_ssdm_SpecArrayDimSize(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=14]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=10]
declare void @_ssdm_SpecKeepArrayLoad(...)

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionEnd(...)

!llvm.dbg.cu = !{!0}
!hls.encrypted.func = !{}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/week3.pragma.2.c", metadata !"c:/Users/Nathaniel", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, metadata !1, metadata !1, metadata !3, metadata !15} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 786478, i32 0, metadata !6, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !6, i32 11, metadata !7, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, i32 (i8*, i8, i32*, i32*, i8*, i8*, i32)* @needlemanWunsch, null, null, metadata !13, i32 12} ; [ DW_TAG_subprogram ]
!6 = metadata !{i32 786473, metadata !"S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!7 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !8, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!8 = metadata !{metadata !9, metadata !10, metadata !11, metadata !12, metadata !12, metadata !10, metadata !10, metadata !9}
!9 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!10 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !11} ; [ DW_TAG_pointer_type ]
!11 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!12 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!13 = metadata !{metadata !14}
!14 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!15 = metadata !{metadata !16}
!16 = metadata !{metadata !17, metadata !22, metadata !23, metadata !25, metadata !27, metadata !28, metadata !30, metadata !31, metadata !32, metadata !33, metadata !34, metadata !35, metadata !37}
!17 = metadata !{i32 786484, i32 0, null, metadata !"best_fits", metadata !"best_fits", metadata !"", metadata !18, i32 28, metadata !19, i32 0, i32 1, [10 x i32]* @best_fits} ; [ DW_TAG_variable ]
!18 = metadata !{i32 786473, metadata !"S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!19 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 320, i64 32, i32 0, i32 0, metadata !9, metadata !20, i32 0, i32 0} ; [ DW_TAG_array_type ]
!20 = metadata !{metadata !21}
!21 = metadata !{i32 786465, i64 0, i64 9}        ; [ DW_TAG_subrange_type ]
!22 = metadata !{i32 786484, i32 0, null, metadata !"max_orig", metadata !"max_orig", metadata !"", metadata !6, i32 8, metadata !9, i32 0, i32 1, i32* @max_orig} ; [ DW_TAG_variable ]
!23 = metadata !{i32 786484, i32 0, null, metadata !"max_score", metadata !"max_score", metadata !"", metadata !6, i32 9, metadata !24, i32 0, i32 1, i32* @max_score} ; [ DW_TAG_variable ]
!24 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!25 = metadata !{i32 786484, i32 0, null, metadata !"_daylight", metadata !"_daylight", metadata !"", metadata !26, i32 103, metadata !24, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!26 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Ctime.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!27 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !26, i32 250, metadata !24, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!28 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !29, i32 157, metadata !24, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!29 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!30 = metadata !{i32 786484, i32 0, null, metadata !"__imp__osplatform", metadata !"__imp__osplatform", metadata !"", metadata !29, i32 248, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!31 = metadata !{i32 786484, i32 0, null, metadata !"__imp__osver", metadata !"__imp__osver", metadata !"", metadata !29, i32 257, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!32 = metadata !{i32 786484, i32 0, null, metadata !"__imp__winver", metadata !"__imp__winver", metadata !"", metadata !29, i32 266, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!33 = metadata !{i32 786484, i32 0, null, metadata !"__imp__winmajor", metadata !"__imp__winmajor", metadata !"", metadata !29, i32 275, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!34 = metadata !{i32 786484, i32 0, null, metadata !"__imp__winminor", metadata !"__imp__winminor", metadata !"", metadata !29, i32 284, metadata !12, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!35 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !36, i32 53, metadata !9, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!36 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!37 = metadata !{i32 786484, i32 0, null, metadata !"nw_matrix", metadata !"nw_matrix", metadata !"", metadata !18, i32 25, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!38 = metadata !{i32 786454, null, metadata !"NW_matrix", metadata !18, i32 23, i64 0, i64 0, i64 0, i32 0, metadata !39} ; [ DW_TAG_typedef ]
!39 = metadata !{i32 786451, null, metadata !"", metadata !18, i32 20, i64 4040004064, i64 32, i32 0, i32 0, null, metadata !40, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!40 = metadata !{metadata !41, metadata !46}
!41 = metadata !{i32 786445, metadata !39, metadata !"score", metadata !18, i32 21, i64 808000808, i64 8, i64 0, i32 0, metadata !42} ; [ DW_TAG_member ]
!42 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 808000808, i64 8, i32 0, i32 0, metadata !11, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!43 = metadata !{metadata !44, metadata !45}
!44 = metadata !{i32 786465, i64 0, i64 1000000}  ; [ DW_TAG_subrange_type ]
!45 = metadata !{i32 786465, i64 0, i64 100}      ; [ DW_TAG_subrange_type ]
!46 = metadata !{i32 786445, metadata !39, metadata !"orig", metadata !18, i32 22, i64 3232003232, i64 32, i64 808000832, i32 0, metadata !47} ; [ DW_TAG_member ]
!47 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3232003232, i64 32, i32 0, i32 0, metadata !9, metadata !43, i32 0, i32 0} ; [ DW_TAG_array_type ]
!48 = metadata !{metadata !49}
!49 = metadata !{i32 0, i32 31, metadata !50}
!50 = metadata !{metadata !51}
!51 = metadata !{metadata !"return", metadata !52, metadata !"unsigned int", i32 0, i32 31}
!52 = metadata !{metadata !53}
!53 = metadata !{i32 0, i32 1, i32 0}
!54 = metadata !{i32 786689, metadata !5, metadata !"reads", metadata !6, i32 16777227, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!55 = metadata !{i32 11, i32 35, metadata !5, null}
!56 = metadata !{i32 786689, metadata !5, metadata !"ref_genome", metadata !6, i32 33554443, metadata !11, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!57 = metadata !{i32 11, i32 75, metadata !5, null}
!58 = metadata !{i32 786689, metadata !5, metadata !"orig_in", metadata !6, i32 50331659, metadata !12, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!59 = metadata !{i32 11, i32 100, metadata !5, null}
!60 = metadata !{i32 786689, metadata !5, metadata !"orig_out", metadata !6, i32 67108875, metadata !12, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!61 = metadata !{i32 11, i32 152, metadata !5, null}
!62 = metadata !{i32 786689, metadata !5, metadata !"score_in", metadata !6, i32 83886092, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!63 = metadata !{i32 12, i32 14, metadata !5, null}
!64 = metadata !{i32 786689, metadata !5, metadata !"score_out", metadata !6, i32 100663308, metadata !10, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!65 = metadata !{i32 12, i32 59, metadata !5, null}
!66 = metadata !{i32 786689, metadata !5, metadata !"i", metadata !6, i32 117440524, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!67 = metadata !{i32 12, i32 113, metadata !5, null}
!68 = metadata !{i32 12, i32 117, metadata !69, null}
!69 = metadata !{i32 786443, metadata !5, i32 12, i32 116, metadata !6, i32 0} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 12, i32 178, metadata !69, null}
!71 = metadata !{i32 12, i32 212, metadata !69, null}
!72 = metadata !{i32 12, i32 0, metadata !69, null}
!73 = metadata !{i32 27, i32 2, metadata !69, null}
!74 = metadata !{i32 29, i32 3, metadata !75, null}
!75 = metadata !{i32 786443, metadata !69, i32 27, i32 14, metadata !6, i32 1} ; [ DW_TAG_lexical_block ]
!76 = metadata !{i32 30, i32 3, metadata !75, null}
!77 = metadata !{i32 31, i32 2, metadata !75, null}
!78 = metadata !{i32 37, i32 12, metadata !79, null}
!79 = metadata !{i32 786443, metadata !69, i32 37, i32 7, metadata !6, i32 2} ; [ DW_TAG_lexical_block ]
!80 = metadata !{i32 37, i32 55, metadata !81, null}
!81 = metadata !{i32 786443, metadata !79, i32 37, i32 54, metadata !6, i32 3} ; [ DW_TAG_lexical_block ]
!82 = metadata !{i32 38, i32 1, metadata !81, null}
!83 = metadata !{i32 39, i32 3, metadata !81, null}
!84 = metadata !{i32 786688, metadata !69, metadata !"diag", metadata !6, i32 15, metadata !24, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!85 = metadata !{i32 40, i32 3, metadata !81, null}
!86 = metadata !{i32 786688, metadata !69, metadata !"up", metadata !6, i32 15, metadata !24, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!87 = metadata !{i32 41, i32 3, metadata !81, null}
!88 = metadata !{i32 786688, metadata !69, metadata !"left", metadata !6, i32 15, metadata !24, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!89 = metadata !{i32 44, i32 3, metadata !81, null}
!90 = metadata !{i32 45, i32 3, metadata !81, null}
!91 = metadata !{i32 786688, metadata !69, metadata !"diag_score", metadata !6, i32 16, metadata !24, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!92 = metadata !{i32 48, i32 3, metadata !81, null}
!93 = metadata !{i32 786688, metadata !69, metadata !"left_score", metadata !6, i32 16, metadata !24, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!94 = metadata !{i32 49, i32 3, metadata !81, null}
!95 = metadata !{i32 786688, metadata !69, metadata !"up_score", metadata !6, i32 16, metadata !24, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!96 = metadata !{i32 52, i32 3, metadata !81, null}
!97 = metadata !{i32 53, i32 4, metadata !98, null}
!98 = metadata !{i32 786443, metadata !81, i32 52, i32 59, metadata !6, i32 4} ; [ DW_TAG_lexical_block ]
!99 = metadata !{i32 54, i32 4, metadata !98, null}
!100 = metadata !{i32 55, i32 3, metadata !98, null}
!101 = metadata !{i32 56, i32 8, metadata !81, null}
!102 = metadata !{i32 57, i32 4, metadata !103, null}
!103 = metadata !{i32 786443, metadata !81, i32 56, i32 64, metadata !6, i32 5} ; [ DW_TAG_lexical_block ]
!104 = metadata !{i32 58, i32 4, metadata !103, null}
!105 = metadata !{i32 59, i32 3, metadata !103, null}
!106 = metadata !{i32 61, i32 4, metadata !107, null}
!107 = metadata !{i32 786443, metadata !81, i32 60, i32 8, metadata !6, i32 6} ; [ DW_TAG_lexical_block ]
!108 = metadata !{i32 62, i32 4, metadata !107, null}
!109 = metadata !{i32 64, i32 2, metadata !81, null}
!110 = metadata !{i32 37, i32 49, metadata !79, null}
!111 = metadata !{i32 786688, metadata !69, metadata !"j", metadata !6, i32 14, metadata !9, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!112 = metadata !{i32 67, i32 2, metadata !69, null}
!113 = metadata !{i32 69, i32 3, metadata !114, null}
!114 = metadata !{i32 786443, metadata !69, i32 67, i32 57, metadata !6, i32 7} ; [ DW_TAG_lexical_block ]
!115 = metadata !{i32 70, i32 3, metadata !114, null}
!116 = metadata !{i32 72, i32 2, metadata !114, null}
!117 = metadata !{i32 73, i32 2, metadata !69, null}
