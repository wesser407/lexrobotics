#pragma config(Sensor, port4,  touchLED,       sensorVexIQ_LED)
#pragma config(Motor,  motor7,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)

task gCube()
{
	moveMotor(armMotor, 600, degrees, 60);
}
task oCube()
{
	moveMotor(armMotor, 400, degrees, 60);
}
task rClaw()
{
	moveMotor(armMotor, -200, degrees, 60);
}

task main()
{
  forward(1.6, rotations, 60);
  startTask(gCube);
  forward(2.5, rotations, 60);
  moveMotor(armMotor, -400, degrees, 60);
  backward(0.5, rotations, 60);
  startTask(rClaw);
  turnRight (249, degrees, 60);
  forward(0.2, rotations, 60);
  startTask(oCube);
  forward(0.7, rotations, 60);
  turnRight(610 , degrees, 60);
  forward(9.5, rotations, 60);
}
