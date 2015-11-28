
################################################################
# This is a generated script based on design: design_1
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2015.2
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   puts "ERROR: This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source design_1_script.tcl

# If you do not already have a project created,
# you can create a project using the following command:
#    create_project project_1 myproj -part xc7z020clg484-1
#    set_property BOARD_PART em.avnet.com:zed:part0:1.3 [current_project]

# CHECKING IF PROJECT EXISTS
if { [get_projects -quiet] eq "" } {
   puts "ERROR: Please open or create a project!"
   return 1
}



# CHANGE DESIGN NAME HERE
set design_name design_1

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "ERROR: Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      puts "INFO: Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   puts "INFO: Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "ERROR: Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "ERROR: Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   puts "INFO: Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   puts "INFO: Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

puts "INFO: Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   puts $errMsg
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     puts "ERROR: Unable to find parent cell <$parentCell>!"
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     puts "ERROR: Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set DDR [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 DDR ]
  set FIXED_IO [ create_bd_intf_port -mode Master -vlnv xilinx.com:display_processing_system7:fixedio_rtl:1.0 FIXED_IO ]

  # Create ports

  # Create instance: axi_bram_ctrl_0, and set properties
  set axi_bram_ctrl_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_0 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_0

  # Create instance: axi_bram_ctrl_1, and set properties
  set axi_bram_ctrl_1 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_1 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_1

  # Create instance: axi_bram_ctrl_2, and set properties
  set axi_bram_ctrl_2 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_2 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_2

  # Create instance: axi_bram_ctrl_3, and set properties
  set axi_bram_ctrl_3 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_3 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_3

  # Create instance: axi_bram_ctrl_4, and set properties
  set axi_bram_ctrl_4 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_4 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_4

  # Create instance: axi_bram_ctrl_5, and set properties
  set axi_bram_ctrl_5 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_5 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_5

  # Create instance: axi_bram_ctrl_6, and set properties
  set axi_bram_ctrl_6 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_6 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_6

  # Create instance: axi_bram_ctrl_7, and set properties
  set axi_bram_ctrl_7 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_7 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_7

  # Create instance: axi_bram_ctrl_8, and set properties
  set axi_bram_ctrl_8 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_8 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_8

  # Create instance: axi_bram_ctrl_9, and set properties
  set axi_bram_ctrl_9 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_9 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_9

  # Create instance: axi_bram_ctrl_10, and set properties
  set axi_bram_ctrl_10 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_10 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_10

  # Create instance: axi_bram_ctrl_11, and set properties
  set axi_bram_ctrl_11 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_11 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_11

  # Create instance: axi_bram_ctrl_12, and set properties
  set axi_bram_ctrl_12 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_12 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_12

  # Create instance: axi_bram_ctrl_13, and set properties
  set axi_bram_ctrl_13 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_13 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_13

  # Create instance: axi_bram_ctrl_14, and set properties
  set axi_bram_ctrl_14 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_14 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_14

  # Create instance: axi_bram_ctrl_15, and set properties
  set axi_bram_ctrl_15 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_15 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_15

  # Create instance: axi_bram_ctrl_16, and set properties
  set axi_bram_ctrl_16 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_16 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_16

  # Create instance: axi_bram_ctrl_17, and set properties
  set axi_bram_ctrl_17 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_17 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_17

  # Create instance: axi_bram_ctrl_18, and set properties
  set axi_bram_ctrl_18 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_18 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_18

  # Create instance: axi_bram_ctrl_19, and set properties
  set axi_bram_ctrl_19 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_19 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_19

  # Create instance: axi_bram_ctrl_20, and set properties
  set axi_bram_ctrl_20 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_20 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_20

  # Create instance: axi_bram_ctrl_21, and set properties
  set axi_bram_ctrl_21 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_21 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_21

  # Create instance: axi_bram_ctrl_22, and set properties
  set axi_bram_ctrl_22 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_22 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_22

  # Create instance: axi_bram_ctrl_23, and set properties
  set axi_bram_ctrl_23 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_23 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_23

  # Create instance: axi_bram_ctrl_24, and set properties
  set axi_bram_ctrl_24 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_24 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_24

  # Create instance: axi_bram_ctrl_25, and set properties
  set axi_bram_ctrl_25 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_25 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_25

  # Create instance: axi_bram_ctrl_26, and set properties
  set axi_bram_ctrl_26 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_26 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_26

  # Create instance: axi_bram_ctrl_27, and set properties
  set axi_bram_ctrl_27 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_27 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_27

  # Create instance: axi_bram_ctrl_28, and set properties
  set axi_bram_ctrl_28 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_28 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_28

  # Create instance: axi_bram_ctrl_29, and set properties
  set axi_bram_ctrl_29 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_29 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_29

  # Create instance: axi_bram_ctrl_30, and set properties
  set axi_bram_ctrl_30 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_30 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_30

  # Create instance: axi_bram_ctrl_31, and set properties
  set axi_bram_ctrl_31 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_31 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_31

  # Create instance: axi_bram_ctrl_32, and set properties
  set axi_bram_ctrl_32 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_32 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_32

  # Create instance: axi_bram_ctrl_33, and set properties
  set axi_bram_ctrl_33 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_33 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_33

  # Create instance: axi_bram_ctrl_34, and set properties
  set axi_bram_ctrl_34 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_34 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_34

  # Create instance: axi_bram_ctrl_35, and set properties
  set axi_bram_ctrl_35 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_35 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_35

  # Create instance: axi_bram_ctrl_36, and set properties
  set axi_bram_ctrl_36 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_36 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_36

  # Create instance: axi_bram_ctrl_37, and set properties
  set axi_bram_ctrl_37 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_37 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_37

  # Create instance: axi_bram_ctrl_38, and set properties
  set axi_bram_ctrl_38 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_38 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_38

  # Create instance: axi_bram_ctrl_39, and set properties
  set axi_bram_ctrl_39 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_39 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_39

  # Create instance: axi_bram_ctrl_40, and set properties
  set axi_bram_ctrl_40 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_40 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_40

  # Create instance: axi_bram_ctrl_41, and set properties
  set axi_bram_ctrl_41 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_41 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_41

  # Create instance: axi_bram_ctrl_42, and set properties
  set axi_bram_ctrl_42 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_42 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_42

  # Create instance: axi_bram_ctrl_43, and set properties
  set axi_bram_ctrl_43 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_43 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_43

  # Create instance: axi_bram_ctrl_44, and set properties
  set axi_bram_ctrl_44 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_44 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_44

  # Create instance: axi_bram_ctrl_45, and set properties
  set axi_bram_ctrl_45 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_45 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_45

  # Create instance: axi_bram_ctrl_46, and set properties
  set axi_bram_ctrl_46 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_46 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_46

  # Create instance: axi_bram_ctrl_47, and set properties
  set axi_bram_ctrl_47 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_47 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_47

  # Create instance: axi_bram_ctrl_48, and set properties
  set axi_bram_ctrl_48 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_48 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_48

  # Create instance: axi_bram_ctrl_49, and set properties
  set axi_bram_ctrl_49 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_49 ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_49

  # Create instance: axi_bram_ctrl_results, and set properties
  set axi_bram_ctrl_results [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_results ]
  set_property -dict [ list CONFIG.ECC_TYPE {0} CONFIG.PROTOCOL {AXI4LITE} CONFIG.SINGLE_PORT_BRAM {1}  ] $axi_bram_ctrl_results

  # Create instance: axi_dma_0, and set properties
  set axi_dma_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 axi_dma_0 ]
  set_property -dict [ list CONFIG.c_include_s2mm {0} CONFIG.c_include_sg {0} CONFIG.c_m_axi_mm2s_data_width {64} CONFIG.c_m_axis_mm2s_tdata_width {64} CONFIG.c_mm2s_burst_size {8} CONFIG.c_sg_include_stscntrl_strm {0} CONFIG.c_sg_length_width {18}  ] $axi_dma_0

  # Create instance: axi_mem_intercon, and set properties
  set axi_mem_intercon [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_mem_intercon ]
  set_property -dict [ list CONFIG.NUM_MI {1}  ] $axi_mem_intercon

  # Create instance: axis_dwidth_converter_0, and set properties
  set axis_dwidth_converter_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwidth_converter_0 ]
  set_property -dict [ list CONFIG.M_TDATA_NUM_BYTES {1}  ] $axis_dwidth_converter_0

  # Create instance: fifo_generator_0, and set properties
  set fifo_generator_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:fifo_generator:12.0 fifo_generator_0 ]
  set_property -dict [ list CONFIG.Clock_Type_AXI {Independent_Clock} \
CONFIG.Empty_Threshold_Assert_Value_axis {1021} CONFIG.Empty_Threshold_Assert_Value_rach {13} \
CONFIG.Empty_Threshold_Assert_Value_rdch {1021} CONFIG.Empty_Threshold_Assert_Value_wach {13} \
CONFIG.Empty_Threshold_Assert_Value_wdch {1021} CONFIG.Empty_Threshold_Assert_Value_wrch {13} \
CONFIG.FIFO_Implementation_axis {Independent_Clocks_Block_RAM} CONFIG.FIFO_Implementation_rach {Independent_Clocks_Distributed_RAM} \
CONFIG.FIFO_Implementation_rdch {Independent_Clocks_Block_RAM} CONFIG.FIFO_Implementation_wach {Independent_Clocks_Distributed_RAM} \
CONFIG.FIFO_Implementation_wdch {Independent_Clocks_Block_RAM} CONFIG.FIFO_Implementation_wrch {Independent_Clocks_Distributed_RAM} \
CONFIG.Full_Threshold_Assert_Value_rach {15} CONFIG.Full_Threshold_Assert_Value_wach {15} \
CONFIG.Full_Threshold_Assert_Value_wrch {15} CONFIG.INTERFACE_TYPE {AXI_STREAM} \
CONFIG.TDATA_NUM_BYTES {8} CONFIG.TKEEP_WIDTH {8} \
CONFIG.TSTRB_WIDTH {8} CONFIG.TUSER_WIDTH {0} \
 ] $fifo_generator_0

  # Create instance: needlemanWunsch_0, and set properties
  set needlemanWunsch_0 [ create_bd_cell -type ip -vlnv xilinx.com:hls:needlemanWunsch:1.0 needlemanWunsch_0 ]

  # Create instance: needlemanWunsch_0_bram, and set properties
  set needlemanWunsch_0_bram [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram

  # Create instance: needlemanWunsch_0_bram_0, and set properties
  set needlemanWunsch_0_bram_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_0 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_0

  # Create instance: needlemanWunsch_0_bram_1, and set properties
  set needlemanWunsch_0_bram_1 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_1 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_1

  # Create instance: needlemanWunsch_0_bram_2, and set properties
  set needlemanWunsch_0_bram_2 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_2 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_2

  # Create instance: needlemanWunsch_0_bram_3, and set properties
  set needlemanWunsch_0_bram_3 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_3 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_3

  # Create instance: needlemanWunsch_0_bram_4, and set properties
  set needlemanWunsch_0_bram_4 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_4 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_4

  # Create instance: needlemanWunsch_0_bram_5, and set properties
  set needlemanWunsch_0_bram_5 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_5 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_5

  # Create instance: needlemanWunsch_0_bram_6, and set properties
  set needlemanWunsch_0_bram_6 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_6 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_6

  # Create instance: needlemanWunsch_0_bram_7, and set properties
  set needlemanWunsch_0_bram_7 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_7 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_7

  # Create instance: needlemanWunsch_0_bram_8, and set properties
  set needlemanWunsch_0_bram_8 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_8 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_8

  # Create instance: needlemanWunsch_0_bram_9, and set properties
  set needlemanWunsch_0_bram_9 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_9 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_9

  # Create instance: needlemanWunsch_0_bram_10, and set properties
  set needlemanWunsch_0_bram_10 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_10 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_10

  # Create instance: needlemanWunsch_0_bram_11, and set properties
  set needlemanWunsch_0_bram_11 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_11 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_11

  # Create instance: needlemanWunsch_0_bram_12, and set properties
  set needlemanWunsch_0_bram_12 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_12 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_12

  # Create instance: needlemanWunsch_0_bram_13, and set properties
  set needlemanWunsch_0_bram_13 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_13 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_13

  # Create instance: needlemanWunsch_0_bram_14, and set properties
  set needlemanWunsch_0_bram_14 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_14 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_14

  # Create instance: needlemanWunsch_0_bram_15, and set properties
  set needlemanWunsch_0_bram_15 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_15 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_15

  # Create instance: needlemanWunsch_0_bram_16, and set properties
  set needlemanWunsch_0_bram_16 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_16 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_16

  # Create instance: needlemanWunsch_0_bram_17, and set properties
  set needlemanWunsch_0_bram_17 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_17 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_17

  # Create instance: needlemanWunsch_0_bram_18, and set properties
  set needlemanWunsch_0_bram_18 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_18 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_18

  # Create instance: needlemanWunsch_0_bram_19, and set properties
  set needlemanWunsch_0_bram_19 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_19 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_19

  # Create instance: needlemanWunsch_0_bram_20, and set properties
  set needlemanWunsch_0_bram_20 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_20 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_20

  # Create instance: needlemanWunsch_0_bram_21, and set properties
  set needlemanWunsch_0_bram_21 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_21 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_21

  # Create instance: needlemanWunsch_0_bram_22, and set properties
  set needlemanWunsch_0_bram_22 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_22 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_22

  # Create instance: needlemanWunsch_0_bram_23, and set properties
  set needlemanWunsch_0_bram_23 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_23 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_23

  # Create instance: needlemanWunsch_0_bram_24, and set properties
  set needlemanWunsch_0_bram_24 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_24 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_24

  # Create instance: needlemanWunsch_0_bram_25, and set properties
  set needlemanWunsch_0_bram_25 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_25 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_25

  # Create instance: needlemanWunsch_0_bram_26, and set properties
  set needlemanWunsch_0_bram_26 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_26 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_26

  # Create instance: needlemanWunsch_0_bram_27, and set properties
  set needlemanWunsch_0_bram_27 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_27 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_27

  # Create instance: needlemanWunsch_0_bram_28, and set properties
  set needlemanWunsch_0_bram_28 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_28 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_28

  # Create instance: needlemanWunsch_0_bram_29, and set properties
  set needlemanWunsch_0_bram_29 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_29 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_29

  # Create instance: needlemanWunsch_0_bram_30, and set properties
  set needlemanWunsch_0_bram_30 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_30 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_30

  # Create instance: needlemanWunsch_0_bram_31, and set properties
  set needlemanWunsch_0_bram_31 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_31 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_31

  # Create instance: needlemanWunsch_0_bram_32, and set properties
  set needlemanWunsch_0_bram_32 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_32 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_32

  # Create instance: needlemanWunsch_0_bram_33, and set properties
  set needlemanWunsch_0_bram_33 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_33 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_33

  # Create instance: needlemanWunsch_0_bram_34, and set properties
  set needlemanWunsch_0_bram_34 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_34 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_34

  # Create instance: needlemanWunsch_0_bram_35, and set properties
  set needlemanWunsch_0_bram_35 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_35 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_35

  # Create instance: needlemanWunsch_0_bram_36, and set properties
  set needlemanWunsch_0_bram_36 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_36 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_36

  # Create instance: needlemanWunsch_0_bram_37, and set properties
  set needlemanWunsch_0_bram_37 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_37 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_37

  # Create instance: needlemanWunsch_0_bram_38, and set properties
  set needlemanWunsch_0_bram_38 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_38 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_38

  # Create instance: needlemanWunsch_0_bram_39, and set properties
  set needlemanWunsch_0_bram_39 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_39 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_39

  # Create instance: needlemanWunsch_0_bram_40, and set properties
  set needlemanWunsch_0_bram_40 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_40 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_40

  # Create instance: needlemanWunsch_0_bram_41, and set properties
  set needlemanWunsch_0_bram_41 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_41 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_41

  # Create instance: needlemanWunsch_0_bram_42, and set properties
  set needlemanWunsch_0_bram_42 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_42 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_42

  # Create instance: needlemanWunsch_0_bram_43, and set properties
  set needlemanWunsch_0_bram_43 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_43 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_43

  # Create instance: needlemanWunsch_0_bram_44, and set properties
  set needlemanWunsch_0_bram_44 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_44 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_44

  # Create instance: needlemanWunsch_0_bram_45, and set properties
  set needlemanWunsch_0_bram_45 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_45 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_45

  # Create instance: needlemanWunsch_0_bram_46, and set properties
  set needlemanWunsch_0_bram_46 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_46 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_46

  # Create instance: needlemanWunsch_0_bram_47, and set properties
  set needlemanWunsch_0_bram_47 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_47 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_47

  # Create instance: needlemanWunsch_0_bram_48, and set properties
  set needlemanWunsch_0_bram_48 [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_48 ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_48

  # Create instance: needlemanWunsch_0_bram_results, and set properties
  set needlemanWunsch_0_bram_results [ create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.2 needlemanWunsch_0_bram_results ]
  set_property -dict [ list CONFIG.Enable_B {Use_ENB_Pin} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Port_B_Clock {100} CONFIG.Port_B_Enable_Rate {100} CONFIG.Port_B_Write_Rate {50} CONFIG.Use_RSTB_Pin {true}  ] $needlemanWunsch_0_bram_results

  # Create instance: processing_system7_0, and set properties
  set processing_system7_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0 ]
  set_property -dict [ list CONFIG.PCW_EN_CLK1_PORT {1} CONFIG.PCW_FPGA1_PERIPHERAL_FREQMHZ {200} CONFIG.PCW_USE_S_AXI_HP0 {1} CONFIG.preset {ZedBoard}  ] $processing_system7_0

  # Create instance: processing_system7_0_axi_periph, and set properties
  set processing_system7_0_axi_periph [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 processing_system7_0_axi_periph ]
  set_property -dict [ list CONFIG.NUM_MI {53}  ] $processing_system7_0_axi_periph

  # Create instance: rst_processing_system7_0_100M, and set properties
  set rst_processing_system7_0_100M [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_processing_system7_0_100M ]

  # Create interface connections
  connect_bd_intf_net -intf_net axi_bram_ctrl_0_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_10_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_10/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_9/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_11_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_11/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_10/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_12_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_12/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_11/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_13_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_13/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_12/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_14_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_14/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_13/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_15_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_15/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_14/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_16_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_16/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_15/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_17_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_17/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_16/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_18_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_18/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_17/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_19_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_19/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_18/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_1_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_1/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_0/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_20_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_20/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_19/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_21_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_21/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_20/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_22_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_22/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_21/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_23_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_23/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_22/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_24_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_24/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_23/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_25_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_25/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_24/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_26_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_26/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_25/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_27_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_27/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_26/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_28_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_28/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_27/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_29_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_29/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_28/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_2_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_2/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_1/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_30_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_30/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_29/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_31_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_31/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_30/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_32_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_32/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_31/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_33_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_33/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_32/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_34_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_34/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_33/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_35_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_35/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_34/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_36_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_36/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_35/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_37_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_37/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_36/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_38_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_38/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_37/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_39_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_39/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_38/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_3_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_3/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_2/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_40_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_40/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_39/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_41_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_41/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_40/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_42_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_42/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_41/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_43_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_43/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_42/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_44_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_44/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_43/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_45_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_45/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_44/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_46_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_46/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_45/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_47_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_47/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_46/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_48_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_48/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_47/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_49_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_49/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_48/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_4_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_4/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_3/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_5_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_5/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_4/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_6_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_6/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_5/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_7_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_7/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_6/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_8_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_8/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_7/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_9_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_9/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_8/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_bram_ctrl_results_BRAM_PORTA [get_bd_intf_pins axi_bram_ctrl_results/BRAM_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_results/BRAM_PORTB]
  connect_bd_intf_net -intf_net axi_dma_0_M_AXIS_MM2S [get_bd_intf_pins axi_dma_0/M_AXIS_MM2S] [get_bd_intf_pins fifo_generator_0/S_AXIS]
  connect_bd_intf_net -intf_net axi_dma_0_M_AXI_MM2S [get_bd_intf_pins axi_dma_0/M_AXI_MM2S] [get_bd_intf_pins axi_mem_intercon/S00_AXI]
  connect_bd_intf_net -intf_net axi_mem_intercon_M00_AXI [get_bd_intf_pins axi_mem_intercon/M00_AXI] [get_bd_intf_pins processing_system7_0/S_AXI_HP0]
  connect_bd_intf_net -intf_net axis_dwidth_converter_0_M_AXIS [get_bd_intf_pins axis_dwidth_converter_0/M_AXIS] [get_bd_intf_pins needlemanWunsch_0/ref_genome]
  connect_bd_intf_net -intf_net fifo_generator_0_M_AXIS [get_bd_intf_pins axis_dwidth_converter_0/S_AXIS] [get_bd_intf_pins fifo_generator_0/M_AXIS]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_0_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_0_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_10_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_10_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_9/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_11_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_11_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_10/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_12_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_12_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_11/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_13_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_13_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_12/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_14_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_14_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_13/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_15_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_15_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_14/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_16_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_16_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_15/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_17_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_17_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_16/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_18_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_18_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_17/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_19_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_19_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_18/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_1_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_1_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_0/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_20_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_20_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_19/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_21_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_21_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_20/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_22_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_22_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_21/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_23_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_23_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_22/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_24_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_24_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_23/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_25_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_25_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_24/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_26_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_26_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_25/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_27_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_27_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_26/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_28_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_28_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_27/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_29_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_29_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_28/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_2_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_2_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_1/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_30_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_30_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_29/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_31_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_31_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_30/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_32_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_32_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_31/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_33_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_33_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_32/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_34_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_34_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_33/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_35_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_35_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_34/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_36_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_36_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_35/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_37_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_37_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_36/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_38_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_38_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_37/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_39_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_39_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_38/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_3_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_3_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_2/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_40_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_40_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_39/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_41_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_41_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_40/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_42_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_42_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_41/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_43_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_43_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_42/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_44_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_44_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_43/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_45_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_45_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_44/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_46_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_46_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_45/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_47_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_47_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_46/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_48_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_48_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_47/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_49_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_49_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_48/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_4_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_4_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_3/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_5_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_5_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_4/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_6_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_6_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_5/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_7_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_7_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_6/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_8_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_8_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_7/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_read_r_9_PORTA [get_bd_intf_pins needlemanWunsch_0/read_r_9_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_8/BRAM_PORTA]
  connect_bd_intf_net -intf_net needlemanWunsch_0_results_PORTA [get_bd_intf_pins needlemanWunsch_0/results_PORTA] [get_bd_intf_pins needlemanWunsch_0_bram_results/BRAM_PORTA]
  connect_bd_intf_net -intf_net processing_system7_0_DDR [get_bd_intf_ports DDR] [get_bd_intf_pins processing_system7_0/DDR]
  connect_bd_intf_net -intf_net processing_system7_0_FIXED_IO [get_bd_intf_ports FIXED_IO] [get_bd_intf_pins processing_system7_0/FIXED_IO]
  connect_bd_intf_net -intf_net processing_system7_0_M_AXI_GP0 [get_bd_intf_pins processing_system7_0/M_AXI_GP0] [get_bd_intf_pins processing_system7_0_axi_periph/S00_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M00_AXI [get_bd_intf_pins axi_dma_0/S_AXI_LITE] [get_bd_intf_pins processing_system7_0_axi_periph/M00_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M01_AXI [get_bd_intf_pins needlemanWunsch_0/s_axi_AXILiteS] [get_bd_intf_pins processing_system7_0_axi_periph/M01_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M02_AXI [get_bd_intf_pins axi_bram_ctrl_0/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M02_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M03_AXI [get_bd_intf_pins axi_bram_ctrl_1/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M03_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M04_AXI [get_bd_intf_pins axi_bram_ctrl_2/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M04_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M05_AXI [get_bd_intf_pins axi_bram_ctrl_3/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M05_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M06_AXI [get_bd_intf_pins axi_bram_ctrl_4/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M06_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M07_AXI [get_bd_intf_pins axi_bram_ctrl_5/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M07_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M08_AXI [get_bd_intf_pins axi_bram_ctrl_6/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M08_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M09_AXI [get_bd_intf_pins axi_bram_ctrl_7/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M09_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M10_AXI [get_bd_intf_pins axi_bram_ctrl_8/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M10_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M11_AXI [get_bd_intf_pins axi_bram_ctrl_9/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M11_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M12_AXI [get_bd_intf_pins axi_bram_ctrl_10/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M12_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M13_AXI [get_bd_intf_pins axi_bram_ctrl_11/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M13_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M14_AXI [get_bd_intf_pins axi_bram_ctrl_12/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M14_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M15_AXI [get_bd_intf_pins axi_bram_ctrl_13/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M15_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M16_AXI [get_bd_intf_pins axi_bram_ctrl_14/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M16_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M17_AXI [get_bd_intf_pins axi_bram_ctrl_15/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M17_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M18_AXI [get_bd_intf_pins axi_bram_ctrl_16/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M18_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M19_AXI [get_bd_intf_pins axi_bram_ctrl_17/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M19_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M20_AXI [get_bd_intf_pins axi_bram_ctrl_18/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M20_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M21_AXI [get_bd_intf_pins axi_bram_ctrl_19/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M21_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M22_AXI [get_bd_intf_pins axi_bram_ctrl_20/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M22_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M23_AXI [get_bd_intf_pins axi_bram_ctrl_21/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M23_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M24_AXI [get_bd_intf_pins axi_bram_ctrl_22/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M24_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M25_AXI [get_bd_intf_pins axi_bram_ctrl_23/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M25_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M26_AXI [get_bd_intf_pins axi_bram_ctrl_24/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M26_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M27_AXI [get_bd_intf_pins axi_bram_ctrl_25/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M27_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M28_AXI [get_bd_intf_pins axi_bram_ctrl_26/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M28_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M29_AXI [get_bd_intf_pins axi_bram_ctrl_27/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M29_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M30_AXI [get_bd_intf_pins axi_bram_ctrl_28/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M30_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M31_AXI [get_bd_intf_pins axi_bram_ctrl_29/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M31_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M32_AXI [get_bd_intf_pins axi_bram_ctrl_30/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M32_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M33_AXI [get_bd_intf_pins axi_bram_ctrl_31/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M33_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M34_AXI [get_bd_intf_pins axi_bram_ctrl_32/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M34_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M35_AXI [get_bd_intf_pins axi_bram_ctrl_33/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M35_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M36_AXI [get_bd_intf_pins axi_bram_ctrl_34/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M36_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M37_AXI [get_bd_intf_pins axi_bram_ctrl_35/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M37_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M38_AXI [get_bd_intf_pins axi_bram_ctrl_36/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M38_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M39_AXI [get_bd_intf_pins axi_bram_ctrl_37/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M39_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M40_AXI [get_bd_intf_pins axi_bram_ctrl_38/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M40_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M41_AXI [get_bd_intf_pins axi_bram_ctrl_39/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M41_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M42_AXI [get_bd_intf_pins axi_bram_ctrl_40/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M42_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M43_AXI [get_bd_intf_pins axi_bram_ctrl_41/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M43_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M44_AXI [get_bd_intf_pins axi_bram_ctrl_42/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M44_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M45_AXI [get_bd_intf_pins axi_bram_ctrl_43/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M45_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M46_AXI [get_bd_intf_pins axi_bram_ctrl_44/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M46_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M47_AXI [get_bd_intf_pins axi_bram_ctrl_45/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M47_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M48_AXI [get_bd_intf_pins axi_bram_ctrl_46/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M48_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M49_AXI [get_bd_intf_pins axi_bram_ctrl_47/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M49_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M50_AXI [get_bd_intf_pins axi_bram_ctrl_48/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M50_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M51_AXI [get_bd_intf_pins axi_bram_ctrl_49/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M51_AXI]
  connect_bd_intf_net -intf_net processing_system7_0_axi_periph_M52_AXI [get_bd_intf_pins axi_bram_ctrl_results/S_AXI] [get_bd_intf_pins processing_system7_0_axi_periph/M52_AXI]

  # Create port connections
  connect_bd_net -net processing_system7_0_FCLK_CLK0 [get_bd_pins axi_bram_ctrl_0/s_axi_aclk] [get_bd_pins axi_bram_ctrl_1/s_axi_aclk] [get_bd_pins axi_bram_ctrl_10/s_axi_aclk] [get_bd_pins axi_bram_ctrl_11/s_axi_aclk] [get_bd_pins axi_bram_ctrl_12/s_axi_aclk] [get_bd_pins axi_bram_ctrl_13/s_axi_aclk] [get_bd_pins axi_bram_ctrl_14/s_axi_aclk] [get_bd_pins axi_bram_ctrl_15/s_axi_aclk] [get_bd_pins axi_bram_ctrl_16/s_axi_aclk] [get_bd_pins axi_bram_ctrl_17/s_axi_aclk] [get_bd_pins axi_bram_ctrl_18/s_axi_aclk] [get_bd_pins axi_bram_ctrl_19/s_axi_aclk] [get_bd_pins axi_bram_ctrl_2/s_axi_aclk] [get_bd_pins axi_bram_ctrl_20/s_axi_aclk] [get_bd_pins axi_bram_ctrl_21/s_axi_aclk] [get_bd_pins axi_bram_ctrl_22/s_axi_aclk] [get_bd_pins axi_bram_ctrl_23/s_axi_aclk] [get_bd_pins axi_bram_ctrl_24/s_axi_aclk] [get_bd_pins axi_bram_ctrl_25/s_axi_aclk] [get_bd_pins axi_bram_ctrl_26/s_axi_aclk] [get_bd_pins axi_bram_ctrl_27/s_axi_aclk] [get_bd_pins axi_bram_ctrl_28/s_axi_aclk] [get_bd_pins axi_bram_ctrl_29/s_axi_aclk] [get_bd_pins axi_bram_ctrl_3/s_axi_aclk] [get_bd_pins axi_bram_ctrl_30/s_axi_aclk] [get_bd_pins axi_bram_ctrl_31/s_axi_aclk] [get_bd_pins axi_bram_ctrl_32/s_axi_aclk] [get_bd_pins axi_bram_ctrl_33/s_axi_aclk] [get_bd_pins axi_bram_ctrl_34/s_axi_aclk] [get_bd_pins axi_bram_ctrl_35/s_axi_aclk] [get_bd_pins axi_bram_ctrl_36/s_axi_aclk] [get_bd_pins axi_bram_ctrl_37/s_axi_aclk] [get_bd_pins axi_bram_ctrl_38/s_axi_aclk] [get_bd_pins axi_bram_ctrl_39/s_axi_aclk] [get_bd_pins axi_bram_ctrl_4/s_axi_aclk] [get_bd_pins axi_bram_ctrl_40/s_axi_aclk] [get_bd_pins axi_bram_ctrl_41/s_axi_aclk] [get_bd_pins axi_bram_ctrl_42/s_axi_aclk] [get_bd_pins axi_bram_ctrl_43/s_axi_aclk] [get_bd_pins axi_bram_ctrl_44/s_axi_aclk] [get_bd_pins axi_bram_ctrl_45/s_axi_aclk] [get_bd_pins axi_bram_ctrl_46/s_axi_aclk] [get_bd_pins axi_bram_ctrl_47/s_axi_aclk] [get_bd_pins axi_bram_ctrl_48/s_axi_aclk] [get_bd_pins axi_bram_ctrl_49/s_axi_aclk] [get_bd_pins axi_bram_ctrl_5/s_axi_aclk] [get_bd_pins axi_bram_ctrl_6/s_axi_aclk] [get_bd_pins axi_bram_ctrl_7/s_axi_aclk] [get_bd_pins axi_bram_ctrl_8/s_axi_aclk] [get_bd_pins axi_bram_ctrl_9/s_axi_aclk] [get_bd_pins axi_bram_ctrl_results/s_axi_aclk] [get_bd_pins axi_dma_0/m_axi_mm2s_aclk] [get_bd_pins axi_dma_0/s_axi_lite_aclk] [get_bd_pins axi_mem_intercon/ACLK] [get_bd_pins axi_mem_intercon/M00_ACLK] [get_bd_pins axi_mem_intercon/S00_ACLK] [get_bd_pins axis_dwidth_converter_0/aclk] [get_bd_pins fifo_generator_0/m_aclk] [get_bd_pins fifo_generator_0/s_aclk] [get_bd_pins needlemanWunsch_0/ap_clk] [get_bd_pins processing_system7_0/FCLK_CLK0] [get_bd_pins processing_system7_0/M_AXI_GP0_ACLK] [get_bd_pins processing_system7_0/S_AXI_HP0_ACLK] [get_bd_pins processing_system7_0_axi_periph/ACLK] [get_bd_pins processing_system7_0_axi_periph/M00_ACLK] [get_bd_pins processing_system7_0_axi_periph/M01_ACLK] [get_bd_pins processing_system7_0_axi_periph/M02_ACLK] [get_bd_pins processing_system7_0_axi_periph/M03_ACLK] [get_bd_pins processing_system7_0_axi_periph/M04_ACLK] [get_bd_pins processing_system7_0_axi_periph/M05_ACLK] [get_bd_pins processing_system7_0_axi_periph/M06_ACLK] [get_bd_pins processing_system7_0_axi_periph/M07_ACLK] [get_bd_pins processing_system7_0_axi_periph/M08_ACLK] [get_bd_pins processing_system7_0_axi_periph/M09_ACLK] [get_bd_pins processing_system7_0_axi_periph/M10_ACLK] [get_bd_pins processing_system7_0_axi_periph/M11_ACLK] [get_bd_pins processing_system7_0_axi_periph/M12_ACLK] [get_bd_pins processing_system7_0_axi_periph/M13_ACLK] [get_bd_pins processing_system7_0_axi_periph/M14_ACLK] [get_bd_pins processing_system7_0_axi_periph/M15_ACLK] [get_bd_pins processing_system7_0_axi_periph/M16_ACLK] [get_bd_pins processing_system7_0_axi_periph/M17_ACLK] [get_bd_pins processing_system7_0_axi_periph/M18_ACLK] [get_bd_pins processing_system7_0_axi_periph/M19_ACLK] [get_bd_pins processing_system7_0_axi_periph/M20_ACLK] [get_bd_pins processing_system7_0_axi_periph/M21_ACLK] [get_bd_pins processing_system7_0_axi_periph/M22_ACLK] [get_bd_pins processing_system7_0_axi_periph/M23_ACLK] [get_bd_pins processing_system7_0_axi_periph/M24_ACLK] [get_bd_pins processing_system7_0_axi_periph/M25_ACLK] [get_bd_pins processing_system7_0_axi_periph/M26_ACLK] [get_bd_pins processing_system7_0_axi_periph/M27_ACLK] [get_bd_pins processing_system7_0_axi_periph/M28_ACLK] [get_bd_pins processing_system7_0_axi_periph/M29_ACLK] [get_bd_pins processing_system7_0_axi_periph/M30_ACLK] [get_bd_pins processing_system7_0_axi_periph/M31_ACLK] [get_bd_pins processing_system7_0_axi_periph/M32_ACLK] [get_bd_pins processing_system7_0_axi_periph/M33_ACLK] [get_bd_pins processing_system7_0_axi_periph/M34_ACLK] [get_bd_pins processing_system7_0_axi_periph/M35_ACLK] [get_bd_pins processing_system7_0_axi_periph/M36_ACLK] [get_bd_pins processing_system7_0_axi_periph/M37_ACLK] [get_bd_pins processing_system7_0_axi_periph/M38_ACLK] [get_bd_pins processing_system7_0_axi_periph/M39_ACLK] [get_bd_pins processing_system7_0_axi_periph/M40_ACLK] [get_bd_pins processing_system7_0_axi_periph/M41_ACLK] [get_bd_pins processing_system7_0_axi_periph/M42_ACLK] [get_bd_pins processing_system7_0_axi_periph/M43_ACLK] [get_bd_pins processing_system7_0_axi_periph/M44_ACLK] [get_bd_pins processing_system7_0_axi_periph/M45_ACLK] [get_bd_pins processing_system7_0_axi_periph/M46_ACLK] [get_bd_pins processing_system7_0_axi_periph/M47_ACLK] [get_bd_pins processing_system7_0_axi_periph/M48_ACLK] [get_bd_pins processing_system7_0_axi_periph/M49_ACLK] [get_bd_pins processing_system7_0_axi_periph/M50_ACLK] [get_bd_pins processing_system7_0_axi_periph/M51_ACLK] [get_bd_pins processing_system7_0_axi_periph/M52_ACLK] [get_bd_pins processing_system7_0_axi_periph/S00_ACLK] [get_bd_pins rst_processing_system7_0_100M/slowest_sync_clk]
  connect_bd_net -net processing_system7_0_FCLK_RESET0_N [get_bd_pins processing_system7_0/FCLK_RESET0_N] [get_bd_pins rst_processing_system7_0_100M/ext_reset_in]
  connect_bd_net -net rst_processing_system7_0_100M_interconnect_aresetn [get_bd_pins axi_mem_intercon/ARESETN] [get_bd_pins axis_dwidth_converter_0/aresetn] [get_bd_pins fifo_generator_0/s_aresetn] [get_bd_pins processing_system7_0_axi_periph/ARESETN] [get_bd_pins rst_processing_system7_0_100M/interconnect_aresetn]
  connect_bd_net -net rst_processing_system7_0_100M_peripheral_aresetn [get_bd_pins axi_bram_ctrl_0/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_1/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_10/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_11/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_12/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_13/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_14/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_15/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_16/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_17/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_18/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_19/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_2/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_20/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_21/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_22/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_23/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_24/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_25/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_26/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_27/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_28/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_29/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_3/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_30/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_31/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_32/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_33/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_34/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_35/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_36/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_37/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_38/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_39/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_4/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_40/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_41/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_42/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_43/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_44/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_45/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_46/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_47/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_48/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_49/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_5/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_6/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_7/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_8/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_9/s_axi_aresetn] [get_bd_pins axi_bram_ctrl_results/s_axi_aresetn] [get_bd_pins axi_dma_0/axi_resetn] [get_bd_pins axi_mem_intercon/M00_ARESETN] [get_bd_pins axi_mem_intercon/S00_ARESETN] [get_bd_pins needlemanWunsch_0/ap_rst_n] [get_bd_pins processing_system7_0_axi_periph/M00_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M01_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M02_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M03_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M04_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M05_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M06_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M07_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M08_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M09_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M10_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M11_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M12_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M13_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M14_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M15_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M16_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M17_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M18_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M19_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M20_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M21_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M22_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M23_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M24_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M25_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M26_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M27_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M28_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M29_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M30_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M31_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M32_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M33_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M34_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M35_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M36_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M37_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M38_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M39_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M40_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M41_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M42_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M43_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M44_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M45_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M46_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M47_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M48_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M49_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M50_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M51_ARESETN] [get_bd_pins processing_system7_0_axi_periph/M52_ARESETN] [get_bd_pins processing_system7_0_axi_periph/S00_ARESETN] [get_bd_pins rst_processing_system7_0_100M/peripheral_aresetn]

  # Create address segments
  create_bd_addr_seg -range 0x20000000 -offset 0x0 [get_bd_addr_spaces axi_dma_0/Data_MM2S] [get_bd_addr_segs processing_system7_0/S_AXI_HP0/HP0_DDR_LOWOCM] SEG_processing_system7_0_HP0_DDR_LOWOCM
  create_bd_addr_seg -range 0x1000 -offset 0x40000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_0/S_AXI/Mem0] SEG_axi_bram_ctrl_0_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x54000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_10/S_AXI/Mem0] SEG_axi_bram_ctrl_10_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x56000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_11/S_AXI/Mem0] SEG_axi_bram_ctrl_11_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x58000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_12/S_AXI/Mem0] SEG_axi_bram_ctrl_12_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x5A000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_13/S_AXI/Mem0] SEG_axi_bram_ctrl_13_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x5C000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_14/S_AXI/Mem0] SEG_axi_bram_ctrl_14_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x5E000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_15/S_AXI/Mem0] SEG_axi_bram_ctrl_15_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x60000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_16/S_AXI/Mem0] SEG_axi_bram_ctrl_16_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x62000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_17/S_AXI/Mem0] SEG_axi_bram_ctrl_17_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x64000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_18/S_AXI/Mem0] SEG_axi_bram_ctrl_18_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x66000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_19/S_AXI/Mem0] SEG_axi_bram_ctrl_19_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x42000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_1/S_AXI/Mem0] SEG_axi_bram_ctrl_1_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x68000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_20/S_AXI/Mem0] SEG_axi_bram_ctrl_20_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x6A000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_21/S_AXI/Mem0] SEG_axi_bram_ctrl_21_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x6C000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_22/S_AXI/Mem0] SEG_axi_bram_ctrl_22_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x6E000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_23/S_AXI/Mem0] SEG_axi_bram_ctrl_23_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x70000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_24/S_AXI/Mem0] SEG_axi_bram_ctrl_24_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x72000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_25/S_AXI/Mem0] SEG_axi_bram_ctrl_25_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x74000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_26/S_AXI/Mem0] SEG_axi_bram_ctrl_26_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x76000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_27/S_AXI/Mem0] SEG_axi_bram_ctrl_27_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x78000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_28/S_AXI/Mem0] SEG_axi_bram_ctrl_28_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7A000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_29/S_AXI/Mem0] SEG_axi_bram_ctrl_29_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x44000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_2/S_AXI/Mem0] SEG_axi_bram_ctrl_2_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7C000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_30/S_AXI/Mem0] SEG_axi_bram_ctrl_30_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_31/S_AXI/Mem0] SEG_axi_bram_ctrl_31_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E002000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_32/S_AXI/Mem0] SEG_axi_bram_ctrl_32_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E004000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_33/S_AXI/Mem0] SEG_axi_bram_ctrl_33_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E006000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_34/S_AXI/Mem0] SEG_axi_bram_ctrl_34_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E008000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_35/S_AXI/Mem0] SEG_axi_bram_ctrl_35_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E00A000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_36/S_AXI/Mem0] SEG_axi_bram_ctrl_36_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E00C000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_37/S_AXI/Mem0] SEG_axi_bram_ctrl_37_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E00E000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_38/S_AXI/Mem0] SEG_axi_bram_ctrl_38_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E010000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_39/S_AXI/Mem0] SEG_axi_bram_ctrl_39_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x46000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_3/S_AXI/Mem0] SEG_axi_bram_ctrl_3_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E012000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_40/S_AXI/Mem0] SEG_axi_bram_ctrl_40_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E014000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_41/S_AXI/Mem0] SEG_axi_bram_ctrl_41_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E016000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_42/S_AXI/Mem0] SEG_axi_bram_ctrl_42_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E018000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_43/S_AXI/Mem0] SEG_axi_bram_ctrl_43_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E01A000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_44/S_AXI/Mem0] SEG_axi_bram_ctrl_44_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E01C000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_45/S_AXI/Mem0] SEG_axi_bram_ctrl_45_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E01E000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_46/S_AXI/Mem0] SEG_axi_bram_ctrl_46_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E020000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_47/S_AXI/Mem0] SEG_axi_bram_ctrl_47_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E022000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_48/S_AXI/Mem0] SEG_axi_bram_ctrl_48_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E024000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_49/S_AXI/Mem0] SEG_axi_bram_ctrl_49_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x48000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_4/S_AXI/Mem0] SEG_axi_bram_ctrl_4_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x4A000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_5/S_AXI/Mem0] SEG_axi_bram_ctrl_5_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x4C000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_6/S_AXI/Mem0] SEG_axi_bram_ctrl_6_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x4E000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_7/S_AXI/Mem0] SEG_axi_bram_ctrl_7_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x50000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_8/S_AXI/Mem0] SEG_axi_bram_ctrl_8_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x52000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_9/S_AXI/Mem0] SEG_axi_bram_ctrl_9_Mem0
  create_bd_addr_seg -range 0x1000 -offset 0x7E026000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_bram_ctrl_results/S_AXI/Mem0] SEG_axi_bram_ctrl_results_Mem0
  create_bd_addr_seg -range 0x10000 -offset 0x40400000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs axi_dma_0/S_AXI_LITE/Reg] SEG_axi_dma_0_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x43C00000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs needlemanWunsch_0/s_axi_AXILiteS/Reg] SEG_needlemanWunsch_0_Reg
  

  # Restore current instance
  current_bd_instance $oldCurInst

  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


