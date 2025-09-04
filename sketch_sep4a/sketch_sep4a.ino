#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

Adafruit_DCMotor *rightMotor = AFMS.getMotor(4);
Adafruit_DCMotor *leftMotor = AFMS.getMotor(3);
void setup() {
  AFMS.begin();
}

void loop() {
forwards();
right();
left();
}

void forwards(){
  rightMotor->setSpeed(500);
  leftMotor->setSpeed(362.5);
  
  rightMotor->run(FORWARD);
  leftMotor->run(FORWARD);
  delay(500);
}

void right(){
    rightMotor->setSpeed(100);
  leftMotor->setSpeed(100);
  
  rightMotor->run(BACKWARD);
  leftMotor->run(FORWARD);
delay(300);
}

void left(){
      rightMotor->setSpeed(100);
  leftMotor->setSpeed(100);
  
  rightMotor->run(FORWARD);
  leftMotor->run(BACKWARD);
delay(100);
}

void backwards(){
delay(500);
}
