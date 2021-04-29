/**
 * @file activity4.c
 * @author 260894 (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */

#include "activity4.h"
#include "activity1.h"
#include <avr/interrupt.h>


void USARTInit(void){
   
    UBRR0L = BAUD_RATE;
    UBRR0H = (BAUD_RATE>>8);  
    sei();

    UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);  // Mode of select is Asynchronous and character size is 8-bit

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); // Enable Transmitter and receiver 
}


void USARTWriteString(char data){  
    if(data =='a'){
        while(TRANSMITTING_DATA){};
            Temperature = '2';
            Temperature = '0';
            Temperature = 176;
            Temperature = 'C'; 
            Temperature = ' ';
            Temperature = '\0';
    }
    if(data =='b'){
        while(TRANSMITTING_DATA){};
            Temperature = '2';
            Temperature = '5';
            Temperature = 176;
            Temperature = 'C'; 
            Temperature = ' ';
            Temperature = '\0';
    }
    if(data =='c'){
        while(TRANSMITTING_DATA){};
            Temperature = '2';
            Temperature = '9';
            Temperature = 176;
            Temperature = 'C'; 
            Temperature = ' ';
            Temperature = '\0';
    }
    if(data =='d'){
        while(TRANSMITTING_DATA){};
            Temperature = '3';
            Temperature = '3';
            Temperature = 176;
            Temperature = 'C'; 
            Temperature = ' ';
            Temperature = '\0';
    }
}