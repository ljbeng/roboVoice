#include <roboVoice.h>
#include <SoftwareSerial.h>


SoftwareSerial mySerial(6,7);
roboVoice myRobot;

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  myRobot.begin(mySerial);
  myRobot.reset();  
}

void loop() {
  // put your main code here, to run repeatedly:

  myRobot.speak("hello.");
  delay(1000);
  myRobot.voice(PrecisePete);
  delay(1000);
  myRobot.volume(9);
  delay(1000);  
}
