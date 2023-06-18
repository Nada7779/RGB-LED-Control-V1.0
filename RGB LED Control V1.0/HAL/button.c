/**
 ** @file                   button.c
 ** @brief                  This is source file for button for TM4C123GH6PM
 ** @author                 Mohamed Sayed
 ** @date                   June 16, 2023
 ** @version                0.1
 */
 
 #include "button.h"



 /*---------------------------------------------------------/
/- APIs DEFINITION-----------------------------------/
/---------------------------------------------------------*/
/**
 *  @brief 			   This function initializes BUTTON.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t button_init(uint8_t port_num,uint8_t pin_num)
{
	
	uint8_t u8_status_t=SUCCESS;
	
	gpio_init_st button;
	
	button.port_num=port_num;
	button.pin_num=pin_num;
	button.pin_current=BUTTON_CURRENT;
	button.pin_con=BUTTON_CONNECTION;
	button.pin_dir=INPUT;
	button.pin_data=BUTTON_DATA;
	button.pin_lock=BUTTON_LOCK;
	button.pin_stat=BUTTON_STAT;
	
	u8_status_t= pin_init(&button);
	
	return u8_status_t;
}

/**
 *  @brief 			   This function gets BUTTON value.
 *  @param[in]		 pgpio pointer to input configuration structure.
 *  @return        ::SUCCESS in case of success, otherwise, review error code
 */
uint8_t button_read(uint8_t port_num,uint8_t pin_num, uint8_t *value)

 { 
	 uint8_t u8_status_t=SUCCESS;
	
	 *value= released;
	 
	 while(*value==released)
	 {
	   u8_status_t= pin_read(value,port_num, pin_num);
	 }
	 
	 return u8_status_t;
 }
 
