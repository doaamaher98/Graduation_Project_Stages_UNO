
#ifndef DIO_INT_H_
#define DIO_INT_H_


/********************************************************/
/*******************Public Definitions*******************/
/********************************************************/

/* Port Defines */
#define DIO_u8PORTA		0
#define DIO_u8PORTB		1
#define DIO_u8PORTC		2
#define DIO_u8PORTD		3

/* PIN Defines */
#define DIO_u8PIN0		0
#define DIO_u8PIN1		1
#define DIO_u8PIN2		2
#define DIO_u8PIN3		3
#define DIO_u8PIN4		4
#define DIO_u8PIN5		5
#define DIO_u8PIN6		6
#define DIO_u8PIN7		7



/* Digital I/O Value => PINS */
#define DIO_u8HIGH		1
#define DIO_u8LOW		0

/* Digital I/O Direction => PORT */
#define DIO_u8INPUT		0x00
#define DIO_u8OUTPUT	0xFF

/* IO Pins Function */
void DIO_SetPinValue(u8 u8PortIdCopy , u8 u8PinIdCopy, u8 u8PinValCopy);

void DIO_SetPinDirection(u8 u8PortIdCopy, u8 u8PinIdCopy, u8 u8PinDirCopy);

u8 DIO_GetPinValue(u8 u8PortIdCopy, u8 u8PinIdCopy);

/* IO Ports Functions */
void DIO_SetPortDirection(u8 u8PortId, u8 u8PortDir);

void DIO_SetPortValue(u8 u8PortId, u8 u8PortVal);


#endif /* DIO_INT_H_ */
