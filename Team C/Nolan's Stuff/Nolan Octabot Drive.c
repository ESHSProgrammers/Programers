#pragma config(Motor,  port2,           FR,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           BR,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           FL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           BL,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           LLL,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           LUL,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           RLL,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           RUL,           tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (true)
{
//comment tankdrive/Strafe
motor[FR]=vexRT[Ch2]+-vexRT[Ch1];
motor[BR]=vexRT[Ch2]+vexRT[Ch1];
motor[FL]=vexRT[Ch3]+vexRT[Ch4];
motor[BL]=vexRT[Ch3]+-vexRT[Ch4];
}

if(vexRT[Btn5U])
{
motor[LLL]=127;
}
else if(vexRT[Btn5D])
{
motor[LLL]=-127;
}
else
{
motor[LLL]=0;
}
}