/*
 * led.h
 *
 *  Created on: 2018. 5. 12.
 *      Author: Baram
 */

#ifndef SRC_HW_CORE_LED_H_
#define SRC_HW_CORE_LED_H_

#include "../hw.h"


void ledInit(void);
void ledOn(uint8_t ch);
void ledOff(uint8_t ch);
void ledToggle(uint8_t ch);


#endif /* SRC_HW_CORE_LED_H_ */
