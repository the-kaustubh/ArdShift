#ifndef ARDSHIFT_H
#define ARDSHIFT_H

#include "bitwise.h"

enum boool {true, false};

enum boool MSBFIRST = true;
enum boool LSBFIRST = false;

enum boool HIGH = true;
enum boool LOW  = false;

typedef struct shiftreg_t {
  const unsigned dataPin:4;
  const unsigned clockPin:4;
  const unsigned latchPin:4;
  const unsigned enablePin:4;
} ShiftReg;


void _write_byte(ShiftReg sr, char value, char dir);

void _clear(ShiftReg * target);

void _write_pin(int pin, int value);


#endif
