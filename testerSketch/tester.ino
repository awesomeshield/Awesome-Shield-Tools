// tell the Arduino you're using the Awesome Shield library
#include <Awesome.h>
// tell the Arduino you're using the Awesome Shield hardware
Awesome awesome;

// declare variables here


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  // put your main code here, to run repeatedly:
  // test LED
  awesome.LED.turnOn();
  delay(500);
  awesome.LED.turnOn(RED);
  delay(500);
  awesome.LED.turnOn(GREEN);
  delay(500);
  awesome.LED.turnOn(BLUE);
  delay(500);
  awesome.LED.turnOff();

  // test buzzer
  awesome.buzzer.beep(500);

  // test button
  Serial.println("waiting for button press...");
  awesome.LED.turnOn(RED);
  while ( ! awesome.button.isDown() ) {
    // wait
  }
  awesome.LED.turnOn(GREEN);
  Serial.println("Button is working.");
  delay(350);
  awesome.LED.turnOff();
  // test switch
  awesome.LED.turnOn(RED);
  Serial.println("waiting for switch state change ...");
  bool initialSwitchState = awesome.toggleSwitch.isOn();
  while ( awesome.toggleSwitch.isOn() == initialSwitchState ) {
    // wait
  }
  awesome.LED.turnOn(GREEN);
  Serial.println("Toggle switch is working.");
  delay(350);
  awesome.LED.turnOff();
}

void loop() {
  // test sensors
  Serial.println("temp reading: ");
  Serial.println(awesome.temperatureSensor.reading());
  Serial.println("light reading: ");
  Serial.println(awesome.lightSensor.reading());
  Serial.println("knob: ");
  Serial.println(awesome.knob.reading());
  Serial.println("port1 knob reading: ");
  Serial.println(awesome.port1.knob.reading());
  Serial.println("port2 knob reading: ");
  Serial.println(awesome.port2.knob.reading());
  delay(1500);
}
