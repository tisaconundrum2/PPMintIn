/*
  PPMintIn.h - Library for allowing ease of use of the PinChangeInt library
  Created by Nicholas Finch, August 21, 2015
  Open Source - AS IS
  Feel free to distribute but keep this header here
*/

#ifndef PPMINTIN_H
#define PPMINTIN_H

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
  #else
  #include "WProgram.h"
#endif
#include "PinChangeInt.h"

class PPMintIn{
public:
    PPMintIn(int pin);
    void begin();
    void getSignal();
    int _pin;
    volatile int pwm_value;
    volatile int prev_time;
    uint8_t latest_interrupted_pin;
private:
    void rising();
    void falling();
};

#endif // PPMINTIN_H
