/**
 ** @file                   button.h
 ** @brief                  This is header file for button for TM4C123GH6PM
 ** @author                 Mohamed Sayed
 ** @date                   June 16, 2023
 ** @version                0.1
 */


#ifndef BUTTON_H_
#define BUTTON_H_


#include "button_config.h"

/*---------------------------------------------------------/
/- APIs DECLERATIONS-----------------------------------/
/---------------------------------------------------------*/
/**
 *  @brief 			   This function initializes BUTTON.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t button_init(uint8_t port_num,uint8_t pin_num);

/**
 *  @brief 			   This function gets BUTTON value.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t button_read(uint8_t port_num,uint8_t pin_num, uint8_t *value);






#endif /* BUTTON_H_ */