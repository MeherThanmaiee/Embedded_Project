**
 * @file SeatHeatingApplication.c
 * @author 260894 (you@domain.com)
 * @brief Project on cars seat heating application 
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

/**
 * @brief Main function
 * 
 * @return int 
 */

int main(void)
{
    activity1();
    InitADC();
    activity3();
    uint16_t ADC_Value,temp;

    while(1)
    {
  if(!(BUTTON_ON || HEATER_ON)){ //Set PIND 0th and PIND 1st.It checks if the button is pressed or not.
                _delay_ms(20);
                SET_LED_ON; //set portB0 it will ON the led
                ADC_Value = ReadADC(0);
                temp=PWMoutput(ADC_Value); //generate PWM output
                USARTWriteString(temp);
                _delay_ms(20);
                
            }
            else
            {
                _delay_ms(20);
                OCR1A = 0; //if IF condition fails PWM is set to 0
                 SET_LED_OFF; //clear portB0 it will OFF the led
            }
        
     
    }

 return 0;   
}

