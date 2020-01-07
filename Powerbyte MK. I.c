#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port3,  colorDetector,  sensorVexIQ_ColorHue)
#pragma config(Sensor, port4,  distanceMM,     sensorVEXIQ_Distance)
#pragma config(Motor,  motor1,          leftMotor,     tmotorVexIQ, openLoop, driveLeft, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, openLoop, reversed, driveRight, encoder)
#pragma config(Motor,  motor10,         armMotor,      tmotorVexIQ, openLoop, encoder)

task cubedetect()
{
 if (getColorName(port3)== colorGreen)
    moveMotor(armMotor, 150, degrees, 50);
}
task main()
{
	forward(1, rotations, 50);
	startTask(cubedetect);
}
