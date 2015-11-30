############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
set_directive_interface -mode axis "needlemanWunsch" ref_genome
set_directive_pipeline -II 1 "doRow/COL"
set_directive_array_reshape -type cyclic -factor 16 -dim 1 "needlemanWunsch" read_r
set_directive_interface -mode s_axilite "needlemanWunsch"
set_directive_interface -mode bram "needlemanWunsch" read_r
set_directive_data_pack "needlemanWunsch" ref_genome
set_directive_inline "doRow"
set_directive_pipeline -II 100 "needlemanWunsch/ROW"
set_directive_resource -core RAM_1P "needlemanWunsch" read_r
