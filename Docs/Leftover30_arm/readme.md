#Leftover30_ARM 

##Hardware modification:
The original Leftover30 used surface mount jumpers to skip RGB LEDs on the PCBs, I used the same implementation but found out that this does not work with SK6812MINI-E LEDs. To make all 8 RGB LEDs addressable, the jumpers must be **opened**. To accomplish this the traces next to them need to be cut (see below) Instead we must disable these in firmware (See commented parts of the config.h). 

![cut trace](https://i.imgur.com/fmm8UqD.jpg)

##Bill of Materials

| Qty 	| Reference(s) 	| Value/Part No. 	| Footprint 	|
|-	|-	|-	|-	|
| 2 	| C101, C102 	| 1uF 	| 0603 	|
| 2 	| C103, C109 	| 10uF 	| 0603 	|
| 2 	| C104, C105 	| 4.7nF 	| 0603 	|
| 5 	| C106, C107, C108, C110, C111 	| .1uF 	| 0603 	|
| 1 	| C112 	| 4.7uF 	| 0603 	|
| 36 	| D101, D102, D103, D104, D105, D106, D107, D108, D109, D110, D111, D112, D113, D114, D115, D116, D117, D118, D119, D120, D122, D127, D128, D129, D130, D131, D132, D133, D134, D135, D136, D137, D138, D139, D140, D141 	| 1N4148 	| SOD123 	|
| 8 	| D123, D124, D125, D126, D142, D143, D144, D145 	| SK6812MINI 	| SK6812MINI-E 	|
| 1 	| D146 	| RB060M-60TR 	| SOD123 	|
| 1 	| D147 	| SMF9.0CA 	| SOD123 	|
| 2 	| D148, D149 	| LED_Small 	| 3MM  	|
| 1 	| D150 	| 1n4148 	| SOD123 	|
| 1 	| F101 	| 500mA 	| 0603 	|
| 1 	| J101 	| TYPE-C-31-M-12 	| TYPE-C-31-M-12 	|
| 37 	| K101 	| MX SWITCH 	| MX PCB Mount 	|
| 1 	| Q101 	| DTC123J 	| SOT23 	|
| 3 	| R101, R102, R107 	| 100k 	| 0603 	|
| 2 	| R103, R104 	| 5.1k 	| 0603 	|
| 2 	| R105, R106 	| 330 	| 0603 	|
| 1 	| R108 	| 1M 	| 0603 	|
| 1 	| R109 	| 10k 	| 0603 	|
| 2 	| SW101 	| Rotary_Encoder_Switch 	| EC11 	|
| 1 	| SW103 	| SW_Push 	| TL3342 	|
| 1 	| U101 	| MCP1700-3002E_SOT23 	| SOT23 	|
| 1 	| U102 	| STM32F072CBTx 	| LQFP-48_7x7mm_P0.5mm 	|

##Schematic
!(https://i.imgur.com/Mmo4RV2.png)