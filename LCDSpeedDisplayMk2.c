#pragma config(Sensor, dgtl1,  MotorA,         sensorQuadEncoder)
#pragma config(Motor,  port1,           MotorA,        tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()

{bLCDBacklight = true;

	displayLCDCenteredString(0,"Left    Right");
	float ldec = SensorValue[MotorA];

	displayLCDNumber(1,1,ldec,2);

	if (nLCDButtons == 2)
	{
		SensorValue[MotorA] = 0;

	}




}
