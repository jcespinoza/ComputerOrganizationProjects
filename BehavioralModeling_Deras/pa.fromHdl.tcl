
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name BehavioralModeling_Deras -dir "C:/Users/JuanCarlos/Projects/GitHub/ComputerOrganizarionProjects/BehavioralModeling_Deras/planAhead_run_1" -part xc3s500eft256-5
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "behavioral_top.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {seven_segment.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {input_detect.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {adder.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {behavioral_top.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top behavioral_top $srcset
add_files [list {behavioral_top.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500eft256-5
