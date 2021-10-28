#include <Servo.h> 
 
Servo myservo1; 
Servo myservo2; 
int threshold1 = 495; // set the threshold of first LDR you found here.
int threshold2 = 360; // set the threshold of second LDR you found here.
long delayValue = 300; // set the delay value here 

void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  myservo1.attach(6);
  myservo2.attach(9);
}

void loop() {
  while (delayValue>50)   // safety purpose 
  {
     digitalWrite(8,LOW);
     digitalWrite(7,LOW); // if you are not using led then remove these 2 lines 
     myservo1.write(180); // set the releasing angle here
     myservo2.write(90);  // set the releasing angle here
     delay(1);
     if (analogRead(A0)<threshold1)
     {
      delay(delayValue);
      delayValue -=2;  //reduce delay to keep up the speed of the game. You may change the value to make the game go further
      digitalWrite(7,HIGH); 
      myservo1.write(160);  // set the pressing angle here
      delay(170);
     } 
     if(analogRead(A1)< threshold2)
     {
      digitalWrite(8,HIGH); 
      myservo2.write(130);  // set the pressing angle here
      delay(500);
     } 
  } 
}
