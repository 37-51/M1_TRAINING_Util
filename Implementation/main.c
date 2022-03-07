
#include <avr/io.h>
#include <util/delay.h>
#include "A1_SeatDriverInput.h"
#include "A2_input.h"

int main(void)
{
    ports();
    uint16_t t;
    int seat_heat_switch=0;

    while(1)
    {
        seat_heat_switch=chk_inputs();
        if(seat_heat_switch==1){
            sysON();
            t=chk_value();
            PWMgen(t);
        }
        else{
            sysOFF();
        }
    }


    return 0;
}