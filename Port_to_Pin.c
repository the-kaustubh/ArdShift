
int _pin_to_port(int pin, int io) {
    // 1 is Output || 0 is Input
    if(pin >= 0 && pin <=7) {
        *(0x2a) = io;
    } else if (pin >= 8 && pin <= 13) {
        *(0x24) = io;
    }
    
}


