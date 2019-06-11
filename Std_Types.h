/*
 *  Main Header file
 *  Std_Types.h
 *  Created on: 11-Jun-2019
 *  Author    : MALLIKARJUN
 */


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include"Platform_Types.h" 			/* Binding Header file Platform_Types */

typedef struct std{					/*Std_VersionInfoType data Initialization*/
	uint16 vendorID;				/*vendorID is 16 bit unsigned long */
	uint16 moduleID;				/*moduleID is 16 bit unsigned long */
	uint8 sw_major_version;			/*sw_minor_version is 8 bit unsigned long */
} Std_VersionInfoType;

#endif

