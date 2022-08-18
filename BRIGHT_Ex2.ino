//조도센서 if 구문활용
#define BRIGHT_PIN A0
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int brightValue=analogRead(BRIGHT_PIN);
  Serial.print(brightValue);
  if(brightValue>=800){
    Serial.println(" It's bright.");}
  else if(brightValue<800 && brightValue>=500){
  Serial.println(" It's in the middle.");}
  else if(brightValue<500){
    Serial.println(" It's dark.");}

  
  
  
  
  delay(100);
}
