#include <Arduino.h>
#define red_led 4

void setup() 
{
  pinMode(red_led,OUTPUT);
}

void loop() 
{
 digitalWrite(red_led,HIGH);
 delay(2000);
 digitalWrite(red_led,LOW);
 delay(2000);
}