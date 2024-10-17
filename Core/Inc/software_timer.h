/*
 * software_timer.h
 *
 *  Created on: Oct 17, 2024
 *      Author: HOME
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"

#define SET_COUNTER0 1000  /// blink dot 1hz
#define SET_COUNTER1 250  // quet led 25hz

#define TIMER_CYCLE 10

extern int timer0_counter;   // blink dot 1hz
extern int timer0_flag;

extern int timer1_counter;
extern int timer1_flag;  // quet led 25hz

void setTimer0(int duration);
void setTimer1(int duration);

void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
