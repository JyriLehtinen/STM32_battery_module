/*
 * LM75.c
 *
 *  Created on: 10.12.2017
 *      Author: jyrij
 */
#include <stdio.h>
#include "i2c.h"
#include "LM75.h"

/* Imported variables ---------------------------------------------------------*/
//extern uint8_t i2c_tx[LM75_BUFFER_LEN]; //FIXME Currently not used, as LM75 can be used as it is
extern uint8_t i2c_rx[LM75_BUFFER_LEN];


/* Private variables ---------------------------------------------------------*/

/*
 * @brief Initializes the LM75 registers over I2C
 * @param: void
 * @return: void
 */
void LM75_Init()
{
  //Nothing to do
  return;
}

/*
 * @brief Read the temperature registry from the LM75
 * @return: none
 */
void LM75_GetValue(I2C_HandleTypeDef hi2c)
{
  HAL_I2C_Mem_Read_DMA(&hi2c, (uint16_t)LM75_ADDR, (uint16_t)LM75_TEMP_REG, LM75_BUFFER_LEN, i2c_rx, LM75_BUFFER_LEN);
  return;
}
