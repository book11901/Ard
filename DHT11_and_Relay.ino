#include <stdio.h>
#include <SimpleDHT.h> 
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
int pinDHT11 = 7;
SimpleDHT11 dht11;
void setup() {
   pinMode(IN1,OUTPUT);
   pinMode(IN2,OUTPUT);
   pinMode(IN3,OUTPUT);
   Serial.begin(9600);
}
void loop() {
//===================================================
byte temperature = 0;
    byte humidity = 0;
    int err = SimpleDHTErrSuccess;
    // start working...
    Serial.println("=================================");
    if ((err = dht11.read(pinDHT11, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
       Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(1000);
       return;
    }
    Serial.print("Humidity = ");   
    Serial.print((int)humidity);   
    Serial.print("% , ");   
    Serial.print("Temperature = ");   
    Serial.print((int)temperature);   
    Serial.println("C ");   
    delay(3000);  //每3秒顯示一次
    int A_temperature=25;
if(A_temperature < temperature){
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,HIGH);
//製冷晶片開機
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
digitalWrite(IN3,HIGH);
Serial.println("風扇1開機");Serial.println("致冷晶片開機");}
else if(A_temperature > temperature)
{digitalWrite(IN1,HIGH);
digitalWrite(IN2,HIGH);
digitalWrite(IN3,HIGH);
Serial.println("風扇2開機");
Serial.println("致冷晶片停機");}
}
