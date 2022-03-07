#include "A3_PWMgen.h"
#include "A2_input.h"
#include "A1_SeatDriverInput.h"

void PWMgen(uint16_t t)
{
    timerON();
    if(t>=0 && t<=200){
        OCR1A = PWM20_20C;
        dispLevel1();
    }
    else if(t>=210 && t<=500){
        OCR1A = PWM40_25C;
        dispLevel2();
    }
    else if(t>=510 && t<=700){
        OCR1A = PWM70_29C;
        dispLevel3();
    }
    else if(t>=710 && t<=1024){
        OCR1A = PWM95_33C;
        dispLevel4();
    }
    else{
        OCR1A=0;
    }
    _delay_ms(200);

}

void timerON()
{
    TCCR1A |= (1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB |=(1<<PB1);
}

void dispLevel1(){
    IN_B&=~(1<<PB2);
    IN_B&=~(1<<PB3);
}
void dispLevel2(){
    IN_B&=~(1<<PB2);
    IN_B|=(1<<PB3);
}
void dispLevel3(){
    IN_B|=(1<<PB2);
    IN_B&=~(1<<PB3);
}
void dispLevel4(){
    IN_B|=(1<<PB2);
    IN_B|=(1<<PB3);
}