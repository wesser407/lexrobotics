#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port6,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)

task gCube()
{
	moveMotor(armMotor, 500, degrees, 70);
}

task main()
{
  if(getTouchLEDValue(touchLED) == colorRed)
  {
  	startTask(Right);
  }
}

task Right()
{
	forward(1.6, rotations, 70);
  startTask(gCube);
  forward(2.5, rotations, 70);
  moveMotor(armMotor, -200, degrees, 70);
  backward(1, rotations, 70);
}

task Left()
{
	forward(1.6, rotations, 70);
	startTask(gCube);
	forward(2.5, rotations, 70);
	movemotor(armMotor, -200, degrees, 70);
}
