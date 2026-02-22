#include <Arduino.h>
#include <Servo.h>
#define SERVO_PIN 9

void setup() {
// write your initialization code here
    Serial.begin(9600);

    // Attach the servo on pin 9
    axisServo.attach(SERVO_PIN);

    Serial.println("System: MG995 Axis Control Active");

}


void loop() {
// write your code here
    // Move to 0 degrees
    Serial.println("Moving to 0°");
    axisServo.write(0);
    delay(1000);

    // Move to 90 degrees
    Serial.println("Moving to 90°");
    axisServo.write(90);
    delay(1000);

    // Move to 180 degrees
    Serial.println("Moving to 180°");
    axisServo.write(180);
    delay(1000);

}