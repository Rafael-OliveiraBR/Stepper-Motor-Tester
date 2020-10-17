/***************************************
* ----------------------------
*     STEPPER MOTOR TESTER
* ----------------------------
* This program allows to test
* any stepper motor by using
* accelstepper.h library.
*
*
* Created by: Rafael Oliveira
* https://github.com/Rafael-OliveiraBR
****************************************/


#include <Arduino.h>
#include <AccelStepper.h>

int led = 9;
int sensor = 4;


void setup() {

  digitalWrite(led, HIGH);
  pinMode (sensor, INPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:
}

void getdata() {


}