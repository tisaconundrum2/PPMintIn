/*
  PPMintIn.h - Library for allowing ease of use of the PinChangeInt library
  Created by Nicholas Finch, August 21, 2015
  Open Source - AS IS
  Feel free to distribute but keep this header here
*/
#ifndef _PPMINTIN_H
#define _PPMINTIN_H

#if (ARDUINO >= 100)
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

class PPMintIn {
	public:
	    PPMintIn(int pin);
	    void begin();
	private:
	    void rising();
	    void falling();
	    volatile int pwm_value;
	    volatile int prev_time;
	    uint8_t latest_interrupted_pin;
		int _pin;
};

#endif
