/*
 * timer.c
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#include "timer.h"


//
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




void timer_run(){

	if(timer0_counter >0){
		timer0_counter--;
		if(timer0_counter <=0) timer0_flag = 1;
	}


}
