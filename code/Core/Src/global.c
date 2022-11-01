/*
 * global.c
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#include "global.h"

//mode of system
int mode = INIT_SYSTEM;


//SINGLE LED OF TRAFFIC
int duration_time_of_RED = 5000;
int duration_time_of_YELLOW = 2000;
int duration_time_of_GREEN = 3000;

int buffer_duration_time = 5000;

int state_led_traffic_1 = RED;
int state_led_traffic_2 = RED;

// BUTTON
int state_button0 = UNACTIVE ;
int state_button1 = UNACTIVE ;
int state_button2 = UNACTIVE ;

//LED 7 SEGMENT
int led_7_seg_buffer[4] = {1,2,3,4};
int index_led_7_seg = 0;






