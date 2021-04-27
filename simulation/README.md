## Activity 1 Project in Action
| ON   |  OFF|
|-------|------|
|   ![00](https://user-images.githubusercontent.com/80444408/116185225-cfbccd00-a73e-11eb-9faa-8ee1d558cbbb.PNG)|   ![10](https://user-images.githubusercontent.com/80444408/116185276-e3683380-a73e-11eb-971e-5ab87e79d2ff.PNG) |
|       |   ![01](https://user-images.githubusercontent.com/80444408/116185328-ff6bd500-a73e-11eb-9b85-6e96b2a5bc73.PNG)|
|  |![11](https://user-images.githubusercontent.com/80444408/116185379-1c080d00-a73f-11eb-8dcc-f33484bee799.PNG)|


## Code

		if((PIND & 1<<PD0)){
		    /*checks whether heater button is ON or OFF */
		    if((PIND & 1<<PD1)){
			change_led_state(LED_ON);
		    }
		    else change_led_state(LED_OFF);
		}
		else change_led_state(LED_OFF);
	}
