#ifndef _ACTIVITY1_H_
#define _ACTIVITY1_H_
/**
 * @file activity1.h
 * @author Asmita Kajrolkar ()
 * @brief Activity1 in the embedded projec
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * Include files
 */ 
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h> 

/**
 * Macro Definitions
 */

#define LED_ON 	(0x01)			
#define LED_OFF	(0x00)			
#define LED_PORT (PORTB)    
#define LED_PIN  (PORTB0)  
#define BTN_SENSOR_PORT  (PORTD) 
#define HTR_SENSOR_PORT  (PORTD) 
#define BTN_SENSOR_PIN  (PORTD0) 
#define HTR_SENSOR_PIN  (PORTD1) 
#define BTN_SENSOR_ON 	!(PIND & 1<<PD0)	
#define HTR_SENSOR_ON	!(PIND & 1<<PD1)	
#define SET_PORTB0_AS_OUTPUT  DDRB |= (1<<PORTB0) 
#define SET_PD0_AND_PD1_AS_PULLUP  PORTD |= (1<<PORTD1)|(1<<PORTD0) 
#define SET_PORTD_AS_INPUT  DDRD = 0x00 

/**
 * @brief Function to change status of LED
 * 
 * @param[in] state ON or OFF
 * 
 */
void ChangeLEDState(uint8_t state);

/**
 * @brief Function to set pin of ButtonSensor
 * 
 * 
 */
void SetBtnSensorPin(void);

/**
 * @brief Function to set pin of HeaterSensor
 * 
 * 
 */
void SetHtrSensorPin(void);

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void DelayMilliSecond(uint32_t delay_time);

/**
 * @brief Function to change LED status according to the user requirement in activity1
 * 
 * @return FLAG
 */
uint8_t StatusLedActuator(void);

/**
 * @brief Function to initialize peripherals of microcontroller
 * 
 */

void InitializePeripherals(void);

#endif /* _ACTIVITY1_H_ */
