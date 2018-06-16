/*
RomeoMotor.h - Motor control for DFRobot Romeo v2 board.
Created by Sean Taylor, 16 June 2018.
*/

#ifndef RomeoMotor_h
#define RomoeMotor_h

#include "Arduino.h"

class RomeoMotor
{
	public:
		RomeoMotor(int E1, int M1, int E2, int M2);
		void Stop();
		void Advance(int speed);
		void Reverse(int speed);
		void Right(int speed);
		void Left(int speed);
		
	private:
		int _E1;
		int _M1;
		int _E2;
		int _M2;
};

#endif