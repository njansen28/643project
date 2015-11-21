
call xelab xil_defaultlib.apatb_needlemanWunsch_top -prj needlemanWunsch.prj --lib "ieee_proposed=./ieee_proposed" -s needlemanWunsch 
call xsim --noieeewarnings needlemanWunsch -tclbatch needlemanWunsch.tcl

