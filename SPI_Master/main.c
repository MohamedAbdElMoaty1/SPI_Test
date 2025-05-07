/*
 * main.c
 *
 *  Created on: Sep 17, 2024
 *      Author: ASUS
 */
#include "STD_TYPES.h"
#include "ErrType.h"

#include "PORT_interface.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "SPI_interface.h"

uint8 Local_u8ReceivedData[] = "Hello"  ;


void main(void)
{

	PORT_voidInit();
	CLCD_voidInit();
	SPI_voidMasterInit();

    SPI_voidSend_Buffer(Local_u8ReceivedData);

	while(1)
	{

	}
}

/*
   SPI_u8SendByte('A');
 * */
