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

task main()
{

while (true)
{
	motor[FR] = 127;
	motor[BR]  = 127;
	motor[FL] = 127;
	motor[BL] = 127;
	wait1Msec(3000);
}
}