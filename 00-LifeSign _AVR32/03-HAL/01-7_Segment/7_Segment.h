/******************** LifeSign ********************/

#ifndef HAL_SEVEN_SEGMENT_H
#define HAL_SEVEN_SEGMENT_H

/*** Functions Prototypes ***/

/* INIT function */
void void_HAL_Seven_Segment_INIT ();


/* Writing number */
void void_HAL_Seven_Segment_WRITE_NO (u8 u8PortIdCopy,u8 Number);


/* Enable and Disable Functions */
void void_HAL_Seven_Segment_ENABLE1();
void void_HAL_Seven_Segment_ENABLE2();

void void_HAL_Seven_Segment_DISABLE1();
void void_HAL_Seven_Segment_DISABLE2();






#endif