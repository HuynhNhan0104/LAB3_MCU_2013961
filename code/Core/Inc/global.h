/*
 * global.h
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


//mode of system
extern int mode;
#define NORMAL_MODE						0
#define MODIFY_RED							1
#define MODIFY_YELLOW						2
#define MODIFY_GREEN						3



//Finite State machine
extern int state;
#define INIT											4
#define AUTO_RED								5
#define AUTO_YELLOW							6
#define AUtO_GREEN							7

#define MANUAl_RED							8
#define MANUAL_YELLOW					9
#define MANUAL_GREEN 					10


//Timer
#define TIME_CYCLE 							10 //(10ms)

//led traffic
#define RED											11
#define YELLOW									12
#define GREEN										13

// BUTTON
#define IS_PRESSED_KEY						GPIO_PIN_RESET
#define IS_RELEASED_KEY						GPIO_PIN_SET

extern int state_button0;

#define ACTIVE 									14
#define UNACTIVE								15
#define ACTIVE_MORE_1S					16

//LED 7 SEGMENT
#define IN_NORMAL_MODE					17
#define IN_MODIFY_MODE					18


extern int normal_led_7_seg_buffer[4];
extern int modify_led_7_seg_buffer[4];
extern int state_led_7seg;
extern int index_led_7_seg;

#endif /* INC_GLOBAL_H_ */
