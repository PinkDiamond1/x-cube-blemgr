/**
  ******************** (C) COPYRIGHT 2022 STMicroelectronics *******************
  * @file    readme.txt
  * @author  System Research & Applications Team - Catania Lab.
  * @version V1.1.0
  * @date    16-September-2022
  * @brief   Description of the Application FW.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

Application Description

 The SensorDataTransmit is a sample application to help the user to set and configure bluetooth connectivity from board to mobile application (such as ST BLE Sensor) according to STM32_BLE_Manager middleware.

 This firmware package includes Components Device Drivers, Board Support Package
 and example application for the following STMicroelectronics elements:
 - X-NUCLEO-BNRG2A1 Bluetooth Low energy expansion boards
 - NUCLEO-L476RG NUCLEO board

 The Example application initizializes all the Components and Library creating 3 Custom Bluetooth services:
 - The first service exposes:
   - the HW characteristics related to randomly Temperature, Humidity,
     Pressure values and LED status.
   - the SW characteristic: the quaternions randomly generated 
 - The second Service exposes the console services where we have stdin/stdout and stderr capabilities
 - The last Service is used for configuration purpose

 The example application allows the user to control the initialization phase via UART.
 Launch a terminal application and set the UART port to 115200 bps, 8 bit, No Parity, 1 stop bit.
 
 This example must be used with the related ST BLE Sensor Android/iOS application available on Play/itune store,
 in order to read the sent information by Bluetooth Low Energy protocol
 
                   ---------------------------------------------
                   | Important Hardware Additional Information |
			       ---------------------------------------------
 BlueNRG-2 library does not work with the stock firmware that is loaded in the BLE module of X-NUCLEO-BNRG2A1 expansion board.
 For this reason:
  - first of all, it is needed to solder on X-NUCLEO-BNRG2A1, if it is not soldered, a 0 Ohm resistor at R117
  - then you can use a standard ST-Link V2-1 with 5 jumper wires female-female together with STSW-BNRGFLASHER software tool
   (currently available only for Windows PC) in order to update the firmware of the BLE module of X-NUCLEO-BNRG2A1.
 Read user manual for more details.
 
@par Hardware and Software environment

  - This example runs on Sensor expansion board attached to STM32L476RG devices
    can be easily tailored to any other supported device and development board.
    
  - This example must be used with the related ST BLE Sensor Android/iOS application available on Play/itune store,
    in order to read the sent information by Bluetooth Low Energy protocol
	
  - Inside the Binary Directory there are the following binaries:
    - STM32L476RG-Nucleo_SensorDataTransmit_v1.1.0.bin

@par STM32Cube packages:
  - STM32L4xx drivers from STM32CubeL4 V1.17.1
@par X-CUBE packages:
  - X-CUBE-BLE2 V3.3.0

@par How to use it ? 

This package contains projects for 3 IDEs viz. IAR, Keil �Vision 5 and Integrated Development Environment for STM32. 
In order to make the  program work, you must do the following:
 - WARNING: before opening the project with any toolchain be sure your folder
   installation path is not too in-depth since the toolchain may report errors
   after building.

For IAR:
 - Open IAR toolchain (this firmware has been successfully tested with Embedded Workbench V9.20.1).
 - Open the IAR project file EWARM\Project.eww
 - Rebuild all files 

For Keil �Vision 5:
 - Open Keil �Vision 5 toolchain (this firmware has been successfully tested with MDK-ARM Professional Version: 5.37.0).
 - Open the �Vision project file MDK-ARM\SensorDataTransmit.uvprojx
 - Rebuild all files
 
For Integrated Development Environment for STM32:
 - Open STM32CubeIDE (this firmware has been successfully tested with Version 1.10.1).
 - Set the default workspace proposed by the IDE (please be sure that there are not spaces in the workspace path).
 - Press "File" -> "Import" -> "Existing Projects into Workspace"; press "Browse" in the "Select root directory" and choose the path where the System
   Workbench project is located (it should be STM32CubeIDE). 
 - Rebuild all files

