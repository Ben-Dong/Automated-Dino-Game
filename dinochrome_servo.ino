#include <Servo.h> 
 
Servo myservo; 
void setup(){ 
  myservo.attach(8);
} 
 
void loop(){ 
   myservo.write(180);  //angle to release the key
   delay(1000); 
   myservo.write(150);  //angle to press the key
   delay(1000); 
}
