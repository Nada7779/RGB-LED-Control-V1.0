/**
 ** @file                   gpio.h
 ** @brief                  This is header file for led for TM4C123GH6PM
 ** @author                 Mohamed Sayed
 ** @date                   June 16, 2023
 ** @version                0.1
 */


#ifndef LED_H_
#define LED_H_


#include "led_config.h"

/*---------------------------------------------------------/
/- APIs DECLERATIONS-----------------------------------/
/---------------------------------------------------------*/
/**
 *  @brief 			   This function initializes LED.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t led_init(uint8_t port_num,uint8_t pin_num);

/**
 *  @brief 			   This function initializes LED.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t led_on(uint8_t port_num,uint8_t pin_num);
/**
 *  @brief 			   This function initializes LED.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t led_off(uint8_t port_num,uint8_t pin_num);






#endif /* LED_H_ */