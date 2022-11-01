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
//timer0 for button0;
void set_timer0(int duration);
void clear_timer0();
int is_timer0_timeout();

//timer1 for leg 7 segment
void set_timer1(int duration);
void clear_timer1();
int is_timer1_timeout();

//timer2 for traffic led 1
extern int timer2_counter;
void set_timer2(int duration);
void clear_timer2();
int is_timer2_timeout();

//timer3 for traffic led 2
extern int timer3_counter;
void set_timer3(int duration);
void clear_timer3();
int is_timer3_timeout();


//timer4 for blinking led of traffic
void set_timer4(int duration);
void clear_timer4();
int is_timer4_timeout();

//timer5 for button1
void set_timer5(int duration);
void clear_timer5();
int is_timer5_timeout();

//timer6 for button2
void set_timer6(int duration);
void clear_timer6();
int is_timer6_timeout();


//system timer
void timer_run();


#endif /* INC_TIMER_H_ */
