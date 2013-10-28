/**
* File: Motor.h
*
* Defines the basic motor functionality for SLAM Robot built 
* using the adafruit motor shield. The robot contains 4
* standard DC motors.
*
* NOTE: Figure out why uncommenting turnRight and turnLeft yields a 
* 'boolean' does not name a type error! Seems that you cannot
* return type boolean from a function contained within a header file 
* in Arduino C?!?
*
* @author Joshua Michael Daly
* @version 27/10/2013
*/

#include <AFMotor.h>

#define MOTOR_1_SPEED 200
#define MOTOR_2_SPEED 200
#define MOTOR_3_SPEED 200
#define MOTOR_4_SPEED 200

/*
* Create the 4 motors on the rover, 64KHZ PWN on motor 1 and 2 
* uses more power but generates less electrical noise. Motors 
* 3 and 4 will only run a 1KHZ and will ignore any setting 
* given.
*/
AF_DCMotor motor1(1, MOTOR12_64KHZ); 
AF_DCMotor motor2(2, MOTOR12_64KHZ); 
AF_DCMotor motor3(3); 
AF_DCMotor motor4(4);

/************************************************************
* Motor Functions
************************************************************/

/**
* Sets the speed for all 4 motors.
*/
void setMotorSpeeds();

/**
* Releases all 4 motors.
*/
void releaseAllMotors();

/**
* Drives all 4 motors forward.
*/
void driveForward();

/**
* Drives all 4 Motors forward for the duration in milliseconds.
*
* @param duration time to drive forwards for in milliseconds
*/
void driveForward(unsigned long duration);

/**
* Drives all 4 Motors backward.
*/
void driveBackward();

/**
* Drives all 4 Motors backward for the duration in milliseconds.
*
* @param duration duration time to drive backwards for in milliseconds
*/
void driveBackward(unsigned long duration);

// N.B. Uncommenting this declartion yields a 'boolean' does not name a type error
//
///**
//* Turns the robot right using motors 1 and 2.
//*/
//boolean turnRight(unsigned short path);

/**
* Turns the robot right using motors 1 and 2 for the duration in milliseconds.
*
* @param duration duration time to turn right for in milliseconds
*/
void turnRight(unsigned short path, unsigned long duration);

// N.B. Uncommenting this declartion yields a 'boolean' does not name a type error
//
///**
//* Turns the robot left using motors 3 and 4.
//*/
//boolean turnLeft(unsigned short path);

/**
* Turns the robot left using motors 3 and 4 for the duration in milliseconds.
*
* @param duration duration time to turn left for in milliseconds
*/
void turnLeft(unsigned short path, unsigned long duration);