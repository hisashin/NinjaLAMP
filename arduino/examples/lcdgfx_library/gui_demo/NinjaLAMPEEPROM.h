#ifndef ___ADC_ARDUINO___
#define ___ADC_ARDUINO___
#include "Arduino.h"
#include <Wire.h>

#define ADDR_Ax 0b000 //A2, A1, A0
#define ADDR (0b1010 << 3) + ADDR_Ax


class NinjaLAMPEEPROM {
  public:
    NinjaLAMPEEPROM();
    void setup();
    void writeI2CArray(byte data_addr, byte* data, byte len);
    void writeI2CByte(byte data_addr, byte data);
    byte readI2CByte(byte data_addr);
};
#endif /* ___ADC_ARDUINO___ */