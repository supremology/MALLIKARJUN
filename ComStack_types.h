/*
 *  Main Header file
 *  ComStack_Types.h
 *  Created on: 11-Jun-2019
 *  Author    : MALLIKARJUN
 */

#ifndef COMSTACK_TYPES_H_
#define COMSTACK_TYPES_H_
#include "ComStack_Cfg.h"				/* Binding Header file ComStack_Cfg */
#include "Std_Types.h"					/* Binding Header file Std_Types */

typedef uint8 PduIdType ;			    /* API specification  in PDU types Initialized  to 8 bit*/

typedef uint8 PduLengthType;			/* API specification  in PDU length Initialized to 8 bit*/


typedef struct DATA						/*PduInfoType DATA Initialization */
{
	uint8* SduDataPtr;					/*Pointer to the SDU */
	PduLengthType SduLength;			/*Length of the SDU in bytes */

}PduInfoType;



typedef uint8 PNCHandleType;			/* Used to store the identifier of a partial network cluster its 8 bit long*/


typedef enum							/*TPParameterType data Initialization*/
{
	TP_STMIN=0x00,						/*Separation Time*/
	TP_BS =0x01,						/*Block Size */
	TP_BC =0x02,						/* The Band width control parameter used in FlexRay */

}TPParameterType ;

typedef enum							/*BufferReq_ReturnType data Initialization*/
{
	BUFREQ_OK=0x00,						/*Buffer request accomplished successful*/
	BUFREQ_E_NOT_OK=0x01, 				/*Buffer request not successful*/
	BUFREQ_E_BUSY=0x02,					/* Temporarily no buffer available*/
	BUFREQ_E_OVFL=0x03,					/* No Buffer of the required length can be provided*/

}BufReq_ReturnType ;

typedef enum							/*TpDataStateType buffer data Initialization*/
{
	TP_DATACONF=0x00 ,					/*TP_DATACONF indicates that all data opied */
	TP_DATARETRY =0x01,					/* TP_DATARETRY */
	TP_CONFPENDING=0x02,				/*TP_CONFPENDING indicates that the previously copied data must remain in the TP*/

}TpDataStateType ;

typedef enum							/*IcomSwitch_ErrorType data Initialization*/
{
	ICOM_SWITCH_E_OK=0x00,				/*The activation of Pretended Networking was successful*/
	ICOM_SWITCH_E_FAILED=0x01, 			/*The activation of Pretended Networking was not */

}IcomSwitch_ErrorType;

#endif

