#include "A2_input.h"

uint16_t chk_value(void){
      startADC();
      uint16_t t;
      t=readADC(0);
      return t;
}

void startADC(){
    ADMUX=(1<<REFS0);
    ADCSRA= (1<<ADEN)|(7<<ADPS0);
}

uint16_t readADC(uint8_t ch){
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);
    while(!(ADCSRA & (1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return(ADC);
}