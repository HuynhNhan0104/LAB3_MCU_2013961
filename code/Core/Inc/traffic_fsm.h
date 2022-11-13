/*
 * traffic_fsm.h
 *
 *  Created on: Oct 30, 2022
 *      Author: NHAN
 */

#ifndef INC_TRAFFIC_FSM_H_
#define INC_TRAFFIC_FSM_H_

#include "global.h"
#include "timer.h"
#include "button.h"
#include "led_traffic.h"
#include "led_7_seg.h"


void fsm_traffic_1_run();
void fsm_traffic_2_run();

void fsm_system_run();


#endif /* INC_TRAFFIC_FSM_H_ */
