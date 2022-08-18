//조도센서 기본 예제
#define BRIGHT_PIN A0
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int brightValue=analogRead(BRIGHT_PIN);
  Serial.println(brightValue);
  delay(100);
}
