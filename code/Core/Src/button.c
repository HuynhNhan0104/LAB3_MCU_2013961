/*
 * button.c
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#include "button.h"

//BUTTON0 :

int button0_flag = 0;
int keyREG0_of_button0 = IS_RELEASED_KEY;
int keyREG1_of_button0  = IS_RELEASED_KEY;
int keyREG2_of_button0  = IS_RELEASED_KEY;
int is_button0_pressed(){
	if(button0_flag){
		button0_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess0(){
	button0_flag = 1;
}
void getKeyInput0(){
	keyREG0_of_button0  = keyREG1_of_button0 ;
	keyREG1_of_button0  = keyREG2_of_button0 ;
	keyREG2_of_button0  = HAL_GPIO_ReadPin(BUTTON0_GPIO_Port, BUTTON0_Pin);

	switch(state_button0){
		case UNACTIVE:
			if(keyREG0_of_button0  == keyREG1_of_button0  && keyREG1_of_button0  == keyREG2_of_button0 ){
				if(keyREG2_of_button0  == IS_PRESSED_KEY) {
					subKeyProcess0();
					set_timer0(200);
					state_button0 = ACTIVE;
				}
			}
			break;
		case ACTIVE:
			if(is_timer0_timeout()){
				state_button0 = UNACTIVE;
			}

			break;
		default:
			break;
	}

}

//BUTTON 1:
int button1_flag = 0;
int keyREG0_of_button1 = IS_RELEASED_KEY;
int keyREG1_of_button1  = IS_RELEASED_KEY;
int keyREG2_of_button1  = IS_RELEASED_KEY;
int is_button1_pressed(){
	if(button1_flag){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess1(){
	button1_flag = 1;
}
void getKeyInput1(){
	keyREG0_of_button1  = keyREG1_of_button1 ;
	keyREG1_of_button1  = keyREG2_of_button1 ;
	keyREG2_of_button1  = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);

	switch(state_button1){
		case UNACTIVE:
			if(keyREG0_of_button1  == keyREG1_of_button1  && keyREG1_of_button1  == keyREG2_of_button1 ){
				if(keyREG2_of_button1  == IS_PRESSED_KEY) {
					subKeyProcess1();
					set_timer5(1000);
					state_button1 = ACTIVE;
				}
			}
			break;
		case ACTIVE:
			if(keyREG2_of_button1  == IS_PRESSED_KEY){
				if(is_timer5_timeout()){
					state_button1 = ACTIVE_MORE_1S;
				}
			}
			if(keyREG2_of_button1  == IS_RELEASED_KEY) state_button1 = UNACTIVE;


			break;
		case ACTIVE_MORE_1S:
			subKeyProcess1();
			if(keyREG2_of_button1  == IS_RELEASED_KEY){
				state_button1 = UNACTIVE;
			}
		default:
			break;
	}

}


//BUTTON2 :


int button2_flag = 0;
int keyREG0_of_button2= IS_RELEASED_KEY;
int keyREG1_of_button2 = IS_RELEASED_KEY;
int keyREG2_of_button2 = IS_RELEASED_KEY;
int is_button2_pressed(){
	if(button2_flag){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
void subKeyProcess2(){
	button2_flag = 1;
}

void getKeyInput2(){
	keyREG0_of_button2 = keyREG1_of_button2;
	keyREG1_of_button2 = keyREG2_of_button2;
	keyREG2_of_button2 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);

	switch(state_button2){
		case UNACTIVE:
			if(keyREG0_of_button2 == keyREG1_of_button2 && keyREG1_of_button2 == keyREG2_of_button2){
				if(keyREG2_of_button2 == IS_PRESSED_KEY) {
					subKeyProcess2();
					set_timer6(200);
					state_button2= ACTIVE;
				}
			}
			break;
		case ACTIVE:
			if(is_timer6_timeout()){
				state_button2= UNACTIVE;
			}

			break;
		default:
			break;
	}

}
