#include <Servo.h>

Servo robotkolu1; 
Servo robotkolu2; 
Servo robotkolu3;
Servo robotkolu4;
int potansiyometre1 = A0; 
int potansiyometre2 = A1;
int potansiyometre3 = A2;
int potansiyometre4 = A3;
int deger1; 
int deger2;
int deger3;
int deger4;
void setup()
{
robotkolu1.attach(11); 
robotkolu2.attach(10);
robotkolu3.attach(9);
robotkolu4.attach(6);
Serial.begin(9600);
}
void loop() {
{ 
deger1 = analogRead(potansiyometre1); 
deger1 = map(deger1, 0, 1024, 0, 180); 
robotkolu1.write(deger1); 
Serial.println(deger1);


deger2 = analogRead(potansiyometre2); 
deger2 = map(deger2, 1024, 0, 0, 180); 
robotkolu2.write(deger2); 


deger3 = analogRead(potansiyometre3); 
deger3 = map(deger3, 1024, 0, 0, 180); 
robotkolu3.write(deger3); 

deger4 = analogRead(potansiyometre4); 
deger4 = map(deger4, 1024, 0, 0, 180); 
robotkolu4.write(deger4); 
delay(1); 
} 
}


