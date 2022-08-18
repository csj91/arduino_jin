#include <Servo.h>

#define SERVO_PIN 8
#define VR_PIN A0

Servo myservo; //객체 생성


void setup()
{
  myservo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void loop()
{ int setDig = map(analogRead(VR_PIN),0,1023,0,180);
  Serial.println(setDig);
  myservo.write(setDig);
  
  
 

}
