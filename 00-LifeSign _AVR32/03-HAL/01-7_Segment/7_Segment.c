/******************** LifeSign ********************/

/* 7-SEGMENT WITH DECODER "COMMON CATHOD", Decoder : 74LS48 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"


void void_HAL_Seven_Segment_INIT ()
{

	DIO_SetPinDirection(DIO_u8PORTA,DIO_u8PIN0,DIO_u8OUTPUT); //A
	DIO_SetPinDirection(DIO_u8PORTA,DIO_u8PIN1,DIO_u8OUTPUT); //B
	DIO_SetPinDirection(DIO_u8PORTA,DIO_u8PIN2,DIO_u8OUTPUT); //C
	DIO_SetPinDirection(DIO_u8PORTA,DIO_u8PIN3,DIO_u8OUTPUT); //D
	
	DIO_SetPinDirection(DIO_u8PORTB,DIO_u8PIN0,DIO_u8OUTPUT); //A
	DIO_SetPinDirection(DIO_u8PORTB,DIO_u8PIN1,DIO_u8OUTPUT); //B
	DIO_SetPinDirection(DIO_u8PORTB,DIO_u8PIN2,DIO_u8OUTPUT); //C
	DIO_SetPinDirection(DIO_u8PORTB,DIO_u8PIN3,DIO_u8OUTPUT); //D	
	
	DIO_SetPinDirection(DIO_u8PORTC,DIO_u8PIN0,DIO_u8OUTPUT); //A
	DIO_SetPinDirection(DIO_u8PORTC,DIO_u8PIN1,DIO_u8OUTPUT); //B
	DIO_SetPinDirection(DIO_u8PORTC,DIO_u8PIN2,DIO_u8OUTPUT); //C
	DIO_SetPinDirection(DIO_u8PORTC,DIO_u8PIN3,DIO_u8OUTPUT); //D	
	
	DIO_SetPinDirection(DIO_u8PORTD,DIO_u8PIN0,DIO_u8OUTPUT); //A
	DIO_SetPinDirection(DIO_u8PORTD,DIO_u8PIN1,DIO_u8OUTPUT); //B
	DIO_SetPinDirection(DIO_u8PORTD,DIO_u8PIN2,DIO_u8OUTPUT); //C
	DIO_SetPinDirection(DIO_u8PORTD,DIO_u8PIN3,DIO_u8OUTPUT); //D	

	/* Enable */
	DIO_SetPinDirection(DIO_u8PORTB,DIO_u8PIN0,DIO_u8OUTPUT); //EN1
	DIO_SetPinDirection(DIO_u8PORTB,DIO_u8PIN1,DIO_u8OUTPUT); //EN2
}

void void_HAL_Seven_Segment_ENABLE1()
{	
	DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN0,DIO_u8HIGH);
}


void void_HAL_Seven_Segment_ENABLE2()
{	
	DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN1,DIO_u8HIGH);
}


void void_HAL_Seven_Segment_DISABLE1()
{
	DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN0,DIO_u8LOW);
}


void void_HAL_Seven_Segment_DISABLE2()
{
	DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN1,DIO_u8LOW);
}

void void_HAL_Seven_Segment_WRITE_NO (u8 u8PortIdCopy ,u8 Number)
{
	
	/******************************************/
	/* decimal  binary  7-seg code [abcdefg]  */
	/* 	  0		0000	 1111110			  */
	/* 	  1		0001	 0110000			  */
	/* 	  2		0010	 1101101			  */
	/* 	  3		0011	 1111001			  */
	/* 	  4		0100	 0110011		  	  */
	/* 	  5		0101	 1011011			  */
	/* 	  6		0110	 0011111			  */
	/* 	  7		0111	 1110000			  */
	/* 	  8		1000	 1111111			  */
	/* 	  9		1001	 1110011			  */
	/******************************************/
	if (Number < 10)
	{
		switch (u8PortIdCopy)
				{
					case DIO_u8PORTA:
							DIO_SetPinValue(DIO_u8PORTA,DIO_u8PIN0,GET_BIT(Number,0)); //A
							DIO_SetPinValue(DIO_u8PORTA,DIO_u8PIN1,GET_BIT(Number,1)); //B
							DIO_SetPinValue(DIO_u8PORTA,DIO_u8PIN2,GET_BIT(Number,2)); //C
							DIO_SetPinValue(DIO_u8PORTA,DIO_u8PIN3,GET_BIT(Number,3)); //D
					break;
					case DIO_u8PORTB:
							DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN0,GET_BIT(Number,0)); //A
							DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN1,GET_BIT(Number,1)); //B
							DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN2,GET_BIT(Number,2)); //C
							DIO_SetPinValue(DIO_u8PORTB,DIO_u8PIN3,GET_BIT(Number,3)); //D
					break;
					case DIO_u8PORTC:
							DIO_SetPinValue(DIO_u8PORTC,DIO_u8PIN0,GET_BIT(Number,0)); //A
							DIO_SetPinValue(DIO_u8PORTC,DIO_u8PIN1,GET_BIT(Number,1)); //B
							DIO_SetPinValue(DIO_u8PORTC,DIO_u8PIN2,GET_BIT(Number,2)); //C
							DIO_SetPinValue(DIO_u8PORTC,DIO_u8PIN3,GET_BIT(Number,3)); //D
					break;
					case DIO_u8PORTD:
							DIO_SetPinValue(DIO_u8PORTD,DIO_u8PIN0,GET_BIT(Number,0)); //A
							DIO_SetPinValue(DIO_u8PORTD,DIO_u8PIN1,GET_BIT(Number,1)); //B
							DIO_SetPinValue(DIO_u8PORTD,DIO_u8PIN2,GET_BIT(Number,2)); //C
							DIO_SetPinValue(DIO_u8PORTD,DIO_u8PIN3,GET_BIT(Number,3)); //D
					break;
				}
	}
}		
