############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
set_directive_interface -mode axis "needlemanWunsch" ref_genome
set_directive_pipeline -II 1 "doRow/COL"
set_directive_array_reshape -type cyclic -factor 16 -dim 2 "needlemanWunsch" read_r
set_directive_interface -mode s_axilite "needlemanWunsch"
set_directive_interface -mode bram "needlemanWunsch" read_r
set_directive_data_pack "needlemanWunsch" ref_genome
set_directive_unroll "needlemanWunsch/READ"
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" read_r
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" score1
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" score2
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" orig1
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" orig2
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" max_orig
set_directive_array_partition -type complete -dim 1 "needlemanWunsch" max_score
set_directive_interface -mode bram "needlemanWunsch" results
