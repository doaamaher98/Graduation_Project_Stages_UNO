/***************** LifeSign *******************/
#ifndef MCAL_ADC_PRIVATE_H_
#define MCAL_ADC_PRIVATE_H_

/* Registers */
#define ADMUX  *((volatile u8*)0x27)

#define ADCSRA   *((volatile u8*)0x26)
#define SFIOR   *((volatile u8*)0x50)

#define ADCL    *((volatile u8*)0x24)
#define ADCH   	*((volatile u8*)0x25)

#define ADCLH   *((volatile u16*)0x24)


#endif
