// This is the code for the ducking 
#include <Servo.h> 
 
Servo myservo; 
int threshold = 390; // set the threshold you found here.
long delayValue = 250; // set the delay value here 


void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  myservo.attach(9);
}

void loop() {
  while (delayValue>100)
  {
     digitalWrite(8,LOW);
     myservo.write(90);   // set the releasing angle here
     delay(1);
     if(analogRead(A1)< threshold)
     {
      delay(delayValue);
      delayValue -=2;     //reduce delay to keep up the speed of the game
      digitalWrite(8,HIGH); 
      myservo.write(120); // set the pressing angle here
      delay(500);
     } 
  } 
}
