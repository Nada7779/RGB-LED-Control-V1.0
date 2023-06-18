/*
 * application.h
 *
 * Created: 4/8/2023 10:08:38 AM
 *  Author: Nada
 */ 
#include "app.h"
#include "led.h"
#include "button.h"

#define unpressed  1
#define pressed    0
void APP_init(void)
{
	// LEDs init
  led_init(RED_LED_PORT,RED_LED_PIN);
	led_init(BLUE_LED_PORT,BLUE_LED_PIN);
	led_init(GREEN_LED_PORT,GREEN_LED_PIN);
	// button init
	button_init(SW1_PORT,SW1_PIN);
}
void APP_start(void)
	{
		uint8_t buttonstate= unpressed;
		// Initially, all LEDs are OFF
    led_off(RED_LED_PORT,RED_LED_PIN);
	  led_off(BLUE_LED_PORT,BLUE_LED_PIN);
	  led_off(GREEN_LED_PORT,GREEN_LED_PIN);
		
		button_read(SW1_PORT,SW1_PIN,&buttonstate);
		while(buttonstate == unpressed)  {button_read(SW1_PORT,SW1_PIN,&buttonstate);}
		// Once BUTTON1 is pressed, LED1 will be ON
		// Press 1 (ON, OFF, OFF, OFF)
		while (buttonstate == HIGH)
		{
		  led_on(RED_LED_PORT,RED_LED_PIN);
			button_read(SW1_PORT,SW1_PIN,&buttonstate);	 
		}
		while(buttonstate == LOW) { button_read(SW1_PORT,SW1_PIN,&buttonstate);	 }
		// Press 2 (ON, ON, OFF, OFF)
		while (buttonstate == HIGH)
		{
	    led_on(GREEN_LED_PORT,GREEN_LED_PIN);
			button_read(SW1_PORT,SW1_PIN,&buttonstate);	 
		}
		while(buttonstate == LOW) { button_read(SW1_PORT,SW1_PIN,&buttonstate);	 }
		// Press 3 (ON, ON, ON, OFF)
		while (buttonstate == HIGH)
		{
      led_on(BLUE_LED_PORT,BLUE_LED_PIN);
			button_read(SW1_PORT,SW1_PIN,&buttonstate);	
		}
	
	}





	
	


