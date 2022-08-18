#include <Servo.h>

#define SERVO_PIN 8

Servo myservo;

//서보모터 기본예제
void setup()
{
  myservo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void loop()
{ 

  myservo.write(0);
  delay(100);
  myservo.write(90);
  delay(100);
  myservo.write(180);
  delay(100);
  myservo.write(90);
  delay(100);

}
