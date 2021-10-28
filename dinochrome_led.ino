#include <Servo.h>

 int threshold = 520; // set the threshold you found here. 
void setup(){
  
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  
}

void loop(){
  //digitalWrite(7,LOW);                // you can uncomment the digitalWrite when you found your threshold :)
  delay(1000); 
  Serial.println(analogRead(A0));       // print out the value of LDR to find threshold
 if(analogRead(A0)< threshold)
 {
  
    //digitalWrite(7,HIGH);             // uncomment this digitalWrite also after you found the threshold :p
    delay(100);                                 
 }                  
}
