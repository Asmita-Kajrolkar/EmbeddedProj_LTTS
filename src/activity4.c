#include "activity4.h"
#include "activity1.h"

void USARTInit(void){
    UBRR0H = (BAUDRATE>>8); //Set Baud rate 
    UBRR0L = BAUDRATE;
    sei();
    UCSR0C=(1<<UCSZ01)|(1<<UCSZ00); //Enable The receiver and transmitter 
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); 
}



void USARTWriteString(char letter){
    if(letter=='p'){
        while(DATA_TRANSMITTING){};
            DATA = '2';
            DATA = '0';
            DATA = 'C';
    }
    if(letter=='q'){
        while(DATA_TRANSMITTING){};
            DATA = '2';
            DATA = '5';
            DATA = 'C';
    }
    if(letter=='r'){
        while(DATA_TRANSMITTING){};
            DATA = '2';
            DATA = '9';
            DATA = 'C';
    }
    if(letter=='s'){
        while(DATA_TRANSMITTING){};
            DATA = '3';
            DATA = '3';
            DATA = 'C';
    }
}
