#ifndef A1_SEATDRIVERINPUT_H_INCLUDED
#define A1_SEATDRIVERINPUT_H_INCLUDED

#define IN_B (PORTB)
#define LEDi (PORTB0)
#define SEAT_SWITCH (PORTD0)
#define HEAT_SWITCH (PORTD1)

void ports();

void sysON();

void sysOFF();

int chk_inputs();

#endif // A1_SEATDRIVERINPUT_H_INCLUDED