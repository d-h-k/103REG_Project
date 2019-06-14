/*
 * flash.h
 *
 *  Created on: 2018. 7. 21.
 *      Author: Baram
 */

#ifndef SRC_HW_CORE_FLASH_H_
#define SRC_HW_CORE_FLASH_H_


#include "BSP\bsp.h"
#include "BSP\bsp.h"


void flashInit(void);

bool flashErase(uint32_t addr, uint32_t length);
bool flashWrite(uint32_t addr, uint8_t *p_data, uint32_t length);


#endif /* SRC_HW_CORE_FLASH_H_ */
