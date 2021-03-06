#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port6,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)
task gCube()
{
	moveMotor(armMotor, 500, degrees, 70);
}

task SR()
{
	forward(1.6, rotations, 70);
  startTask(gCube);
  forward(2.5, rotations, 70);
  moveMotor(armMotor, -200, degrees, 70);
  backward(1, rotations, 70);
  turnRight(240, degrees, 70);
}

task SL()
{
	forward(1.6, rotations, 70);
	startTask(gCube);
	forward(2.5, rotations, 70);
	moveMotor(armMotor, -200, degrees, 70);
}

task main()
{
	wait(1, seconds);
	if(SensorValue[touchLED] == 1)
	{
		setTouchLEDColor(touchLED, colorRed);
		startTask(SL);
	}
	else
	{
		setTouchLEDColor(touchLED,colorBlue);
		startTask(SR);
	}
}
