/*
  PPMintIn.h - Library for allowing ease of use of the PinChangeInt library
  Created by Nicholas Finch, August 21, 2015
  Open Source - AS IS
  Feel free to distribute but keep this header here
*/
#include "arduino.h"
#include "ppmintin.h"
#include "PinChangeInt.h"
volatile int pwm_value = 0;
volatile int prev_time = 0;
uint8_t latest_interrupted_pin = 0;

PPMintIn::PPMintIn(int pin){
    pinMode(pin, INPUT);\
    digitalWrite(pin, HIGH);
    _pin = pin;
}

void PPMintIn::rising(){
    PPMintIn::latest_interrupted_pin = PCintPort::arduinoPin;
    PCintPort::attachInterrupt(latest_interrupted_pin, &rising, RISING);
    PPMintIn::pwm_value = micros()-PPMintIn::prev_time;
}

void PPMintIn::falling(){
    PPMintIn::latest_interrupted_pin=PCintPort::arduinoPin;
    PCintPort::attachInterrupt(latest_interrupted_pin, &rising, RISING);
    PPMintIn::pwm_value = micros()-PPMintIn::prev_time;
}

void PPMintIn::begin(){
    PCintPort::attachInterrupt(_pin, &rising, RISING);
}

void PPMintIn::getSignal(){
    return(PPMintIn::pwm_value);
}
