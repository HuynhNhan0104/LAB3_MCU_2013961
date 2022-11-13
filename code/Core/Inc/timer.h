/*
 * timer.h
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "global.h"
#include "led_traffic.h"

// timer 0, 1, 2 use for button 0, 1, 2
//timer 3 for led 7 segment;
//timer 4 for traffic led 1
//timer 5 for traffic led 2
//timer 6 for blinking 4 led of system
extern int timer_counter[NUMBER_OF_TIMER];
extern int timer_flag[NUMBER_OF_TIMER];

void set_timer(int index, int duration);
void clear_timer(int index);
int is_timer_timeout(int index);
int get_time_of_counter(int index);
void timer_run();

#endif /* INC_TIMER_H_ */
