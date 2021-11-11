/***************** LifeSign *******************/

#ifndef MCAL_ADC_INTERFACE_H_
#define MCAL_ADC_INTERFACE_H_

/* Channels */
#define ADC_Channel_0		0
#define ADC_Channel_1		1
#define ADC_Channel_2		2
#define ADC_Channel_3		3
#define ADC_Channel_4		4
#define ADC_Channel_5		5
#define ADC_Channel_6		6
#define ADC_Channel_7		7


/*ADC Voltage select*/
#define ADC_VOLTAGE_REF_clr_msk        0b00111111
#define ADC_VOLTAGE_REF_AVCC           0b01000000
#define ADC_VOLTAGE_REF_AREF           0b00000000
#define ADC_VOLTAGE_REF_56v            0b11000000

/*ADC MODE Select */
#define ADC_MODE_AUTO_TRIGGER             1
#define ADC_MODE_SINGLE_CONVERION         0

/* ADC ADJUST Select */
#define ADC_RIGHT_ADJUSTED 		0
#define ADC_LEFT_ADJUSTED 		1

/*ADC PRESCALER SELECT */
#define ADC_PRESCALER_clr_msk         0b11111000
#define ADC_PRESCALER_2_msk           0b00000000
#define ADC_PRESCALER_4_msk           0b00000010
#define ADC_PRESCALER_8_msk           0b00000011
#define ADC_PRESCALER_16_msk          0b00000100
#define ADC_PRESCALER_32_msk          0b00000101
#define ADC_PRESCALER_64_msk          0b00000110
#define ADC_PRESCALER_128_msk         0b00000111

/*ADC AUTO TRIGGER SELECT */
#define ADC_AUTO_TRIG_SRC_clr_msk               0b00011111
#define ADC_AUTO_TRIG_SRC_FREE_RUNNING_msk      0b00000000
#define ADC_AUTO_TRIG_SRC_ANALOG_COMP_msk       0b00100000
#define ADC_AUTO_TRIG_SRC_EXIT0_msk             0b01000000
#define ADC_AUTO_TRIG_SRC_TIMER0_COMP_msk       0b01100000
#define ADC_AUTO_TRIG_SRC_TIMER0_OVF_msk        0b10000000
#define ADC_AUTO_TRIG_SRC_TIMER1_COMP_msk       0b10100000
#define ADC_AUTO_TRIG_SRC_TIMER1_OVF_msk        0b11000000
#define ADC_AUTO_TRIG_SRC_TIMER1_CAPT_msk       0b11100000

/* ADC Mask to clear the channel */
#define ADC_CHANNEL_SELECTOR_clr_msk            0b11100000


#endif