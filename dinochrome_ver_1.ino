#include <Servo.h> 
 
Servo myservo; 
int threshold = 520; // set the threshold you found here. 

void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  myservo.attach(8);
}

void loop() {
  digitalWrite(7,LOW); // if you are not using led then remove this line 
  myservo.write(180);  // set the releasing angle here
  delay(1);
  if(analogRead(A0)< threshold)
 {
   delay(300);  // you can change the delay so dinosaur can jump at the perfect timing
   digitalWrite(7,HIGH);  // if you are not using led then remove this line 
   myservo.write(150);  // set the pressing angle here        
   delay(500);  // you can change the delay here :)
 }  
}
