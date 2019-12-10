const int d0=2;
const int d1=3;
const int d2=4;
const int d3=5;
const int d4=6;
const int d5=7;
const int d6=8;
const int d7=9;


void setup() {
  Serial.begin(9600);

}

void loop() {

  int val0 = digitalRead(d0);
  int val1 = digitalRead(d1);
  int val2 = digitalRead(d2);
  int val3 = digitalRead(d3);
  int val4 = digitalRead(d4);
  int val5 = digitalRead(d5);
  int val6 = digitalRead(d6);
  int val7 = digitalRead(d7);
  
  Serial.print(val0);
  Serial.print("--");
  Serial.print(val1);
  Serial.print("--");
  Serial.print(val2);
  Serial.print("--");
  Serial.print(val3);
  Serial.print("--");
  Serial.print(val4);
  Serial.print("--");
  Serial.print(val5);
  Serial.print("--");
  Serial.print(val6);
  Serial.print("--");
  Serial.print(val7);
  Serial.print("--");
  Serial.println();
  delay(1000);
  
  
  
}
