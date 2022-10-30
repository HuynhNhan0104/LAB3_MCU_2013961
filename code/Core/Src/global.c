/*
 * global.c
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#include "global.h"

//mode of system
int mode = NORMAL_MODE;

//Finite State machine
int state;


// BUTTON
int state_button0 = UNACTIVE ;


//LED 7 SEGMENT
int normal_led_7_seg_buffer[4] = {1,2,3,4};
int modify_led_7_seg_buffer[4] = {5,6,7,8};
int state_led_7seg = IN_NORMAL_MODE;
int index_led_7_seg = 0;
