############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
set_directive_interface -mode axis "needlemanWunsch" ref_genome
set_directive_array_reshape -type cyclic -factor 8 -dim 1 "needlemanWunsch" read
set_directive_pipeline "needlemanWunsch/COL"
set_directive_pipeline "doRow/COL"
