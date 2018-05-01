/*

Created by Luke J Barker, April 17, 2018.
Released into the public domain.
*/
#ifndef roboVoice_h
#define roboVoice_h

#include "Arduino.h"
#define  PerfectPaul 0
#define Vader 1
#define BigBob 2
#define PrecisePete 3
#define RicochetRandy 4
#define Biff 5
#define Skip 6
#define RoboRobert 7
#define Goliath 8
#define Alvin 9
#define Gretchen 10

class roboVoice
{
public:
   	roboVoice();
   	void begin(Stream &serial);
   	void speak(String SayWhat);
   	void reset();
   	void pause();
   	void resume();
   	void stop();
	void voice(unsigned int vc);
	void volume(unsigned int vol);

private:
	Stream* _serial;

};
#endif