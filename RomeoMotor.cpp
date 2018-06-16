/*
RomeoMotor.cpp - Library file for Romeo motor control.
Created by Sean Taylor, 16 June 2018.
*/

#include "Arduino.h"
#include "RomeoMotor.h"

RomeoMotor::RomeoMotor(int E1, int E2, int M1, int M2)
{
	pinMode(E1, OUTPUT);
	_E1 = E1;
	
	pinMode(E1, OUTPUT);
	_E2 = E2;
	
	pinMode(E1, OUTPUT);
	_M1 = M1;
	
	pinMode(E1, OUTPUT);
	_M2 = M2;
}

void RomeoMotor::Stop()
{
	digitalWrite(_E1, LOW);
	digitalWrite(_E2, LOW);
}

void RomeoMotor::Advance(int speed)
{
	analogWrite(_E1, speed);
	digitalWrite(_M1, HIGH);
	analogWrite(_E2, speed);
	digitalWrite(_M2, HIGH);
}

void RomeoMotor::Reverse(int speed)
{
	analogWrite(_E1, speed);
	digitalWrite(_M1, LOW);
	analogWrite(_E2, speed);
	digitalWrite(_M2, LOW);
}	

void RomeoMotor::Right(int speed)
{
	analogWrite(_E1, speed);
	digitalWrite(_M1, HIGH);
	analogWrite(_E2, speed);
	digitalWrite(_M2, LOW);
}

void RomeoMotor::Left(int speed)
{
	analogWrite(_E1, speed);
	digitalWrite(_M1, LOW);
	analogWrite(_E2, speed);
	digitalWrite(_M2, HIGH);
}