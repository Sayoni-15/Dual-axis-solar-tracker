#include <Servo.h>

Servo horizontalServo;
Servo verticalServo;

const int topLDR = A0;
const int bottomLDR = A1;
const int leftLDR = A2;
const int rightLDR = A3;

const int horizontalPin = 9;
const int verticalPin = 10;

int horizontalAngle = 90;
int verticalAngle = 90;

const int threshold = 50;
const int stepSize = 1;

const int minAngle = 0;
const int maxAngle = 180;

void setup() {
  Serial.begin(9600);

  horizontalServo.attach(horizontalPin);
  verticalServo.attach(verticalPin);

  horizontalServo.write(horizontalAngle);
  verticalServo.write(verticalAngle);

  delay(500);
}


void loop() {
  int topValue = analogRead(topLDR);
  int bottomValue = analogRead(bottomLDR);
  int leftValue = analogRead(leftLDR);
  int rightValue = analogRead(rightLDR);

  int horizontalDifference = leftValue - rightValue;
  int verticalDifference = topValue - bottomValue;

  if (horizontalDifference > threshold) {
    horizontalAngle--;
  } 
  else if (horizontalDifference < -threshold) {
    horizontalAngle++;
  }

  if (verticalDifference > threshold) {
    verticalAngle--;
  } 
  else if (verticalDifference < -threshold) {
    verticalAngle++;
  }

  horizontalAngle = constrain(horizontalAngle, 0, 180);
  verticalAngle = constrain(verticalAngle, 0, 180);

  horizontalServo.write(horizontalAngle);
  verticalServo.write(verticalAngle);

  Serial.print("Top: "); Serial.print(topValue);
  Serial.print(" Bottom: "); Serial.print(bottomValue);
  Serial.print(" Left: "); Serial.print(leftValue);
  Serial.print(" Right: "); Serial.print(rightValue);
  Serial.print(" | H: "); Serial.print(horizontalAngle);
  Serial.print(" | V: "); Serial.println(verticalAngle);

  delay(100);
}
