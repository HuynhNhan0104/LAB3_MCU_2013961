/*
 * timer.h
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "global.h"
//timer0 for button0;
void set_timer0(int duration);
int is_timer0_timeout();



//timer1 for leg 7 segment
void set_timer1(int duration);
int is_timer1_timeout();



//system timer
void timer_run();


#endif /* INC_TIMER_H_ */
