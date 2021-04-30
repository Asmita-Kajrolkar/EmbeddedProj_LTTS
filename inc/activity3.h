#ifndef _ACTIVITY3_H_
#define _ACTIVITY3_H_

/**
 * @file activity3.h
 * @author Asmita Kajrolkar ()
 * @brief Activity3 in the embedded project
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro definitions
 * 
 */

#define DUTY_CYCLE(Percent) (1024*Percent/100) /**< DUTY_CYCLE macro function */
#define WRITE_PWM OCR1A /**< Write PWM with OCR1A */

/**
 * @brief Function to initialize PWM    
 * 
 */
void InitializePWM(void);

/**
 * @brief Function to Generate PWM    
 * 
 * @param[in] Temperature input temperature obtained from ADC 
 * 
 * @return TempToCAN
 */
char GeneratePWM(uint16_t Temperature);
#endif  /* _ACTIVITY3_H_ */
