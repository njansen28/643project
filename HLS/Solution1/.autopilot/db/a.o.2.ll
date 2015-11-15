; ModuleID = 'C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@max_orig = common global i32 0, align 4          ; [#uses=3 type=i32*]
@max_score = common global i32 0, align 4         ; [#uses=3 type=i32*]
@.str = private unnamed_addr constant [4 x i8] c"COL\00", align 1 ; [#uses=3 type=[4 x i8]*]
@.str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=1 type=[1 x i8]*]
@best_fits = common global [10 x i32] zeroinitializer, align 16 ; [#uses=0 type=[10 x i32]*]
@needlemanWunsch.str = internal unnamed_addr constant [16 x i8] c"needlemanWunsch\00" ; [#uses=1 type=[16 x i8]*]

; [#uses=1]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=11]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=8]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=0]
define i32 @needlemanWunsch([100 x i8]* %reads, i8 signext %ref_genome, [101 x i32]* %orig_in, [101 x i32]* %orig_out, [101 x i8]* %score_in, [101 x i8]* %score_out, i32 %i) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap([100 x i8]* %reads) nounwind, !map !57
  call void (...)* @_ssdm_op_SpecBitsMap(i8 %ref_genome) nounwind, !map !63
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i32]* %orig_in) nounwind, !map !69
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i32]* %orig_out) nounwind, !map !75
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i8]* %score_in) nounwind, !map !79
  call void (...)* @_ssdm_op_SpecBitsMap([101 x i8]* %score_out) nounwind, !map !83
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %i) nounwind, !map !87
  call void (...)* @_ssdm_op_SpecBitsMap(i32 0) nounwind, !map !91
  call void (...)* @_ssdm_op_SpecTopModule([16 x i8]* @needlemanWunsch.str) nounwind
  call void @llvm.dbg.value(metadata !{[100 x i8]* %reads}, i64 0, metadata !97), !dbg !107 ; [debug line = 11:35] [debug variable = reads]
  call void @llvm.dbg.value(metadata !{i8 %ref_genome}, i64 0, metadata !108), !dbg !109 ; [debug line = 11:75] [debug variable = ref_genome]
  call void @llvm.dbg.value(metadata !{[101 x i32]* %orig_in}, i64 0, metadata !110), !dbg !113 ; [debug line = 11:100] [debug variable = orig_in]
  call void @llvm.dbg.value(metadata !{[101 x i32]* %orig_out}, i64 0, metadata !114), !dbg !115 ; [debug line = 11:152] [debug variable = orig_out]
  call void @llvm.dbg.value(metadata !{[101 x i8]* %score_in}, i64 0, metadata !116), !dbg !118 ; [debug line = 12:14] [debug variable = score_in]
  call void @llvm.dbg.value(metadata !{[101 x i8]* %score_out}, i64 0, metadata !119), !dbg !120 ; [debug line = 12:59] [debug variable = score_out]
  call void @llvm.dbg.value(metadata !{i32 %i}, i64 0, metadata !121), !dbg !122 ; [debug line = 12:113] [debug variable = i]
  %tmp = icmp eq i32 %i, 1, !dbg !123             ; [#uses=1 type=i1] [debug line = 27:2]
  br i1 %tmp, label %1, label %._crit_edge, !dbg !123 ; [debug line = 27:2]

; <label>:1                                       ; preds = %0
  store i32 0, i32* @max_orig, align 4, !dbg !125 ; [debug line = 29:3]
  store i32 -100, i32* @max_score, align 4, !dbg !127 ; [debug line = 30:3]
  br label %._crit_edge, !dbg !128                ; [debug line = 31:2]

._crit_edge:                                      ; preds = %1, %0
  br label %2, !dbg !129                          ; [debug line = 37:12]

; <label>:2                                       ; preds = %10, %._crit_edge
  %j = phi i7 [ 1, %._crit_edge ], [ %j.1, %10 ]  ; [#uses=4 type=i7]
  %exitcond = icmp eq i7 %j, -27, !dbg !129       ; [#uses=1 type=i1] [debug line = 37:12]
  %3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 100, i64 100, i64 100) nounwind ; [#uses=0 type=i32]
  br i1 %exitcond, label %12, label %4, !dbg !129 ; [debug line = 37:12]

; <label>:4                                       ; preds = %2
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @.str) nounwind, !dbg !131 ; [debug line = 37:55]
  %tmp.13 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @.str) nounwind, !dbg !131 ; [#uses=1 type=i32] [debug line = 37:55]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @.str1) nounwind, !dbg !133 ; [debug line = 38:1]
  %tmp.3 = add i7 %j, -1, !dbg !134               ; [#uses=1 type=i7] [debug line = 39:3]
  %tmp.4 = zext i7 %tmp.3 to i64, !dbg !134       ; [#uses=5 type=i64] [debug line = 39:3]
  %score_in.addr = getelementptr [101 x i8]* %score_in, i64 0, i64 %tmp.4, !dbg !134 ; [#uses=1 type=i8*] [debug line = 39:3]
  %score_in.load = load i8* %score_in.addr, align 1, !dbg !134 ; [#uses=1 type=i8] [debug line = 39:3]
  %diag.cast = sext i8 %score_in.load to i9, !dbg !134 ; [#uses=1 type=i9] [debug line = 39:3]
  %tmp.5 = zext i7 %j to i64, !dbg !135           ; [#uses=8 type=i64] [debug line = 40:3]
  %score_in.addr.1 = getelementptr [101 x i8]* %score_in, i64 0, i64 %tmp.5, !dbg !135 ; [#uses=1 type=i8*] [debug line = 40:3]
  %score_in.load.1 = load i8* %score_in.addr.1, align 1, !dbg !135 ; [#uses=1 type=i8] [debug line = 40:3]
  %up.cast = sext i8 %score_in.load.1 to i9, !dbg !135 ; [#uses=1 type=i9] [debug line = 40:3]
  %score_out.addr.1 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp.4, !dbg !136 ; [#uses=1 type=i8*] [debug line = 41:3]
  %score_out.load.1 = load i8* %score_out.addr.1, align 1, !dbg !136 ; [#uses=1 type=i8] [debug line = 41:3]
  %left.cast = sext i8 %score_out.load.1 to i9, !dbg !136 ; [#uses=1 type=i9] [debug line = 41:3]
  %reads.addr = getelementptr [100 x i8]* %reads, i64 0, i64 %tmp.4, !dbg !137 ; [#uses=1 type=i8*] [debug line = 44:3]
  %reads.load = load i8* %reads.addr, align 1, !dbg !137 ; [#uses=1 type=i8] [debug line = 44:3]
  %tmp.6 = icmp eq i8 %reads.load, %ref_genome, !dbg !137 ; [#uses=1 type=i1] [debug line = 44:3]
  %diag_score.0.v.cast = select i1 %tmp.6, i9 1, i9 -1, !dbg !138 ; [#uses=1 type=i9] [debug line = 45:3]
  %diag_score = add i9 %diag.cast, %diag_score.0.v.cast, !dbg !138 ; [#uses=4 type=i9] [debug line = 45:3]
  call void @llvm.dbg.value(metadata !{i9 %diag_score}, i64 0, metadata !139), !dbg !138 ; [debug line = 45:3] [debug variable = diag_score]
  %left_score = add i9 %left.cast, -1, !dbg !140  ; [#uses=4 type=i9] [debug line = 48:3]
  call void @llvm.dbg.value(metadata !{i9 %left_score}, i64 0, metadata !141), !dbg !140 ; [debug line = 48:3] [debug variable = left_score]
  %up_score = add i9 %up.cast, -1, !dbg !142      ; [#uses=3 type=i9] [debug line = 49:3]
  call void @llvm.dbg.value(metadata !{i9 %up_score}, i64 0, metadata !143), !dbg !142 ; [debug line = 49:3] [debug variable = up_score]
  %tmp.7 = icmp slt i9 %diag_score, %left_score, !dbg !144 ; [#uses=1 type=i1] [debug line = 52:3]
  %tmp.8 = icmp slt i9 %diag_score, %up_score, !dbg !144 ; [#uses=1 type=i1] [debug line = 52:3]
  %or.cond = or i1 %tmp.7, %tmp.8, !dbg !144      ; [#uses=1 type=i1] [debug line = 52:3]
  br i1 %or.cond, label %6, label %5, !dbg !144   ; [debug line = 52:3]

; <label>:5                                       ; preds = %4
  %tmp.10 = trunc i9 %diag_score to i8, !dbg !145 ; [#uses=1 type=i8] [debug line = 53:4]
  %score_out.addr.2 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp.5, !dbg !145 ; [#uses=1 type=i8*] [debug line = 53:4]
  store i8 %tmp.10, i8* %score_out.addr.2, align 1, !dbg !145 ; [debug line = 53:4]
  %orig_in.addr = getelementptr [101 x i32]* %orig_in, i64 0, i64 %tmp.4, !dbg !147 ; [#uses=1 type=i32*] [debug line = 54:4]
  %orig_in.load = load i32* %orig_in.addr, align 4, !dbg !147 ; [#uses=1 type=i32] [debug line = 54:4]
  %orig_out.addr.1 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp.5, !dbg !147 ; [#uses=1 type=i32*] [debug line = 54:4]
  store i32 %orig_in.load, i32* %orig_out.addr.1, align 4, !dbg !147 ; [debug line = 54:4]
  br label %10, !dbg !148                         ; [debug line = 55:3]

; <label>:6                                       ; preds = %4
  %tmp.9 = icmp slt i9 %left_score, %diag_score, !dbg !149 ; [#uses=1 type=i1] [debug line = 56:8]
  %tmp. = icmp slt i9 %left_score, %up_score, !dbg !149 ; [#uses=1 type=i1] [debug line = 56:8]
  %or.cond1 = or i1 %tmp.9, %tmp., !dbg !149      ; [#uses=1 type=i1] [debug line = 56:8]
  br i1 %or.cond1, label %8, label %7, !dbg !149  ; [debug line = 56:8]

; <label>:7                                       ; preds = %6
  %tmp.12 = trunc i9 %left_score to i8, !dbg !150 ; [#uses=1 type=i8] [debug line = 57:4]
  %score_out.addr.4 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp.5, !dbg !150 ; [#uses=1 type=i8*] [debug line = 57:4]
  store i8 %tmp.12, i8* %score_out.addr.4, align 1, !dbg !150 ; [debug line = 57:4]
  %orig_out.addr.3 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp.4, !dbg !152 ; [#uses=1 type=i32*] [debug line = 58:4]
  %orig_out.load.1 = load i32* %orig_out.addr.3, align 4, !dbg !152 ; [#uses=1 type=i32] [debug line = 58:4]
  %orig_out.addr.4 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp.5, !dbg !152 ; [#uses=1 type=i32*] [debug line = 58:4]
  store i32 %orig_out.load.1, i32* %orig_out.addr.4, align 4, !dbg !152 ; [debug line = 58:4]
  br label %9, !dbg !153                          ; [debug line = 59:3]

; <label>:8                                       ; preds = %6
  %tmp.11 = trunc i9 %up_score to i8, !dbg !154   ; [#uses=1 type=i8] [debug line = 61:4]
  %score_out.addr.3 = getelementptr [101 x i8]* %score_out, i64 0, i64 %tmp.5, !dbg !154 ; [#uses=1 type=i8*] [debug line = 61:4]
  store i8 %tmp.11, i8* %score_out.addr.3, align 1, !dbg !154 ; [debug line = 61:4]
  %orig_in.addr.1 = getelementptr [101 x i32]* %orig_in, i64 0, i64 %tmp.5, !dbg !156 ; [#uses=1 type=i32*] [debug line = 62:4]
  %orig_in.load.1 = load i32* %orig_in.addr.1, align 4, !dbg !156 ; [#uses=1 type=i32] [debug line = 62:4]
  %orig_out.addr.2 = getelementptr [101 x i32]* %orig_out, i64 0, i64 %tmp.5, !dbg !156 ; [#uses=1 type=i32*] [debug line = 62:4]
  store i32 %orig_in.load.1, i32* %orig_out.addr.2, align 4, !dbg !156 ; [debug line = 62:4]
  br label %9

; <label>:9                                       ; preds = %8, %7
  br label %10

; <label>:10                                      ; preds = %9, %5
  %11 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @.str, i32 %tmp.13) nounwind, !dbg !157 ; [#uses=0 type=i32] [debug line = 64:2]
  %j.1 = add i7 %j, 1, !dbg !158                  ; [#uses=1 type=i7] [debug line = 37:49]
  call void @llvm.dbg.value(metadata !{i7 %j.1}, i64 0, metadata !159), !dbg !158 ; [debug line = 37:49] [debug variable = j]
  br label %2, !dbg !158                          ; [debug line = 37:49]

; <label>:12                                      ; preds = %2
  %score_out.addr = getelementptr [101 x i8]* %score_out, i64 0, i64 100, !dbg !160 ; [#uses=1 type=i8*] [debug line = 67:2]
  %score_out.load = load i8* %score_out.addr, align 1, !dbg !160 ; [#uses=1 type=i8] [debug line = 67:2]
  %tmp.1 = sext i8 %score_out.load to i32, !dbg !160 ; [#uses=2 type=i32] [debug line = 67:2]
  %max_score.load = load i32* @max_score, align 4, !dbg !160 ; [#uses=1 type=i32] [debug line = 67:2]
  %tmp.2 = icmp sgt i32 %tmp.1, %max_score.load, !dbg !160 ; [#uses=1 type=i1] [debug line = 67:2]
  br i1 %tmp.2, label %13, label %._crit_edge2, !dbg !160 ; [debug line = 67:2]

; <label>:13                                      ; preds = %12
  store i32 %tmp.1, i32* @max_score, align 4, !dbg !161 ; [debug line = 69:3]
  %orig_out.addr = getelementptr [101 x i32]* %orig_out, i64 0, i64 100, !dbg !163 ; [#uses=1 type=i32*] [debug line = 70:3]
  %orig_out.load = load i32* %orig_out.addr, align 4, !dbg !163 ; [#uses=1 type=i32] [debug line = 70:3]
  store i32 %orig_out.load, i32* @max_orig, align 4, !dbg !163 ; [debug line = 70:3]
  br label %._crit_edge2, !dbg !164               ; [debug line = 72:2]

._crit_edge2:                                     ; preds = %13, %12
  %max_orig.load = load i32* @max_orig, align 4, !dbg !165 ; [#uses=1 type=i32] [debug line = 73:2]
  ret i32 %max_orig.load, !dbg !165               ; [debug line = 73:2]
}

; [#uses=1]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0, !7, !12}
!llvm.dbg.cu = !{!19}

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
!19 = metadata !{i32 786449, i32 0, i32 1, metadata !"C:/Users/Nathaniel/643_PE/solution1/.autopilot/db/week3.pragma.2.c", metadata !"c:/Users/Nathaniel", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, null, null, null, metadata !20} ; [ DW_TAG_compile_unit ]
!20 = metadata !{metadata !21}
!21 = metadata !{metadata !22, metadata !28, metadata !30, metadata !32, metadata !34, metadata !35, metadata !37, metadata !39, metadata !40, metadata !41, metadata !42, metadata !43, metadata !45}
!22 = metadata !{i32 786484, i32 0, null, metadata !"best_fits", metadata !"best_fits", metadata !"", metadata !23, i32 28, metadata !24, i32 0, i32 1, [10 x i32]* @best_fits} ; [ DW_TAG_variable ]
!23 = metadata !{i32 786473, metadata !"S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!24 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 320, i64 32, i32 0, i32 0, metadata !25, metadata !26, i32 0, i32 0} ; [ DW_TAG_array_type ]
!25 = metadata !{i32 786468, null, metadata !"unsigned int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!26 = metadata !{metadata !27}
!27 = metadata !{i32 786465, i64 0, i64 9}        ; [ DW_TAG_subrange_type ]
!28 = metadata !{i32 786484, i32 0, null, metadata !"max_orig", metadata !"max_orig", metadata !"", metadata !29, i32 8, metadata !25, i32 0, i32 1, i32* @max_orig} ; [ DW_TAG_variable ]
!29 = metadata !{i32 786473, metadata !"S:/Documents/CMU/Masters-Fall/18643/643project/HLS/week3.c", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!30 = metadata !{i32 786484, i32 0, null, metadata !"max_score", metadata !"max_score", metadata !"", metadata !29, i32 9, metadata !31, i32 0, i32 1, i32* @max_score} ; [ DW_TAG_variable ]
!31 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!32 = metadata !{i32 786484, i32 0, null, metadata !"_daylight", metadata !"_daylight", metadata !"", metadata !33, i32 103, metadata !31, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!33 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Ctime.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!34 = metadata !{i32 786484, i32 0, null, metadata !"daylight", metadata !"daylight", metadata !"", metadata !33, i32 250, metadata !31, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!35 = metadata !{i32 786484, i32 0, null, metadata !"_sys_nerr", metadata !"_sys_nerr", metadata !"", metadata !36, i32 157, metadata !31, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!36 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cstdlib.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!37 = metadata !{i32 786484, i32 0, null, metadata !"__imp__osplatform", metadata !"__imp__osplatform", metadata !"", metadata !36, i32 248, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!38 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !25} ; [ DW_TAG_pointer_type ]
!39 = metadata !{i32 786484, i32 0, null, metadata !"__imp__osver", metadata !"__imp__osver", metadata !"", metadata !36, i32 257, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!40 = metadata !{i32 786484, i32 0, null, metadata !"__imp__winver", metadata !"__imp__winver", metadata !"", metadata !36, i32 266, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!41 = metadata !{i32 786484, i32 0, null, metadata !"__imp__winmajor", metadata !"__imp__winmajor", metadata !"", metadata !36, i32 275, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!42 = metadata !{i32 786484, i32 0, null, metadata !"__imp__winminor", metadata !"__imp__winminor", metadata !"", metadata !36, i32 284, metadata !38, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!43 = metadata !{i32 786484, i32 0, null, metadata !"_amblksiz", metadata !"_amblksiz", metadata !"", metadata !44, i32 53, metadata !25, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!44 = metadata !{i32 786473, metadata !"S:/Xilinx/Vivado_HLS/2015.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\5Cmalloc.h", metadata !"c:/Users/Nathaniel", null} ; [ DW_TAG_file_type ]
!45 = metadata !{i32 786484, i32 0, null, metadata !"nw_matrix", metadata !"nw_matrix", metadata !"", metadata !23, i32 25, metadata !46, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!46 = metadata !{i32 786454, null, metadata !"NW_matrix", metadata !23, i32 23, i64 0, i64 0, i64 0, i32 0, metadata !47} ; [ DW_TAG_typedef ]
!47 = metadata !{i32 786451, null, metadata !"", metadata !23, i32 20, i64 4040004064, i64 32, i32 0, i32 0, null, metadata !48, i32 0, i32 0} ; [ DW_TAG_structure_type ]
!48 = metadata !{metadata !49, metadata !55}
!49 = metadata !{i32 786445, metadata !47, metadata !"score", metadata !23, i32 21, i64 808000808, i64 8, i64 0, i32 0, metadata !50} ; [ DW_TAG_member ]
!50 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 808000808, i64 8, i32 0, i32 0, metadata !51, metadata !52, i32 0, i32 0} ; [ DW_TAG_array_type ]
!51 = metadata !{i32 786468, null, metadata !"char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 6} ; [ DW_TAG_base_type ]
!52 = metadata !{metadata !53, metadata !54}
!53 = metadata !{i32 786465, i64 0, i64 1000000}  ; [ DW_TAG_subrange_type ]
!54 = metadata !{i32 786465, i64 0, i64 100}      ; [ DW_TAG_subrange_type ]
!55 = metadata !{i32 786445, metadata !47, metadata !"orig", metadata !23, i32 22, i64 3232003232, i64 32, i64 808000832, i32 0, metadata !56} ; [ DW_TAG_member ]
!56 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3232003232, i64 32, i32 0, i32 0, metadata !25, metadata !52, i32 0, i32 0} ; [ DW_TAG_array_type ]
!57 = metadata !{metadata !58}
!58 = metadata !{i32 0, i32 7, metadata !59}
!59 = metadata !{metadata !60}
!60 = metadata !{metadata !"reads", metadata !61, metadata !"char", i32 0, i32 7}
!61 = metadata !{metadata !62}
!62 = metadata !{i32 0, i32 99, i32 1}
!63 = metadata !{metadata !64}
!64 = metadata !{i32 0, i32 7, metadata !65}
!65 = metadata !{metadata !66}
!66 = metadata !{metadata !"ref_genome", metadata !67, metadata !"char", i32 0, i32 7}
!67 = metadata !{metadata !68}
!68 = metadata !{i32 0, i32 0, i32 0}
!69 = metadata !{metadata !70}
!70 = metadata !{i32 0, i32 31, metadata !71}
!71 = metadata !{metadata !72}
!72 = metadata !{metadata !"orig_in", metadata !73, metadata !"unsigned int", i32 0, i32 31}
!73 = metadata !{metadata !74}
!74 = metadata !{i32 0, i32 100, i32 1}
!75 = metadata !{metadata !76}
!76 = metadata !{i32 0, i32 31, metadata !77}
!77 = metadata !{metadata !78}
!78 = metadata !{metadata !"orig_out", metadata !73, metadata !"unsigned int", i32 0, i32 31}
!79 = metadata !{metadata !80}
!80 = metadata !{i32 0, i32 7, metadata !81}
!81 = metadata !{metadata !82}
!82 = metadata !{metadata !"score_in", metadata !73, metadata !"char", i32 0, i32 7}
!83 = metadata !{metadata !84}
!84 = metadata !{i32 0, i32 7, metadata !85}
!85 = metadata !{metadata !86}
!86 = metadata !{metadata !"score_out", metadata !73, metadata !"char", i32 0, i32 7}
!87 = metadata !{metadata !88}
!88 = metadata !{i32 0, i32 31, metadata !89}
!89 = metadata !{metadata !90}
!90 = metadata !{metadata !"i", metadata !67, metadata !"unsigned int", i32 0, i32 31}
!91 = metadata !{metadata !92}
!92 = metadata !{i32 0, i32 31, metadata !93}
!93 = metadata !{metadata !94}
!94 = metadata !{metadata !"return", metadata !95, metadata !"unsigned int", i32 0, i32 31}
!95 = metadata !{metadata !96}
!96 = metadata !{i32 0, i32 1, i32 0}
!97 = metadata !{i32 786689, metadata !98, metadata !"reads", null, i32 11, metadata !104, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!98 = metadata !{i32 786478, i32 0, metadata !29, metadata !"needlemanWunsch", metadata !"needlemanWunsch", metadata !"", metadata !29, i32 11, metadata !99, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !102, i32 12} ; [ DW_TAG_subprogram ]
!99 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !100, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!100 = metadata !{metadata !25, metadata !101, metadata !51, metadata !38, metadata !38, metadata !101, metadata !101, metadata !25}
!101 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !51} ; [ DW_TAG_pointer_type ]
!102 = metadata !{metadata !103}
!103 = metadata !{i32 786468}                     ; [ DW_TAG_base_type ]
!104 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 800, i64 8, i32 0, i32 0, metadata !51, metadata !105, i32 0, i32 0} ; [ DW_TAG_array_type ]
!105 = metadata !{metadata !106}
!106 = metadata !{i32 786465, i64 0, i64 99}      ; [ DW_TAG_subrange_type ]
!107 = metadata !{i32 11, i32 35, metadata !98, null}
!108 = metadata !{i32 786689, metadata !98, metadata !"ref_genome", metadata !29, i32 33554443, metadata !51, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!109 = metadata !{i32 11, i32 75, metadata !98, null}
!110 = metadata !{i32 786689, metadata !98, metadata !"orig_in", null, i32 11, metadata !111, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!111 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 3232, i64 32, i32 0, i32 0, metadata !25, metadata !112, i32 0, i32 0} ; [ DW_TAG_array_type ]
!112 = metadata !{metadata !54}
!113 = metadata !{i32 11, i32 100, metadata !98, null}
!114 = metadata !{i32 786689, metadata !98, metadata !"orig_out", null, i32 11, metadata !111, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!115 = metadata !{i32 11, i32 152, metadata !98, null}
!116 = metadata !{i32 786689, metadata !98, metadata !"score_in", null, i32 12, metadata !117, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!117 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 808, i64 8, i32 0, i32 0, metadata !51, metadata !112, i32 0, i32 0} ; [ DW_TAG_array_type ]
!118 = metadata !{i32 12, i32 14, metadata !98, null}
!119 = metadata !{i32 786689, metadata !98, metadata !"score_out", null, i32 12, metadata !117, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!120 = metadata !{i32 12, i32 59, metadata !98, null}
!121 = metadata !{i32 786689, metadata !98, metadata !"i", metadata !29, i32 117440524, metadata !25, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!122 = metadata !{i32 12, i32 113, metadata !98, null}
!123 = metadata !{i32 27, i32 2, metadata !124, null}
!124 = metadata !{i32 786443, metadata !98, i32 12, i32 116, metadata !29, i32 0} ; [ DW_TAG_lexical_block ]
!125 = metadata !{i32 29, i32 3, metadata !126, null}
!126 = metadata !{i32 786443, metadata !124, i32 27, i32 14, metadata !29, i32 1} ; [ DW_TAG_lexical_block ]
!127 = metadata !{i32 30, i32 3, metadata !126, null}
!128 = metadata !{i32 31, i32 2, metadata !126, null}
!129 = metadata !{i32 37, i32 12, metadata !130, null}
!130 = metadata !{i32 786443, metadata !124, i32 37, i32 7, metadata !29, i32 2} ; [ DW_TAG_lexical_block ]
!131 = metadata !{i32 37, i32 55, metadata !132, null}
!132 = metadata !{i32 786443, metadata !130, i32 37, i32 54, metadata !29, i32 3} ; [ DW_TAG_lexical_block ]
!133 = metadata !{i32 38, i32 1, metadata !132, null}
!134 = metadata !{i32 39, i32 3, metadata !132, null}
!135 = metadata !{i32 40, i32 3, metadata !132, null}
!136 = metadata !{i32 41, i32 3, metadata !132, null}
!137 = metadata !{i32 44, i32 3, metadata !132, null}
!138 = metadata !{i32 45, i32 3, metadata !132, null}
!139 = metadata !{i32 786688, metadata !124, metadata !"diag_score", metadata !29, i32 16, metadata !31, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!140 = metadata !{i32 48, i32 3, metadata !132, null}
!141 = metadata !{i32 786688, metadata !124, metadata !"left_score", metadata !29, i32 16, metadata !31, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!142 = metadata !{i32 49, i32 3, metadata !132, null}
!143 = metadata !{i32 786688, metadata !124, metadata !"up_score", metadata !29, i32 16, metadata !31, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!144 = metadata !{i32 52, i32 3, metadata !132, null}
!145 = metadata !{i32 53, i32 4, metadata !146, null}
!146 = metadata !{i32 786443, metadata !132, i32 52, i32 59, metadata !29, i32 4} ; [ DW_TAG_lexical_block ]
!147 = metadata !{i32 54, i32 4, metadata !146, null}
!148 = metadata !{i32 55, i32 3, metadata !146, null}
!149 = metadata !{i32 56, i32 8, metadata !132, null}
!150 = metadata !{i32 57, i32 4, metadata !151, null}
!151 = metadata !{i32 786443, metadata !132, i32 56, i32 64, metadata !29, i32 5} ; [ DW_TAG_lexical_block ]
!152 = metadata !{i32 58, i32 4, metadata !151, null}
!153 = metadata !{i32 59, i32 3, metadata !151, null}
!154 = metadata !{i32 61, i32 4, metadata !155, null}
!155 = metadata !{i32 786443, metadata !132, i32 60, i32 8, metadata !29, i32 6} ; [ DW_TAG_lexical_block ]
!156 = metadata !{i32 62, i32 4, metadata !155, null}
!157 = metadata !{i32 64, i32 2, metadata !132, null}
!158 = metadata !{i32 37, i32 49, metadata !130, null}
!159 = metadata !{i32 786688, metadata !124, metadata !"j", metadata !29, i32 14, metadata !25, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!160 = metadata !{i32 67, i32 2, metadata !124, null}
!161 = metadata !{i32 69, i32 3, metadata !162, null}
!162 = metadata !{i32 786443, metadata !124, i32 67, i32 57, metadata !29, i32 7} ; [ DW_TAG_lexical_block ]
!163 = metadata !{i32 70, i32 3, metadata !162, null}
!164 = metadata !{i32 72, i32 2, metadata !162, null}
!165 = metadata !{i32 73, i32 2, metadata !124, null}
