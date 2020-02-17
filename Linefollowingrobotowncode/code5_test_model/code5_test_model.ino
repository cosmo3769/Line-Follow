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
void extremeLeft();
void extremeRight();
void slightLeft();
void slightRight();
void slightMoreLeft();
void slightMoreRight();
void slightlyMoreLeft();
void slightlyMoreRight();
void oneLeft();
void oneMoreLeft();
void oneRight();
void oneMoreRight();

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

  

  if(val3==0 && val4==0 && val0==1 && val1==1 && val2==1 && val5==1 && val6==1 && val7==1) {
    go();
  }
  else if(val0==0 && val1==0 && val2==0 && val3==0 && val4==0 && val5==0 && val6==0 && val7==0) {
    stopme();
  }
  else if(val2==0 && val3==0 && val0==1 && val1==1 && val4==1 && val5==1 && val6==1 && val7==1) {
    slightLeft();
  }
  else if(val4==0 && val5==0 && val0==1 && val1==1 && val2==1 && val3==1 && val6==1 && val7==1) {
    slightRight();
  }
  else if(val1==0 && val2==0 && val0==1 && val3==1 && val4==1 && val5==1 && val6==1 && val7==1) {
    slightMoreLeft();
  }
  else if(val5==0 && val6==0 && val0==1 && val1==1 && val2==1 && val3==1 && val4==1 && val7==1) {
    slightMoreRight();
  }
  else if(val0==0 && val1==0 && val2==1 && val3==1 && val4==1 && val5==1 && val6==1 && val7==1) {
    slightlyMoreLeft();
  }
  else if(val6==0 && val7==0 && val0==1 && val1==1 && val2==1 && val3==1 && val4==1 && val5==1) {
    slightlyMoreRight();
  }
  else if(val2==0 && val0==1 && val1==1 && val3==1 && val4==1 && val5==1 && val6==1 && val7==1) {
    oneLeft();
  }
  else if(val5==0 && val0==1 && val1==1 && val2==1 && val3==1 && val4==1 && val6==1 && val7==1) {
    oneRight();
  }
  else if(val1==0 && val0==1 && val2==1 && val3==1 && val4==1 && val5==1 && val6==1 && val7==1) {
    oneMoreLeft();
  }
  else if(val6==0 && val0==1 && val1==1 && val2==1 && val3==1 && val4==1 && val5==1 && val7==1) {
    oneMoreRight();
  }
  else if(val0==0 && val1==0 && val2==0 && val3==0 && val4==0 && val5==1 && val6==1 && val7==1) {
    extremeLeft();
  }
  else if(val3==0 && val4==0 && val5==0 && val6==0 && val7==0 && val0==1 && val1==1 && val2==1) {
    extremeRight(); 
  }
}
void extremeRight() {
  
  Serial.println("\tright turn");
  
  analogWrite(motorRPin1, 100);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 100);
}


void extremeLeft() {

  Serial.println("\tleft turn");
 
  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 100);
     
  analogWrite(motorLPin1, 100);
  analogWrite(motorLPin2, 0);
}

void slightRight() {

  Serial.println("\tslight right turn");

  analogWrite(motorRPin1, 150);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 150);
}

void slightLeft() {

  Serial.println("\tslight left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 150);
     
  analogWrite(motorLPin1, 150);
  analogWrite(motorLPin2, 0);
}

void slightMoreRight() {

  Serial.println("\tslight more right turn");

  analogWrite(motorRPin1, 150);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 150);
}

void slightMoreLeft() {

  Serial.println("\tslight more left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 150);
     
  analogWrite(motorLPin1, 150);
  analogWrite(motorLPin2, 0);
}

void slightlyMoreRight() {

  Serial.println("\tslightly more right turn");

  analogWrite(motorRPin1, 150);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 150);
}

void slightlyMoreLeft() {

  Serial.println("\tslightly more left turn");

  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 150);
     
  analogWrite(motorLPin1, 150);
  analogWrite(motorLPin2, 0);
}

void oneLeft() {

  Serial.println("\tone left turn");
 
  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 150);
     
  analogWrite(motorLPin1, 150);
  analogWrite(motorLPin2, 0);
}

void oneRight() {

  Serial.println("\tone right turn");

  analogWrite(motorRPin1, 150);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 150);
}

void oneMoreLeft() {

  Serial.println("\tone more left turn");
 
  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 150);
     
  analogWrite(motorLPin1, 150);
  analogWrite(motorLPin2, 0);
}

void oneMoreRight() {

  Serial.println("\tone more right turn");

  analogWrite(motorRPin1, 150);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 150);
}

void go() {
  
  Serial.println("\tforward ");
  
  analogWrite(motorRPin1, 200);
  analogWrite(motorRPin2, 0);
     
  analogWrite(motorLPin1, 200);
  analogWrite(motorLPin2, 0);
}

void stopme() {
  
  Serial.println("\tstop");
     
  analogWrite(motorRPin1, 0);
  analogWrite(motorRPin2, 0);
  
  analogWrite(motorLPin1, 0);
  analogWrite(motorLPin2, 0);
}


  

  
