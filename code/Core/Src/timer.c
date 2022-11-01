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

void clear_timer0(){
	timer0_counter  =0 ;
	timer0_flag = 0;
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

void clear_timer1(){
	timer1_counter  =0 ;
	timer1_flag = 0;
}

int is_timer1_timeout(){
	if(timer1_flag ){
		timer1_flag = 0;
		return 1;
	}
	return 0;
}

//timer2

int timer2_counter = 1000;
int timer2_flag = 0;
void set_timer2(int duration){
	timer2_counter = duration/TIME_CYCLE;
}

void clear_timer2(){
	timer2_counter  =0 ;
	timer2_flag = 0;
}

int is_timer2_timeout(){
	if(timer2_flag ){
		timer2_flag = 0;
		return 1;
	}
	return 0;
}

//timer3

int timer3_counter = 1000;
int timer3_flag = 0;
void set_timer3(int duration){
	timer3_counter = duration/TIME_CYCLE;
}

void clear_timer3(){
	timer3_counter  =0 ;
	timer3_flag = 0;
}

int is_timer3_timeout(){
	if(timer3_flag ){
		timer3_flag = 0;
		return 1;
	}
	return 0;
}


//timer4

int timer4_counter = 1000;
int timer4_flag = 0;
void set_timer4(int duration){
	timer4_counter = duration/TIME_CYCLE;
}

void clear_timer4(){
	timer4_counter  =0 ;
	timer4_flag = 0;
}

int is_timer4_timeout(){
	if(timer4_flag ){
		timer4_flag = 0;
		return 1;
	}
	return 0;
}

//timer5

int timer5_counter = 1000;
int timer5_flag = 0;
void set_timer5(int duration){
	timer5_counter = duration/TIME_CYCLE;
}

void clear_timer5(){
	timer5_counter  =0 ;
	timer5_flag = 0;
}

int is_timer5_timeout(){
	if(timer5_flag ){
		timer5_flag = 0;
		return 1;
	}
	return 0;
}

//timer6

int timer6_counter = 1000;
int timer6_flag = 0;
void set_timer6(int duration){
	timer6_counter = duration/TIME_CYCLE;
}

void clear_timer6(){
	timer6_counter  =0 ;
	timer6_flag = 0;
}

int is_timer6_timeout(){
	if(timer6_flag ){
		timer6_flag = 0;
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

	if(timer2_counter >0){
		timer2_counter--;
		if(timer2_counter <=0) timer2_flag = 1;
	}

	if(timer3_counter >0){
		timer3_counter--;
		if(timer3_counter <=0) timer3_flag = 1;
	}

	if(timer4_counter >0){
		timer4_counter--;
		if(timer4_counter <=0) timer4_flag = 1;
	}

	if(timer5_counter >0){
		timer5_counter--;
		if(timer5_counter <=0) timer5_flag = 1;
	}

	if(timer6_counter >0){
			timer6_counter--;
			if(timer6_counter <=0) timer6_flag = 1;
		}


}
