############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project hls1121
set_top needlemanWunsch
add_files hls1121/week3.h
add_files hls1121/week3.c
add_files -tb hls1121/week3_test.c
open_solution "solution2"
set_part {xc7z020clg484-1}
create_clock -period 5 -name default
source "./hls1121/solution2/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog -display_name "needlemanWunsch"
