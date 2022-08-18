//버튼 1 누를때 한번만 동작

#define BUTTON_1 4
#define BUTTON_2 7
	int currBtn1=0;
	int prevBtn1=0;


  	int count =1;



void setup()
{
	Serial.begin(9600);
  	pinMode(BUTTON_1, INPUT);
 	pinMode(BUTTON_2, INPUT);
}

void loop(){
	currBtn1 = digitalRead(BUTTON_1);

  
  if(currBtn1!=prevBtn1)
  {
    prevBtn1=currBtn1;
    if(currBtn1==1){
      
    Serial.print(count);
    Serial.print(":");
    count++;
    Serial.println("button1 click");
    delay(50);
  }

    
  }

}
    
