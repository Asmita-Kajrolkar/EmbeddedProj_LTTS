#include "user_utils.h"
#include "activity1.h"
void activity1(void)
{
    change_led_state(LED_OFF);
    while(1){
        /*Checks whether Button Sensor is ON or OFF */
        if(!(PIND & 1<<PD0)){
            /*Checks whether Heater button is ON or OFF */
            if(!(PIND & 1<<PD1)){
                change_led_state(LED_ON);
            }
            else change_led_state(LED_OFF);
        }
        else change_led_state(LED_OFF);
    }
}
