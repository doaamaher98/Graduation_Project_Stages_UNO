/***************** LifeSign *******************/
#ifndef MCAL_ADC_CONFIG_H_
#define MCAL_ADC_CONFIG_H_

/* Prototypes */
void void_MCAL_ADC_INIT(void);

void void_MCAL_ADC_StartConvertion(u8 ADC_Channel);

u16 u16_MCAL_ADC_GetResult(void);


/*  Configure the voltage reference Range :
	1- ADC_VOLTAGE_REF_VCC
	2- ADC_VOLTAGE_REF_AREF
	3- ADC_VOLTAGE_REF_2_56v
 */
#define ADC_VOLTAGE_REF_SELECTOR_msk        ADC_VOLTAGE_REF_AVCC


#define ADC_VOLTAGE_REF_mv                  5000
#define ADC_MAX_NUMBER_OF_STEPS             1024


/*  Configure the ADC Mode Range :
	1- ADC_MODE_AUTO_TRIGGER
	2- ADC_MODE_SINGLE_CONVERSION
 */
#define ADC_MODE_SELECTOR                  	ADC_MODE_SINGLE_CONVERION 


/*  Configure the ADC Adjustment:
	1- ADC_RIGHT_ADJUSTED
	2- ADC_LEFT_ADJUSTED
 */
#define ADC_ADJUSTMENT_SELECTOR            	ADC_RIGHT_ADJUSTED


/*  Configure the ADC Prescaler :
	1- ADC_PRESCALER_2_msk
	2- ADC_PRESCALER_4_msk
	3- ADC_PRESCALER_8_msk
	4- ADC_PRESCALER_16_msk
	5- ADC_PRESCALER_32_msk
	6- ADC_PRESCALER_64_msk
	7- ADC_PRESCALER_128_msk
 */
#define ADC_PRESCALER_SELECTOR_msk         	ADC_PRESCALER_128_msk



/*  Configure the ADC TRIGGER SOURCE Range :
	1- ADC_AUTO_TRIG_SRC_FREE_RUNNING_msk
	2- ADC_AUTO_TRIG_SRC_ANALO_COMP_msk
	3- ADC_AUTO_TRIG_SRC_EXTI0_msk
	4- ADC_AUTO_TRIG_SRC_TIMER0_COMP_msk
	5- ADC_AUTO_TRIG_SRC_TIMER0_OVF_msk
	6- ADC_AUTO_TRIG_SRC_TIMER1_COMP_msk
	7- ADC_AUTO_TRIG_SRC_TIMER1_OVF_msk
	8- ADC_AUTO_TRIG_SRC_TIMER1_CART_msk
 */
#define ADC_AUTO_TRIG_SRCE_SELECTOR         ADC_AUTO_TRIG_SRC_FREE_RUNNING_msk

#endif
