const int motorpin1 = 5;
const int motorpin2 = 6;
const int motorpin3 = 9;
const int motorpin4 = 10;

void setup() {
  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
  pinMode(motorpin3, OUTPUT);
  pinMode(motorpin4, OUTPUT);
}

void loop() {

  analogWrite(motorpin1, 255);
  analogWrite(motorpin2, 0);

  analogWrite(motorpin3, 255);
  analogWrite(motorpin4, 0);
  
}
