/**
 ** @file                   WDT_Tester.c
 ** @brief                  This file implements watchdog timer Module tester
 ** @author                 Mohamed Sayed
 ** @date                   Jan 23, 2023
 ** @version                0.1
 */

/*- INCLUDES
----------------------------------------------*/
#include "gpio.h"
#include "app.h"
#include "led.h"
#include "button.h"

/*- LOCAL MACROS
------------------------------------------*/

/*- GLOBAL STATIC VARIABLES
-------------------------------*/
//wdt_cfg_t wdt_cfg;
gpio_init_st gpio;
gpio_init_st gpio2;
void button_test(void)
{
	static uint16_t flag=0;
	if (flag==0)
	{
	  pin_write(HIGH,PORTF,PIN1);
		flag=1;
	}
	else
	{
		pin_write(LOW,PORTF,PIN1);
		flag=0;
	}
	
}
/*- GLOBAL EXTERN VARIABLES
-------------------------------*/
/*- APIs IMPLEMENTATION
-----------------------------------*/
int main(void)
{
	APP_init();
	while(1)
	{
	APP_start();
	}
}
