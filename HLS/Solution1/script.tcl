############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project 643_PE
set_top needlemanWunsch
add_files 643_PE/week3.c
add_files 643_PE/week3.h
add_files -tb 643_PE/week3_test.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 5 -name default
source "./643_PE/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
