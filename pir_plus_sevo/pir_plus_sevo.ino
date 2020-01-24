   
#include <Servo.h> 
int ledpin = 3; // servo 
int pirPin = 2;                 // PIR Out pin 
int pirStat = 0;                   // PIR status

Servo servo1;
void setup()
{
 pinMode(ledpin, OUTPUT);     
 pinMode(pirPin, INPUT);     
 servo1.attach(ledpin);
}
void loop()
{
 pirStat = digitalRead(pirPin); 
 if (pirStat == HIGH) {            //if motion detected
   servo1.write(180); 
   //delay(1000);
 } 
 else {
   servo1.write(0); 
   //delay(1000); 
   }
} 
