#include <RomeoMotor.h>

/*
5~23v power source to VIN & GND pins.
PWM 0-255

For V1 use pins:
	E1 = 6;	Motor 1 Speed Control
	E2 = 9;  Motor 2 Speed Control
	M1 = 7;  Motor 1 Direction Control
	M2 = 8;  Motor 2 Direction Control
	
For V2 use pins:
	E1 = 5;	Motor 1 Speed Control
	E2 = 6;  Motor 2 Speed Control
	M1 = 4;  Motor 1 Direction Control
	M2 = 7;  Motor 2 Direction Control
	
*/

// Creates instance of RomeoMotor called Motor.
RomeoMotor Motor(5,6,4,7);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
  Motor.Advance(127);
  delay(2000);
  Motor.Right(127);
  delay(2000);
  Motor.Left(127);
  delay(2000);
  Motor.Reverse(127);
  delay(2000);
  Motor.Stop();
  delay(10000);
}
