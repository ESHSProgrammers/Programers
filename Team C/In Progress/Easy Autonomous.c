
task main()
{
while (true)
{
//move to mobile goal
	motor[FR] = 127;
	motor[BR] = 127;
	motor[FL] = 127;
	motor[BR] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//position claw system


//pick up mobile goal


//move back a little
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
	motor[FR] = 127;
	motor[BR] = -127;
	motor[FL] = 127;
	motor[BR] = -127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;

//move the mobile goal into point zones
	motor[FR] = 127;
	motor[BR] = 127;
	motor[FL] = 127;
	motor[BR] = 127;
	wait1Msec(3000);

	motor[FR] = 0;
	motor[BR] = 0;
	motor[FL] = 0;
	motor[BL] = 0;
}
