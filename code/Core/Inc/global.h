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
#define INIT_SYSTEM							0
#define NORMAL_MODE						1
#define MODIFY_RED_MODE				2
#define MODIFY_YELLOW_MODE			3
#define MODIFY_GREEN_MODE			4

//Timer
#define TIME_CYCLE 							10 //(10ms)

//SINGLE LED OF TRAFFIC
#define OFF											11
#define RED											12
#define YELLOW									13
#define GREEN										14

extern int duration_time_of_RED;
extern int duration_time_of_YELLOW;
extern int duration_time_of_GREEN;
extern int buffer_duration_time;

extern int state_led_traffic_1;
extern int state_led_traffic_2;

// BUTTON
#define IS_PRESSED_KEY						GPIO_PIN_RESET
#define IS_RELEASED_KEY						GPIO_PIN_SET

extern int state_button0;
extern int state_button1;
extern int state_button2;

#define ACTIVE 									15
#define UNACTIVE								16
#define ACTIVE_MORE_1S					17

//LED 7 SEGMENT

extern int led_7_seg_buffer[4];
extern int index_led_7_seg;







#endif /* INC_GLOBAL_H_ */
