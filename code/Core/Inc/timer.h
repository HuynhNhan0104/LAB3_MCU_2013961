/*
 * timer.h
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "global.h"

void set_timer0(int duration);
int is_timer0_timeout();
void timer_run();

#endif /* INC_TIMER_H_ */
