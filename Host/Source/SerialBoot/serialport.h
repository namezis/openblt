/************************************************************************************//**
* \file         serialport.h
* \brief        Serial port header file.
* \ingroup      SerialBoot
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2017  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/
#ifndef SERIALPORT_H
#define SERIALPORT_H

#ifdef __cplusplus
extern "C" {
#endif

/****************************************************************************************
* Include files
****************************************************************************************/
#include <stdint.h>                         /* for standard integer types              */
#include <stdbool.h>                        /* for boolean type                        */


/****************************************************************************************
* Typde definitions
****************************************************************************************/
/** \brief Enumaration of the supported baudrates. */
typedef enum
{
  SERIALPORT_BR9600   = 0,                  /**< 9600 bits/sec                         */
  SERIALPORT_BR19200  = 1,                  /**< 19200 bits/sec                        */
  SERIALPORT_BR38400  = 2,                  /**< 38400 bits/sec                        */
  SERIALPORT_BR57600  = 3,                  /**< 57600 bits/sec                        */
  SERIALPORT_BR115200 = 4                   /**< 115200 bits/sec                       */
} tSerialPortBaudrate;


/****************************************************************************************
* Function prototypes
****************************************************************************************/
bool SerialPortOpen(char *portname, tSerialPortBaudrate baudrate);
void SerialPortClose(void);
bool SerialPortWrite(uint8_t *data, uint32_t length);
bool SerialPortRead(uint8_t *data, uint32_t length);

#ifdef __cplusplus
}
#endif

#endif /* SERIALPORT_H */
/********************************* end of serialport.h *********************************/
