// tell the Arduino you're using the Awesome Shield library
#include <Awesome.h>
// tell the Arduino you're using the Awesome Shield hardware
Awesome awesome;
// include other libraries to support ad-ons
#include "Arduino.h"
#include "Awesome.h"
#include "Wire.h"
#include "rgb_lcd.h"
#include <avr/pgmspace.h>
#include <Servo.h>

// declare variables here


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  awesome.LED.turnOn();
  delay(500);
  awesome.LED.turnOn(RED);
  delay(500);
  awesome.LED.turnOn(GREEN);
  delay(500);
  awesome.LED.turnOn(BLUE);
  delay(500);
  Serial.println("temp reading: ");
  Serial.println(awesome.temperatureSensor.reading());
  Serial.println("light reading: ");
  Serial.println(awesome.lightSensor.reading());
  Serial.println("knob: ");
  Serial.println(awesome.knob.reading());
  Serial.println("waiting for button press...");
  while ( ! awesome.button.isDown() ) {
    //
  }
  Serial.println("Button is working.");
  Serial.println("waiting for switch state change ...");
  bool initialSwitchState = awesome.toggleSwitch.isOn();
  while ( awesome.toggleSwitch.isOn() == initialSwitchState ) {
    //
  }
  Serial.println("Toggle switch is working.");

}
