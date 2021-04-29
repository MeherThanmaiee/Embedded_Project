/**
 * @file activity2.c
 * @author 260894 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-04-27
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <avr/io.h>
#include"activity2.h"

/**
 * @brief of Analog to Digital convertor
 *
 */

void InitADC(){ //Intializtion
    ADMUX = (1<<REFS0); //Aref=Avcc ,to set resolution
    ADCSRA = (1<<ADEN)|(7<<ADPS0); //to enable

}

uint16_t ReadADC(uint8_t ch) //ReadADC(0) means channel 0
{
     //select ADC Channel ch must be o to 7
    
    ADMUX&=0xf8; // 0xf8= 1111 1000 to clear MUX0,MUX1,MUX2
    ch = ch&0b00000111; // to enable MUX0,MUX1,MUX2
    ADMUX|=ch; //to set the channel

    ADCSRA|=(1<<ADSC); //start single conversion

    while(!(ADCSRA & (1<<ADIF))); //wait for conversion to complete if while(0) it will come out of loop
    ADCSRA|=(1<<ADIF); //set ADIF by writing 1 to it
    return(ADC);

}
