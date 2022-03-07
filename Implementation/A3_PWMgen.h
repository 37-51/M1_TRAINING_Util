#ifndef A3_PWMGEN_H_INCLUDED
#define A3_PWMGEN_H_INCLUDED

//Output PWM for 20% duty cycle
//Output PWM for 40% duty cycle
//Output PWM for 70% duty cycle
//Output PWM for 95% duty cycle

#define PWM20_20C (205)
#define PWM40_25C (410)
#define PWM70_29C (717)
#define PWM95_33C (973)

#include <util/delay.h>
#include <avr/io.h>

void timerON();

void PWMgen(uint16_t t);

void dispLevel1();
void dispLevel2();
void dispLevel3();
void dispLevel4();

#endif // A3_PWMGEN_H_INCLUDED