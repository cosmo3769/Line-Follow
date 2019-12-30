const int motorpin1 = 5;
const int motorpin2 = 6;

void setup() {
  pinMode(motorpin1, OUTPUT);
  pinMode(motorpin2, OUTPUT);
}

void loop() {

  analogWrite(motorpin1, 255);
  analogWrite(motorpin2, 0);
  
}
