/*
 *  Main Header file
 *  Platform_Types.h
 *  Created on: 11-Jun-2019
 *  Author    : MALLIKARJUN
 */


#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_


#define FALSE  			0					/*define boolean DATA Type declaration */

#define TRUE  		    1					/*define boolean DATA Type declaration */

#define uint8 			unsigned char		/*define 8 bit Unsigned character Type Data declaration */

#define uint16			unsigned short		/*define 16 bit Unsigned short Type Data declaration */

#define sint8 			signed char			/*define 8 bit signed character Type Data declaration */

#define sint16 			signed short		/*define 16 bit signed short Type Data declaration */

#define uint8_least     unsigned char		/*define 8 bit_least Unsigned character Type Data declaration */

#define uint16_least 	unsigned short		/*define 16 bit_least Unsigned short Type Data declaration */

#define sint8_least 	signed char			/*define 8 bit_least signed character Type Data declaration */

#define sint16_least 	signed short		/*define 16 bit_least signed short Type Data declaration */

#define float32   		float				/*define 16 bit float Type Data declaration */

enum CPU_TYPE  								/* CPU_TYPE DATA Initialization */
{
	CPU_TYPE=0x08,							/* 8 bit processor	*/

};
enum CPU_BIT_ORDER {					 	/* CPU_BIT ORDER DATA Initialization */
	MSB_FIRST=0,							/*The most significant bit is the first bit of the bit sequence */
	LSB_FIRST=1};						     /*The least significant bit is the first bit of the bit sequence */

enum CPU_BYTE_ORDER {						/*  CPU_BYTE ORDER DATA Initialization */
	HIGH_BYTE_FIRST=0x00,					/* Within uint16, the high byte is located before the low byte*/
	LOW_BYTE_FIRST=0x01};					/* Within uint16, the low byte is located before the high byte*/

#endif
