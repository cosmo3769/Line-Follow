#define lc 0 //black
#define sc 1 //white

//Pins specified for right motor
const int motorRPin1=3;
const int motorRPin2=5;


//Pins specified for left motor
const int motorLPin1=10;
const int motorLPin2=11;


//Pins specified for 8 channel ir sensor array
const int irSensor0=2;
const int irSensor1=4;
const int irSensor2=14;
const int irSensor3=6;
const int irSensor4=7;
const int irSensor5=8;
const int irSensor6=9;
const int irSensor7=15;


void go();
void stopme();
void left_05();
void right_05();
void left_10();
void right_10();
void left_15();
void right_15();
void left_20();
void right_20();
void left_25();
void right_25();
void extremeLeft();
void extremeRight();

//Setup for line following robot
void setup() {

//for serial monitor
  Serial.begin(9600);

//for pinMode for right motor                                           
  pinMode(motorRPin1, OUTPUT);
  pinMode(motorRPin2, OUTPUT);                                   
 

//for pinMode for left motor
  pinMode(motorLPin1, OUTPUT);
  pinMode(motorLPin2, OUTPUT);                                   


//for pinMode for 8 channel ir sensor array
  pinMode(irSensor0, INPUT);
  pinMode(irSensor1, INPUT);
  pinMode(irSensor2, INPUT);
  pinMode(irSensor3, INPUT);
  pinMode(irSensor4, INPUT);
  pinMode(irSensor5, INPUT);
  pinMode(irSensor6, INPUT);
  pinMode(irSensor7, INPUT);

}


//loop for line following robot using if-else
void loop() {


  int val0=digitalRead(irSensor0);
  int val1=digitalRead(irSensor1);
  int val2=digitalRead(irSensor2);
  int val3=digitalRead(irSensor3);
  int val4=digitalRead(irSensor4);
  int val5=digitalRead(irSensor5);
  int val6=digitalRead(irSensor6);
  int val7=digitalRead(irSensor7);

  

  if((val3==lc) && (val4==lc) && (val0==sc) && (val1==sc) && (val2==sc) && (val5==sc) && (val6==sc) && (val7==sc)) {
    go();
  }
  else if((val0==lc) && (val7==lc)) {
    stopme();
  }
  else if((val2==lc) && (val3==lc) && (val4==lc) && (val5==sc)) {
    left_05();
  }
  else if((val3==lc) && (val4==lc) && (val5==lc) && (val2==sc)) {
    right_05();
  }
  else if((val2==lc) && (val3==lc) && (val1==sc) && (val4==sc)) {
    left_10();
  }
  else if((val4==lc) && (val5==lc) && (val3==sc) && (val6==sc)) {
    right_10();
  }
  else if((val1==lc) && (val2==lc) && (val3==lc) && (val4==sc)) {
    left_15();
  }
  else if((val4==lc) && (val5==lc) && (val6==lc) && (val3==sc)) {
    right_15();
  }
  else if((val1==lc) && (val2==lc) && (val0==sc) && (val3==sc)) {
    left_20();
  }
  else if((val5==lc) && (val6==lc) && (val4==sc) && (val7==sc)) {
    right_20();
  }
  else if((val0==lc) && (val1==lc) && (val2==lc) && (val3==sc)) {
    left_25();
  }
  else if((val5==lc) && (val6==lc) && (val7==lc) && (val4==sc)) {
    right_25();
  }
  else if((val0==lc) && (val1==lc) && (val2==lc) && (val3==lc)) {
    extremeLeft();
  }
  else if((val4==lc) && (val5==lc) && (val6==lc) && (val7==lc)) {
    extremeRight(); 
  }
}

void go() {  
  Serial.println("\tforward ");
  
  analogWrite(motorRPin1, 120);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 120);
  analogWrite(motorLPin2, 0);
}

void stopme() {
  Serial.println("\tstop");
     
  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 0);
  
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 0);
}

void left_05() {

  Serial.println("\tslight left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 90);
     
  analogWrite(motorLPin1, 90);
  analogWrite(motorLPin2, 0);                                                                   
}

void right_05() {                                                                                     

  Serial.println("\tslight right turn");

  analogWrite(motorRPin1, 90);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 90);
}

void left_10() {

  Serial.println("\tslight left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 90);
     
  analogWrite(motorLPin1, 90);
  analogWrite(motorLPin2, 0);  
}

void right_10() {

  Serial.println("\tslight right turn");

  analogWrite(motorRPin1, 90);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 90);
}

void left_15() {

  Serial.println("\tslight left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 90);
     
  analogWrite(motorLPin1, 90);
  analogWrite(motorLPin2, 0);  
}

void right_15() {

  Serial.println("\tslight right turn");

  analogWrite(motorRPin1, 90);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 90);
}

void left_20() {

  Serial.println("\tslight left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 90);
     
  analogWrite(motorLPin1, 90);
  analogWrite(motorLPin2, 0);  
}

void right_20() {

  Serial.println("\tslight right turn");

  analogWrite(motorRPin1, 90);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 90);
}

void left_25() {

  Serial.println("\tslight left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 90);
     
  analogWrite(motorLPin1, 90);
  analogWrite(motorLPin2, 0);  
}

void right_25() {

  Serial.println("\tslight right turn");

  analogWrite(motorRPin1, 90);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 90);
}

void extremeLeft() {
  Serial.println("\tleft turn");
 
  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 90);
     
  analogWrite(motorLPin1, 90);
  analogWrite(motorLPin2, 0);  
}

void extremeRight() {
  Serial.println("\tright turn");
  
  analogWrite(motorRPin1, 90);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 90);
}

  

  
