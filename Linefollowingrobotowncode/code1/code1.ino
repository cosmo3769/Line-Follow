//Pins specified for right motor
const int motorRPin1=14;
const int motorRPin2=15;
const int motorRenable=3;

//Pins specified for left motor
const int motorLPin1=16;
const int motorLPin2=17;
const int motorLenable=11;

//PWM value for speed control
const int motorRSpeed=255;                            
const int motorLSpeed=255;

//Pins specified for 8 channel ir sensor array
const int irSensor0=2;
const int irSensor1=4;
const int irSensor2=5;
const int irSensor3=6;
const int irSensor4=7;
const int irSensor5=8;
const int irSensor6=9;
const int irSensor7=10;

void go();
void stopme();
void rightS();
void leftS();

//Setup for line following robot
void setup() {

//for serial monitor
  Serial.begin(9600);

//for pinMode for right motor                                           
  pinMode(motorRPin1, OUTPUT);
  pinMode(motorRPin2, OUTPUT);                                   
  pinMode(motorRenable, OUTPUT);

//for pinMode for left motor
  pinMode(motorLPin1, OUTPUT);
  pinMode(motorLPin2, OUTPUT);                                   
  pinMode(motorLenable, OUTPUT);

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

int  val0=digitalRead(irSensor0);
int  val1=digitalRead(irSensor1);
int  val2=digitalRead(irSensor2);
int  val3=digitalRead(irSensor3);
int  val4=digitalRead(irSensor4);
int  val5=digitalRead(irSensor5);
int  val6=digitalRead(irSensor6);
int  val7=digitalRead(irSensor7);

  if(val0==val1==val2==val5==val6==val7==1 && val3==val4==0) {
    go();
  }
  else if(val0==val1==val2==val3==val4==val5==val6==val7==0) {
    stopme();
  }
  else if((val0==val1==val5==val6==val7==1 && val2==val3==val4==0) || (val0==val1==val2==val4==val5==val6==val7==1 && val3==0) || (val0==val1==val2==val3==val4==0 && val5==val6==val7==1)) {
    leftS();
  }
  else if((val0==val1==val5==val6==val7==1 && val2==val3==val4==0) || (val0==val1==val2==1 && val3==val4==val5==val6==val7==1)) {
    rightS(); 
  }

}
void rightS() 

{
     Serial.println("                         right turn");
     analogWrite(motorRenable, motorRSpeed);
     digitalWrite(motorRPin1, HIGH);
     digitalWrite(motorRPin2, LOW);
     
     analogWrite(motorLenable, motorLSpeed);
     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorLPin2,HIGH);
  
}


void leftS()  //turn left
{
     Serial.println("                         left turn");
     analogWrite(motorRenable, motorRSpeed);
     digitalWrite(motorRPin1, LOW);
     digitalWrite(motorRPin2, HIGH);
     
     analogWrite(motorLenable, motorLSpeed);
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorLPin2, LOW);
  
}

void go()
{
    Serial.println("                         forward ");
     analogWrite(motorRenable, motorRSpeed);
     digitalWrite(motorRPin1, HIGH);
     digitalWrite(motorRPin2, LOW);
     
     analogWrite(motorLenable, motorLSpeed);
     digitalWrite(motorLPin1, HIGH);
     digitalWrite(motorLPin2, LOW);
  
}

void stopme()
{
     Serial.println("                         stop");
     analogWrite(motorRenable, motorRSpeed);
     digitalWrite(motorRPin1, LOW);
     digitalWrite(motorRPin2, LOW);
     
     analogWrite(motorLenable, motorLSpeed);
     digitalWrite(motorLPin1, LOW);
     digitalWrite(motorLPin2, LOW);
  
}


  

  
