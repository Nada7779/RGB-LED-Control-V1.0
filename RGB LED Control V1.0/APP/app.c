/**
 ** @file                   app.c
 ** @brief                  This is source file for app for TM4C123GH6PM
 ** @author                 Nada Abdelazim
 ** @date                   June 16, 2023
 ** @version                0.1
 */
#include "app.h"
#include "led.h"
#include "button.h"

#define init_state    0
#define first_state   1
#define second_state  2
#define third_state   3
#define fourth_state  4
#define fifth_state   5

uint8_t buttonstate;
		
uint8_t sequence;

void APP_init(void)
{
	 buttonstate=released;	
	 sequence=first_state;
	// LEDs init
  led_init(RED_LED_PORT,RED_LED_PIN);
	led_init(BLUE_LED_PORT,BLUE_LED_PIN);
	led_init(GREEN_LED_PORT,GREEN_LED_PIN);
	// button init
	button_init(SW1_PORT,SW1_PIN);
	// Initially, all LEDs are OFF
  led_off(RED_LED_PORT,RED_LED_PIN);
	led_off(BLUE_LED_PORT,BLUE_LED_PIN);
	led_off(GREEN_LED_PORT,GREEN_LED_PIN);	
}
void APP_start(void)
	{
		
		button_read(SW1_PORT,SW1_PIN,&buttonstate);
		
		if (buttonstate==pressed)
		{
			switch (sequence)
			{
				case first_state: 
					               led_on(RED_LED_PORT,RED_LED_PIN);
				                 sequence=second_state;
                 				 break;
				case second_state:
					                led_off(RED_LED_PORT,RED_LED_PIN);
				                  led_on(GREEN_LED_PORT,GREEN_LED_PIN); 
				                  sequence=third_state;
                 				  break;
				case third_state: 
				                  led_off(GREEN_LED_PORT,GREEN_LED_PIN); 
				                  led_on(BLUE_LED_PORT,BLUE_LED_PIN);
				                  sequence=fourth_state;
                 				  break;
				case fourth_state:
					               led_on(RED_LED_PORT,RED_LED_PIN);
				                 led_on(GREEN_LED_PORT,GREEN_LED_PIN);
				                 sequence=fifth_state;
                 				 break;
				case fifth_state:
					                led_off(RED_LED_PORT,RED_LED_PIN);
				                  led_off(GREEN_LED_PORT,GREEN_LED_PIN);
				                  led_off(BLUE_LED_PORT,BLUE_LED_PIN);
				                  sequence=first_state;
                 				  break;
				default:
					                //ERROR Handling
				                  sequence=first_state;
				                  
			}
		}
	}





	
	


