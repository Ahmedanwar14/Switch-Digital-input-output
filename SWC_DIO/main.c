/*
 * main.c

 *
 *  Created on: Feb 21, 2020
 *      Author: Anwar
 */

#define F_CPU 8000000Ul
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_INT.h"
#include<avr/delay.h>

/*

void main()
{
	DIO_vidSetPortDir(PORTD,OUTPUT);

	while(1)
	{
		for(u8 loopc=0;loopc<4;loopc++)
		{
			DIO_vidSetPortVal(PORTD,(0X80>>loopc)|(0X01<<loopc));
			_delay_ms(200);

		}
		for(u8 loopc=4;loopc>0;loopc--)
		{
			DIO_vidSetPortVal(PORTD,(0X80>>loopc)|(0X01<<loopc));
			_delay_ms(200);
		}

	}


}

*/

void main()
{
DIO_vidSetPinDir(PORTA,PIN0,INPUT);
DIO_vidEnablePullUpRes(PORTA,PIN0);
DIO_vidSetPortDir(PORTD,OUTPUT);
u8 Pin_Val=DIO_u8GetPinVal(PORTA,PIN0);
if(Pin_Val==0)
{
	DIO_vidSetPortVal(PORTD,HIGH);
	_delay_ms(500);
	DIO_vidSetPortVal(PORTD,LOW);
}
else if(Pin_Val!=0)
{
	DIO_vidSetPortVal(PORTD,LOW);
}
else
{
	/*Wrong Input*/
}
}
