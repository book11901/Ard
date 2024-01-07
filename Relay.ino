#include <stdio.h>
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
void setup(){
   pinMode(IN1,OUTPUT);
   pinMode(IN2,OUTPUT);
   pinMode(IN3,OUTPUT);
}
void loop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  delay(10000);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  delay(10000);
  //digitalWrite(IN1,HIGH);
  //digitalWrite(IN2,HIGH);
  //digitalWrite(IN3,LOW);
  //delay(10000);
}