/*
 * timer.c
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#include "timer.h"


//timer0

int timer0_counter = 1000;
int timer0_flag = 0;
void set_timer0(int duration){
	timer0_counter = duration/TIME_CYCLE;
}
int is_timer0_timeout(){
	if(timer0_flag ){
		timer0_flag = 0;
		return 1;
	}
	return 0;
}

//timer1
int timer1_counter = 1000;
int timer1_flag = 0;
void set_timer1(int duration){
	timer1_counter = duration/TIME_CYCLE;
}
int is_timer1_timeout(){
	if(timer1_flag ){
		timer1_flag = 0;
		return 1;
	}
	return 0;
}



void timer_run(){

	if(timer0_counter >0){
		timer0_counter--;
		if(timer0_counter <=0) timer0_flag = 1;
	}

	if(timer1_counter >0){
			timer1_counter--;
			if(timer1_counter <=0) timer1_flag = 1;
		}

}
