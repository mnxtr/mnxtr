
// Define motor pins
const int motorLeftForward = 2;
const int motorLeftBackward = 3;
const int motorRightForward = 4;
const int motorRightBackward = 5;

void setup() {
  // Set up motor control pins
  pinMode(motorLeftForward, OUTPUT);
  pinMode(motorLeftBackward, OUTPUT);
  pinMode(motorRightForward, OUTPUT);
  pinMode(motorRightBackward, OUTPUT);
}

void loop() {
  // Drive forward
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
  delay(1000);
  
  // Stop
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorRightForward, LOW);
  delay(500);
  
  // Drive backward
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorLeftBackward, HIGH);
  digitalWrite(motorRightForward, LOW);
  digitalWrite(motorRightBackward, HIGH);
  delay(1000);
  
  // Stop
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightBackward, LOW);
  delay(500);
}