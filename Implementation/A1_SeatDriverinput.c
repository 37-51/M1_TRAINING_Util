#include <avr/io.h>
#include <util/delay.h>
#include "A1_SeatDriverInput.h"

void ports(){
    DDRB|=(1<<PB0);

    DDRD&=~(1<<PD0); //direction register   //clear bit
    PORTD|=(1<<PD0); //pin                  //set as HIGH

    DDRD&=~(1<<PD1); //direction register   //clear bit
    PORTD|=(1<<PD1); //pin                  //set as HIGH
}

int chk_inputs(){
    ports();

    if(!(PIND&(1<<SEAT_SWITCH)) && !(PIND&(1<<HEAT_SWITCH))){
        return 1;
    }
    else{
        return 0;
    }
}

void sysON(){
    IN_B|=(1<<LEDi);
}
void sysOFF(){
    IN_B&=~(1<<LEDi);
}