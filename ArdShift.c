#include "ArdPins.h"
#include "ArdShift.h"

void _write_byte(ShiftReg sr, char value, char dir) {
  if(dir == 1) {
    for(int i = 0; i < 8; i++) {
      _write_pin(sr.dataPin, (value & 0x80) ? HIGH : LOW);
      _write_pin(sr.clockPin, HIGH);
      _write_pin(sr.clockPin, LOW );
      value <<= 1;  // MSBFIRST
    }
  }
  else {
    for(int i = 0; i < 8; i++) {
      _write_pin(sr.dataPin, (value & 1) ? HIGH : LOW);
      _write_pin(sr.clockPin, HIGH);
      _write_pin(sr.clockPin, LOW );
      value >>= 1;  //LSBFIRST
    }
  }
}

void _write_pin(int pin, int value) {
	if(pin >= 0 && pin <= 7) {
		  SETBIT( *(0x2A), pin);
		  SETBIT( *(0x2B),   1);
		RESETBIT( *(0x2A), pin);
	}
	if(pin >= 8 && pin <= 13) {
		  SETBIT( *(0x24), pin);
		  SETBIT( *(0x25),   1);
		RESETBIT( *(0x24), pin);
	}	
}
