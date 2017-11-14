#pragma config(Sensor, in1,    gyro,           sensorGyro)
#pragma config(Sensor, in2,    leftP,          sensorPotentiometer)
#pragma config(Sensor, in3,    rightP,         sensorPotentiometer)
#pragma config(Sensor, in4,    light,          sensorReflection)
#pragma config(Sensor, in5,    Battery,        sensorAnalog)
#pragma config(Sensor, dgtl1,  leftBase,       sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  rightBase,      sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  leftSonar,      sensorSONAR_mm)
#pragma config(Sensor, dgtl7,  rightSonar,     sensorSONAR_mm)
#pragma config(Sensor, dgtl9,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl10, Bumper,         sensorTouch)
#pragma config(Sensor, dgtl11, Red,            sensorLEDtoVCC)
int autonomousMode = 1;
int driverControlModeCount = 1;
const float _rotations = 360.0;

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!
#pragma DebuggerWindows("VexLCD")

#pragma platform(VEX)

#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"

void clearLCD ()
{
	bLCDBacklight = true;
	clearLCDLine(0);
	clearLCDLine(1);
}



//////////////////////////////////////////////DriverControl
void TankDrive()
{



}

//////////////////////////////////////////////autonomous
void autonomous1 ()
{

}
void autonomous2 ()
{

}
void autonomous3 ()
{
}
void autonomous4 ()
{

}
void autonomous5 ()
{


}
void autonomous6 ()
{


}
void autonomous7 ()
{
}
void autonomous8 ()
{
}
void autonomous9 ()
{
}
void autonomous10 ()
{
}
void autonomous11 ()
{
}
void autonomous12 ()
{
}
void autonomousSelection ()
{
	////////////////////////////////////////////////ClearLCD



	clearLCD();

	while (nLCDButtons != 2)
	{
		displayLCDCenteredString(0,"Autonomous");
		displayLCDNumber(0,14,autonomousMode,2);
		displayLCDCenteredString(1,"<<  Selection >>");
		if (nLCDButtons == 1)
		{
			autonomousMode--;
			while(nLCDButtons == 1){wait1Msec(10);}
		}
		if (nLCDButtons == 4)
		{
			autonomousMode++;
			while(nLCDButtons == 4){wait1Msec(10);}
		}
		if (autonomousMode < 1)
		{
			autonomousMode = 12;
		}
		else if (autonomousMode > 12)
		{
			autonomousMode = 1;
		}
		wait1Msec(10);
	}
	clearLCD();
}

/////////////////////////////////////////////////////Nothing


void nothingOnScreen ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Currently");
	displayLCDCenteredString(1,"Empty");
}
///////////////////////////////////////////////////////Batterydisplay
void displayBatteryValues ()

{bLCDBacklight = true;

	string mainBatteryVoltage, backupBatteryVoltage;

	displayLCDString(0,0,"Main:");

	displayLCDString(1,0,"BackUp:");

	sprintf(mainBatteryVoltage,"%1.2f%c",nImmediateBatteryLevel/1000.0,'V');

	sprintf(backupBatteryVoltage,"%1.2f%c",BackupBatteryLevel/1000.0,'V');

	displayLCDString(0,8,mainBatteryVoltage);

	displayLCDString(1,8,backupBatteryVoltage);
}
//////////////////////////////////////////////////////SwapAuton

void swapAuton ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Autonomous");
	displayLCDCenteredString(1,"Swap");
	displayLCDNumber(0,14,autonomousMode,2);
	if (nLCDButtons == 2)
	{
		autonomousMode++;
		while(nLCDButtons == 2){wait1Msec(10);}
	}
	if (autonomousMode > 12)
	{
		autonomousMode = 1;
	}
}
/////////////////////////////////////////////////////Start Acton
void startAuton ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"press to");
	displayLCDCenteredString(1,"start autonomous");
}
//////////////////////////////////////////////////////GYRO
void gyroValue ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Gyro Value");
	displayLCDNumber(1,5,SensorValue[gyro],5);
	if (nLCDButtons == 2)
	{bLCDBacklight = true;
		SensorType[gyro]=sensorNone;
		wait1Msec(1200);
		SensorType[gyro]=sensorGyro;
		wait1Msec(2000);
	}
}
////////////////////////////////////////////////////Potentiometer
void displayPotentiometerValues ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Pot Values");
	displayLCDNumber(1,2,SensorValue[leftP],4);
	displayLCDNumber(1,10,SensorValue[rightP],4);
}
////////////////////////////////////////////////////Encoders
void displayEncoderValues ()
{bLCDBacklight = true;

displayLCDCenteredString(0,"Left    Right");
	float ldec = SensorValue[leftBase];
	float rdec = SensorValue[rightBase];
	displayLCDNumber(1,1,ldec,2);
	displayLCDNumber(1,9,rdec,2);
	if (nLCDButtons == 2)
	{
		SensorValue[leftBase] = 0;
		SensorValue[rightBase] = 0;
	}
}


////////////////////////////////////////////////////[ColorSensorValue]

void displayColorSensorValue()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Color Sensor");
	displayLCDNumber(1,6,SensorValue[light],4);
}
////////////////////////////////////////////////////[UltrasonicValues]
void displayUltrasonicValues ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Ultrasonics");
	displayLCDNumber(1,2,SensorValue[leftSonar],4);
	displayLCDNumber(1,9,SensorValue[rightSonar],4);
}
////////////////////////////////////////////////////[DigitalInputs]
void displayDigitalInputs ()
{bLCDBacklight = true;
	displayLCDCenteredString(0,"Digital Inputs");
	displayLCDNumber(1,3,SensorValue[Bumper],1);
	displayLCDNumber(1,9,SensorValue[limitSwitch],1);
}
////////////////////////////////////////////////////
task driverControlViewValues ()
{bLCDBacklight = true;
	clearLCD ();
	while (true)
	{

		if (nLCDButtons == 1)
		{
			driverControlModeCount--;
			clearLCD ();
			while(nLCDButtons == 1){wait1Msec(10);}
		}
		if (nLCDButtons == 4)
		{
			driverControlModeCount++;
			clearLCD ();
			while(nLCDButtons == 4){wait1Msec(10);}
		}
		if (driverControlModeCount < 1)
		{
			driverControlModeCount = 12;
		}
		else if (driverControlModeCount > 12)
		{
			driverControlModeCount = 1;
		}

		switch (driverControlModeCount)
		{
		case 1:
			displayBatteryValues();
			break;
		case 2:
			swapAuton();
			break;
		case 3:
			startAuton();
			break;
		case 4:
			gyroValue();
			break;
		case 5:
			displayPotentiometerValues();
			break;
		case 6:
			displayEncoderValues();
			break;
		case 7:
			displayColorSensorValue();
			break;
		case 8:
			displayUltrasonicValues();
			break;
		case 9:
			displayDigitalInputs();
			break;
		case 10:
			nothingOnScreen();
			break;
		case 11:
			nothingOnScreen();
			break;
		case 12:
			nothingOnScreen();
			break;
		}
		wait1Msec(10);
	}
}
/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{bStopTasksBetweenModes = true;
	autonomousSelection ();}
// Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.

// All activities that occur before the competition starts
// Example: clearing encoders, setting servo positions, ...


/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
	if (autonomousMode == 1)
	{
		autonomous1();
	}
	else if (autonomousMode == 2)
	{
		autonomous2();
	}
	else if (autonomousMode == 3)
	{
		autonomous3();
	}
	else if (autonomousMode == 4)
	{
		autonomous4();
	}
	else if (autonomousMode == 5)
	{
		autonomous5();
	}
	else if (autonomousMode == 6)
	{
		autonomous6();
	}
	else if (autonomousMode == 7)
	{
		autonomous7();
	}
	else if (autonomousMode == 8)
	{
		autonomous8();
	}
	else if (autonomousMode == 9)
	{
		autonomous9();
	}
	else if (autonomousMode == 10)
	{
		autonomous10();
	}
	else if (autonomousMode == 11)
	{
		autonomous11();
	}
	else if (autonomousMode == 12)
	{
		autonomous12();
	}
}
// .....................................................................................
// Insert user code here.
// .....................................................................................


/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	clearLCD();
	startTask(driverControlViewValues);
	while (true)
	{

		TankDrive ();

		if ((driverControlModeCount==3&&nLCDButtons==2)||vexRT[Btn7R]==1)
		{
			startTask(autonomous);
			wait1Msec(15000);
			stopTask(autonomous);
		}
		wait1Msec(20);

}}
