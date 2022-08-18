//가변저항 기초



#define VR_PIN A0
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int vrValue=analogRead(VR_PIN);
  Serial.println(vrValue);
  delay(100);
}
