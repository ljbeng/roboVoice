#include "Arduino.h"

#include "roboVoice.h"


roboVoice::roboVoice(){

	
}


void roboVoice::speak(String SayWhat)
{
  for (int i = 0; i < SayWhat.length(); i++)
  {
    _serial->write(SayWhat[i]);
  }
  _serial->write(0xd);
}



//initialize routine
void roboVoice::begin(Stream &serial)
{

_serial = &serial;

}

void roboVoice::reset()
{
	_serial->write('@');
	_serial->write(1);//will be transmitted immediately and reset/quite voice
	_serial->write(0xd);
	}

void roboVoice::resume()
{
	
	_serial->write(0x12);
	_serial->write(0xd);
}
void roboVoice::stop()
{
	_serial->write(0x18);
	_serial->write(0xd);
}
void roboVoice::pause()
{
	
	_serial->write(0x10);
	_serial->write(0xd);
}
void roboVoice::voice(int vc)
{
	
	_serial->write(1);
	_serial->print(vc);
	_serial->write('O');
	_serial->write(0xd);
}
void roboVoice::volume(int vol)
{
	if (vol > 10)
		vol = 9;
	_serial->write(1);
	_serial->print(vol);
	_serial->write('V');
	_serial->write(0xd);
}