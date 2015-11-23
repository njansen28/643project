############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
set_directive_interface -mode axis -depth 1000000 "needlemanWunsch" ref_genome
set_directive_array_reshape -type cyclic -factor 4 -dim 1 "needlemanWunsch" read_r
set_directive_pipeline "needlemanWunsch/COL"
set_directive_pipeline "doRow/COL"
set_directive_inline "doRow"
set_directive_interface -mode s_axilite "needlemanWunsch"
set_directive_interface -mode bram "needlemanWunsch" read_r
set_directive_pipeline -II 100 "needlemanWunsch/ROW"
set_directive_resource -core RAM_1P_BRAM "needlemanWunsch" read_r
