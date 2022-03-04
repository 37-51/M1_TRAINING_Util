#ifndef A2_INPUT_H_INCLUDED
#define A2_INPUT_H_INCLUDED

#include <util/delay.h>
#include <avr/io.h>

void startADC();

uint16_t readADC(uint8_t ch);

uint16_t chk_value(void);

#endif // A2_INPUT_H_INCLUDED