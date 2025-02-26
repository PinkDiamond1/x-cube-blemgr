/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    BLE_Implementation.h
  * @author  System Research & Applications Team - Catania Lab.
  * @version 1.3.0
  * @date    04-November2022
  * @brief   BLE Implementation header template file.
  *          This file should be copied to the application folder and renamed
  *          to BLE_Implementation.h.
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

/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _BLE_IMPLEMENTATION_H_
#define _BLE_IMPLEMENTATION_H_

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

/**
* User can added here the header file for the selected BLE features.
* For example:
* #include "BLE_Environmental.h"
* #include "BLE_Inertial.h"
*/

#include "BLE_Environmental.h"

#include "BLE_Led.h"

#include "BLE_SensorFusion.h"

/* Exported Defines --------------------------------------------------------*/
#define STM32L4xx

/* For Help Command */
#define Help      1
/* Enable/Disable BlueNRG config extend services */
#define ENABLE_EXT_CONFIG      1
/* For Set Certificate Commnad */
#define SetCert      0
/* Enable/Disable BlueNRG config services */
#define ENABLE_CONFIG      1
/* For Change Secure PIN Command */
#define ChangePin      0
/* Enable/Disable Secure Connection */
#define ENABLE_SECURE_CONNECTION      0
/* For Power off Command */
#define PowerOff      0
/* For Set sensor config */
#define SensorConfig      0
/* For Set Date Command */
#define SetDate      0
/* For PowerStatus Command */
#define PowerStatus      0
/* Number of audio channels (Max audio channels 4) */
#define AUDIO_CHANNELS_NUMBER      1
/* For Reading the Flash Banks Fw Ids */
#define ReadBanksFwId      0
/* For Set Wi-Fi Command */
#define SetWiFi      0
/* Number of the general purpose features to use */
#define NUM_GENERAL_PURPOSE      1
/* Enable/Disable magnetometer data (Disable= 0- Enable=1) */
#define ENABLE_MAG_DATA      1
/* For Clear Secure Data Base Command */
#define ClearDB      0
/* Secure PIN */
#define SECURE_PIN      123456
/* For Set Time Command */
#define SetTime      0
/* For Reboot on DFU Command */
#define RebootOnDFUMode      0
/* For Read Certificate Command */
#define ReadCert      0
/* Enable/Disable pressure data (Disable= 0- Enable=1) */
#define ENABLE_ENV_PRESSURE_DATA      1
/* For Set board Name Command */
#define SetName      0
/* Enable/Disable Random Secure PIN */
#define ENABLE_RANDOM_SECURE_PIN      0
/* For Info Command */
#define Info      1
/* Enable/Disable BlueNRG console services */
#define ENABLE_CONSOLE      1
/* For Custom Command */
#define ReadCustomCommands      0
/* Enable/Disable giroscope data (Disable= 0- Enable=1) */
#define ENABLE_GYRO_DATA      1
/* For UID Command */
#define UidCommand      1
/* Enable/Disable humidity data (Disable= 0- Enable=1) */
#define ENABLE_ENV_HUMIDITY_DATA      1
/* Size of the general purpose feature */
#define GENERAL_PURPOSE_SIZE_1      3
/* Number of quaternion to send (max value 3) */
#define NUMBER_OF_QUATERNION      1
/* For VersionFw Command */
#define VersionFw      1
/* Enable/Disable number of temperature (0, 1, 2) */
#define ENABLE_ENV_TEMPERATURE_DATA      1
/* For Swapping the Flash Banks */
#define BanksSwap      0
/* Enable/Disable accelerometer data (Disable= 0- Enable=1) */
#define ENABLE_ACC_DATA      1

/* USER CODE BEGIN 1 */

/* Select the used hardware platform
 *
 * STEVAL-WESU1                         --> BLE_MANAGER_STEVAL_WESU1_PLATFORM
 * STEVAL-STLKT01V1 (SensorTile)        --> BLE_MANAGER_SENSOR_TILE_PLATFORM
 * STEVAL-BCNKT01V1 (BlueCoin)          --> BLE_MANAGER_BLUE_COIN_PLATFORM
 * STEVAL-IDB008Vx                      --> BLE_MANAGER_STEVAL_IDB008VX_PLATFORM
 * STEVAL-BCN002V1B (BlueTile)          --> BLE_MANAGER_STEVAL_BCN002V1_PLATFORM
 * STEVAL-MKSBOX1V1 (SensorTile.box)    --> BLE_MANAGER_SENSOR_TILE_BOX_PLATFORM
 * DISCOVERY-IOT01A                     --> BLE_MANAGER_DISCOVERY_IOT01A_PLATFORM
 * STEVAL-STWINKT1                      --> BLE_MANAGER_STEVAL_STWINKT1_PLATFORM
 * STEVAL-STWINKT1B                     --> BLE_MANAGER_STEVAL_STWINKT1B_PLATFORM
 * STEVAL_STWINBX1                      --> BLE_MANAGER_STEVAL_STWINBX1_PLATFORM
 * SENSOR_TILE_BOX_PRO                  --> BLE_MANAGER_SENSOR_TILE_BOX_PRO_PLATFORM
 * STEVAL_ASTRA1                        --> BLE_MANAGER_STEVAL_ASTRA1_PLATFORM
 * STM32NUCLEO Board                    --> BLE_MANAGER_NUCLEO_PLATFORM
 * STM32F446RE_NUCLEO Board             --> BLE_MANAGER_STM32F446RE_NUCLEO_PLATFORM
 * STM32L053R8_NUCLEO Board             --> BLE_MANAGER_STM32L053R8_NUCLEO_PLATFORM
 * STM32L476RG_NUCLEO Board             --> BLE_MANAGER_STM32L476RG_NUCLEO_PLATFORM
 * STM32F401RE_NUCLEO Board             --> BLE_MANAGER_STM32F401RE_NUCLEO_PLATFORM
 * Not defined platform					--> BLE_MANAGER_UNDEF_PLATFORM
 *
 * For example:
 * #define BLE_MANAGER_USED_PLATFORM	BLE_MANAGER_NUCLEO_PLATFORM
 *
*/

/* Used platform */
#define BLE_MANAGER_USED_PLATFORM       BLE_MANAGER_STM32L476RG_NUCLEO_PLATFORM

/* STM32 Unique ID */
#define BLE_STM32_UUID          UID_BASE

/* STM32 MCU_ID */
#ifdef DBGMCU_BASE
	#define BLE_STM32_MCU_ID        ((uint32_t *)DBGMCU_BASE)
#else
	#define BLE_STM32_MCU_ID        ((uint32_t *)0x00000000UL)
#endif

/* STM32  Microcontrolles type */
#define BLE_STM32_MICRO "STM32L4xx"

/* Package Version firmware */
#define BLE_VERSION_FW_MAJOR  '1'
#define BLE_VERSION_FW_MINOR  '3'
#define BLE_VERSION_FW_PATCH  '0'

/* Firmware Package Name */
#define BLE_FW_PACKAGENAME    "X-CUBE-BLEMGR"

/* USER CODE END 1 */

/* Feature mask for Temperature1 */
#define FEATURE_MASK_TEMP1 0x00040000
/* Feature mask for Temperature2 */
#define FEATURE_MASK_TEMP2 0x00010000
/* Feature mask for Pressure */
#define FEATURE_MASK_PRESS 0x00100000
/* Feature mask for Humidity */
#define FEATURE_MASK_HUM   0x00080000

/* Feature mask for LED */
#define FEATURE_MASK_LED 0x20000000

/* Feature mask for Sensor fusion short precision */
#define FEATURE_MASK_SENSORFUSION_SHORT 0x00000100

/* W2ST command for asking the calibration status */
#define W2ST_COMMAND_CAL_STATUS 0xFF
/* W2ST command for resetting the calibration */
#define W2ST_COMMAND_CAL_RESET  0x00
/* W2ST command for stopping the calibration process */
#define W2ST_COMMAND_CAL_STOP   0x01

/* Exported Variables ------------------------------------------------------- */

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/* Exported functions ------------------------------------------------------- */
extern void BLE_InitCustomService(void);
extern void BLE_SetCustomAdvertiseData(uint8_t *manuf_data);
extern void BluetoothInit(void);
extern void DisconnectionCompletedFunction(void);
extern void ConnectionCompletedFunction(uint16_t ConnectionHandle, uint8_t Address_Type, uint8_t addr[6]);
extern void AttrModConfigFunction(uint8_t * att_data, uint8_t data_length);
extern void PairingCompletedFunction(uint8_t PairingStatus);
extern void SetConnectableFunction(uint8_t *ManufData);
extern void AciGattTxPoolAvailableEventFunction(void);
extern void HardwareErrorEventHandlerFunction(uint8_t Hardware_Code);
extern uint32_t DebugConsoleParsing(uint8_t * att_data, uint8_t data_length);
extern void WriteRequestConfigFunction(uint8_t * att_data, uint8_t data_length);

extern void ReadRequestEnvFunction(int32_t *Press,uint16_t *Hum,int16_t *Temp1,int16_t *Temp2);

/**********************************************************************************************
 * Callback functions prototypes to manage the extended configuration characteristic commands *
 **********************************************************************************************/
extern void ExtExtConfigUidCommandCallback(uint8_t **UID);
extern void ExtConfigVersionFwCommandCallback(uint8_t *Answer);
extern void ExtConfigInfoCommandCallback(uint8_t *Answer);
extern void ExtConfigHelpCommandCallback(uint8_t *Answer);

/*************************************************************
 * Callback functions prototypes to manage the notify events *
 *************************************************************/

extern void NotifyEventEnv(BLE_NotifyEvent_t Event);

extern void NotifyEventLed(BLE_NotifyEvent_t Event);

extern void NotifyEventSensorFusion(BLE_NotifyEvent_t Event);

/* USER CODE BEGIN 3 */

/* USER CODE END 3 */

#ifdef __cplusplus
}
#endif

#endif /* _BLE_IMPLEMENTATION_H_ */

