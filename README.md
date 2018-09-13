# RomeoMotor
Libary to control DFRobot Romeo PWM motors

Used to control two motors movements in;
Forwards, Backwards, Rotate left and Rotate Right.




RomeoMotor Motor(5,6,4,7);

This line sets up the pin configuration for the DF Romeo v2 (note: v1 uses different pin configuration)
Creating an instance of 'RomeoMotor' called 'Motor'.



Motor.Advance(127)

Calls the function 'Advance' which will run both motor 1 and 2 at the maximum of the motor supply voltage '127'

Example:

Using a 12vdc battery to supply power to 6vdc motors; 

max ouput value = (255/supply voltage)*motor max voltage

127.5 = (255/12)*6   

Rounding down to 127 due to the limits of int values.
