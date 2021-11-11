/***************** LifeSign *******************/
#include "BIT_MATH.h"
#include "STD_LIB.h"

#include "ADC_config.h"
#include "ADC_interface.h"
#include "ADC_private.h"

void void_MCAL_ADC_INIT(void)
{
	/*************************************/
	/*  1- Selecting the ADC Mode    	 */
	ADMUX 	&= (ADC_VOLTAGE_REF_clr_msk);
	ADMUX	|= (ADC_VOLTAGE_REF_SELECTOR_msk);

	#if (ADC_MODE_SELECTOR == ADC_MODE_AUTO_TRIGGER)
		SET_BIT(ADCSRA,5);
		SFIOR &= (ADC_AUTO_TRIG_SRC_clr_msk);
		SFIOR |= (ADC_AUTO_TRIG_SRCE_SELECTOR);
		
	#elif (ADC_MODE_SELECTOR == ADC_MODE_SINGLE_CONVERSION)
		CLR_BIT(ADCSRA,5);
	#endif	
	/*************************************/
	/*************************************/
	
	/*  2- Selecting the ADC Adjustment  */
	#if   (ADC_ADJUSTMENT_SELECTOR == ADC_RIGHT_ADJUSTED)
		CLR_BIT(ADMUX,5);
	#elif (ADC_ADJUSTMENT_SELECTOR == ADC_LEFT_ADJUSTED)
		SET_BIT(ADMUX,5);
	#endif
	/*************************************/
	/*************************************/
	
	/*  3- Clearing the Interrupt Flag   */
	SET_BIT(ADCSRA,4);

	/*************************************/
	/*************************************/
	
	/*  4- Enable the ADC     			 */
	SET_BIT(ADCSRA,7);
	/*************************************/
	/*************************************/
}

void void_MCAL_ADC_StartConvertion(u8 ADC_Channel)
{
	/*********** Select ADC Channel **********/
	ADMUX &= (ADC_CHANNEL_SELECTOR_clr_msk);
	
	ADMUX |= (ADC_Channel);
	
	/*********** ADC Start Conversion **********/
	SET_BIT(ADCSRA,6);
}

u16 u16_MCAL_ADC_GetResult(void)
{
	while( GET_BIT(ADCSRA,6) );
	return ADCLH;
}
