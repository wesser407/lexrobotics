#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port6,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)

task findCube()
{
	if (getcolorname(colorDetector) == colorGreen);
		startTask(gCube);	
	else if (getcolorname(colorDetecter) == colorRed);
		startTask(rCube);
	else if (getcolorname(colorDetector  == colorBlue);
		 startTask(bCube);
	else
		 forward(-0.5, rotations, 70);
		 end()
}

task gCube()
{
	starttask(pickUp)
	forward(2.5, rotations, 70);
	movemMotor(armMotor, -200, degrees, 70);
	backward(1, rotations, 70);
	end
}
		 
task pickUp()

		 
task main()
{
  forward(1.6, rotations, 70);
  startTask(findCube);
  forward(2.5, rotations, 70);
  moveMotor(armMotor, -200, degrees, 70);
  backward(1, rotations, 70);
}
