//#include<ArdShift.h>

int data = 8;
int clk  = 9;
int latch= 7;

typedef struct shiftReg_t {
 unsigned  data:4;
 unsigned   clk:4;
 unsigned latch:4;
} ShiftReg;

void WriteByte(ShiftReg, char);

void main() {
 ShiftReg sr = {data, clk, latch};
 WriteByte(sr, 4);
}

void WriteByte(ShiftReg sr, char byte) {

}


