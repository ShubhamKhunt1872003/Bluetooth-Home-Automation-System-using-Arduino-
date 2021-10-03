#include<Servo.h>
Servo servo;
  // put your setup code here, to run once:
  
void setup() {
  servo.attach(6);
  servo.write(0);
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
//  pinMode(6,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH); 
  digitalWrite(4,HIGH); 
  digitalWrite(5,HIGH); 
//  digitalWrite(6,HIGH);
}

char choice ;
void loop() {
  if (Serial.available()>0)
  {
    choice=Serial.read();
   
  
  switch(choice)
  {
    
    case 'F' :{
      digitalWrite(2,LOW);
      break;
    }
    case 'G' :{
      digitalWrite(2,HIGH);
      break;
    }
    
    case 'S' :{
      digitalWrite(3,LOW);
      break;
    }
    case 'B' :{
      digitalWrite(3,HIGH);
      break;
    }
    
    case 'L' :{
      digitalWrite(4,LOW);
      break;
    }
    case 'P' :{
      digitalWrite(4,HIGH);
      break;
    }
    
    case 'A' :{
      tone(5,700);
      break;
    }
    case 'Z' :{
      noTone(5);
      break;
    }
    
    case 'T' :{
       servo.write(180);
      break;
    }
    case 'X' :{
       servo.write(0);
      break;
    }
    
    default:{
      break;
    }
  }
 }

  

  

   
}
