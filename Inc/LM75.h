/*
 * LM75.h
 *
 *  Created on: 10.12.2017
 *      Author: jyrij
 */

#ifndef LM75_H_
#define LM75_H_

/* Private defines -----------------------------------------------------------*/
#define LM75_ADDR	(0x90) //0x48 << 1
#define LM75_BUFFER_LEN	(0x02)

//REGISTRY DEFINES
#define LM75_TEMP_REG	(0x00)
#define LM75_CONF_REG	(0x01)

/* Private function prototypes -----------------------------------------------*/
void LM75_Init();
void LM75_GetValue();


#endif /* LM75_H_ */
