/*
 * button.c
 *
 *  Created on: Oct 29, 2022
 *      Author: NHAN
 */

#include "button.h"

int button0_flag = 0;
int keyREG0 = IS_RELEASED_KEY;
int keyREG1 = IS_RELEASED_KEY;
int keyREG2 = IS_RELEASED_KEY;



int is_button_pressed(){
	if(button0_flag){
		button0_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	button0_flag = 1;
}

void getKeyInput(){
	keyREG0 = keyREG1;
	keyREG1 = keyREG2;
	keyREG2 = HAL_GPIO_ReadPin(BUTTON0_GPIO_Port, BUTTON0_Pin);

	switch(state_button0){
		case UNACTIVE:
			if(keyREG0 == keyREG1 && keyREG1 == keyREG2){
				if(keyREG2 == IS_PRESSED_KEY) {
					subKeyProcess();
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
