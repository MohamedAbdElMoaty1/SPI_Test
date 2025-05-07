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

static uint8 Local_u8ReceivedData[5] = {0} ;
uint8 Local_u8Counter = 0 ;

void main(void)
{

	PORT_voidInit();
	CLCD_voidInit();

	SPI_voidSalveInit();


	while(1)
	{
		for (Local_u8Counter = 0; Local_u8Counter < 5; Local_u8Counter++)  // Adjust the loop count based on expected data
		{
			SPI_voidReceive_Buffer(Local_u8ReceivedData);
		}
		CLCD_voidGoToXY(0,0);
		CLCD_u8SendString((const char*)Local_u8ReceivedData);

	}
}
/*
 *
 * Local_u8ReceivedData = SPI_u8ReceiveByte();
   CLCD_voidGoToXY(0,0);
   CLCD_voidSendData(Local_u8ReceivedData);
 *
 * */
