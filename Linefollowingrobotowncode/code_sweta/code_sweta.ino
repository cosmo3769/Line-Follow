const int LM1=3;
const int LM2=5;

const int RM1=10;
const int RM2=11;

const int sen0=2;
const int sen1=4;
const int sen2=14;
const int sen3=6;
const int sen4=7;
const int sen5=8;
const int sen6=19;
const int sen7=15;



void setup() {

  Serial.begin(9600);

  

       pinMode(LM1,OUTPUT);    //for motors
       pinMode(LM2,OUTPUT);
       pinMode(RM1,OUTPUT);
       pinMode(RM2,OUTPUT); 

          pinMode(sen0,INPUT);    //for sensors
          pinMode(sen1,INPUT);
          pinMode(sen2,INPUT);
          pinMode(sen3,INPUT);
          pinMode(sen4,INPUT);
          pinMode(sen5,INPUT);
          pinMode(sen6,INPUT);
          pinMode(sen7,INPUT);

}

void loop() {
  
  int a0=digitalRead(sen0);
  int a1=digitalRead(sen1);
  int a2=digitalRead(sen2);
  int a3=digitalRead(sen3);
  int a4=digitalRead(sen4);
  int a5=digitalRead(sen5);
  int a6=digitalRead(sen6);
  int a7=digitalRead(sen7);


          if((a3==0)&&(a4==0))        //forward
           {
              analogWrite(LM1,120);
              analogWrite(LM2,0);
              
              analogWrite(RM1,120);
              analogWrite(RM2,0); 
           }
          
          
           if((a3==0)&&(a4==0)&&(a5==0))    //slightright
           {
              analogWrite(LM1,0);
              analogWrite(LM2,90);
              
              analogWrite(RM1,90);
              analogWrite(RM2,0);
           }  

            if((a4==0)&&(a5==0)&&(a6==0))    //slightmoreright
           {
              analogWrite(LM1,0);
              analogWrite(LM2,90);
              
              analogWrite(RM1,90);
              analogWrite(RM2,0);    
           }

            if((a5==0)&&(a6==0)&&(a7==0))    //more than slightmoreright
           {
              analogWrite(LM1,0);
              analogWrite(LM2,90);
              
              analogWrite(RM1,90);
              analogWrite(RM2,0);    
           }

            if((a2==0)&&(a3==0)&&(a4==0))    //slightleft
           {
              analogWrite(LM1,90);
              analogWrite(LM2,0);
              
              analogWrite(RM1,0);
              analogWrite(RM2,90);    
           }
            
            if((a1==0)&&(a2==0)&&(a3==0))    //slightmoreleft
           {
              analogWrite(LM1,90);
              analogWrite(LM2,0);
              
              analogWrite(RM1,0);
              analogWrite(RM2,90);
           }    

            if((a0==0)&&(a1==0)&&(a2==0))    //stiff left
           {
              analogWrite(LM1,90);
              analogWrite(LM2,0);
              
              analogWrite(RM1,0);
              analogWrite(RM2,90);    
           }

             if((a0==1)&&(a1==1)&&(a2==1)&&(a3==1)&&(a4==1)&&(a5==1)&&(a6==1)&&(a7==1))    //backward
           {
              analogWrite(LM1,0);
              analogWrite(LM2,90);
              
              analogWrite(RM1,0);
              analogWrite(RM2,90);    
           }

            if((a0==0)&&(a1==0)&&(a2==0)&&(a3==0)&&(a4==0)&&(a5==0)&&(a6==0)&&(a7==0))    //final destination
           {
              analogWrite(LM1,0);
              analogWrite(LM2,0);
              
              analogWrite(RM1,0);
              analogWrite(RM2,0);    
           }
             
  }
