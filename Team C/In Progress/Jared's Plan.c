#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  LLiftEncode,    sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  RLiftEncode,    sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port2,           FR,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           BR,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           FL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           BL,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           LLift,         tmotorVex393_MC29, PIDControl, encoderPort, I2C_1)
#pragma config(Motor,  port7,           RLift,         tmotorVex393_MC29, PIDControl, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port8,           claw1,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           claw2,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//this file for jared's plan
task main()
{

while (true)
{
//move to relative area
	motor[FR] = 127;
	motor[BR] = 127;
	motor[FL] = 127;
	motor[BL] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//rotate 90 degrees to the right
	motor[FR] = 127;
	motor[BR] = -127;
	motor[FL] = 127;
	motor[BR] = -127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//move forward into position
	motor[FR] = 127;
	motor[BR] = 127;
	motor[FL] = 127;
	motor[BL] = 127;
	wait1Msec(3000)

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//rotate left to be in line with the yellow cone
	motor[FR] = -127;
	motor[BR] = 127;
	motor[FL] = -127;
	motor[BR] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//position claw system


//pick up yellow cone

//back up out of position
	motor[FR] = -127;
	motor[BR] = -127;
	motor[FL] = -127;
	motor[BR] = -127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//rotate 90 degrees to the right
	motor[FR] = -127;
	motor[BR] = 127;
	motor[FL] = -127;
	motor[BR] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//back up a little
	motor[FR] = -127;
	motor[BR] = -127;
	motor[FL] = -127;
	motor[BR] = -127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//rotate 90 degrees to the left
	motor[FR] = -127;
	motor[BR] = 127;
	motor[FL] = -127;
	motor[BR] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//move forward into position
	motor[FR] = 127;
	motor[BR] = 127;
	motor[FL] = 127;
	motor[BL] = 127;
	wait1Msec(3000)

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//put the yellow cone on the goal

//lift claw back up

//grab mobile goal

//back up
	motor[FR] = -127;
	motor[BR] = -127;
	motor[FL] = -127;
	motor[BR] = -127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//rotate 180 degrees to the right
	motor[FR] = -127;
	motor[BR] = 127;
	motor[FL] = -127;
	motor[BR] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//drive mobile goal into goal zone
	motor[FR] = 127;
	motor[BR] = 127;
	motor[FL] = 127;
	motor[BR] = -127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//likely end to the program
}
}
