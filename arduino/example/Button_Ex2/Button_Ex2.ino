//버튼 1 , 2 누를때마다 카운터 늘어나기

#define BUTTON_1 4
#define BUTTON_2 7
	int currBtn1=0;
	int prevBtn1=0;

	int currBtn2=0;
	int prevBtn2=0;
  	int count =1;
	int count2 =1;


void setup()
{
	Serial.begin(9600);
  	pinMode(BUTTON_1, INPUT);
 	pinMode(BUTTON_2, INPUT);
}

void loop(){
	currBtn1 = digitalRead(BUTTON_1);
  	currBtn2 = digitalRead(BUTTON_2);
  
  if(currBtn1!=prevBtn1)
  {
    prevBtn1=currBtn1;
    Serial.print(count);
    Serial.print(":");
    count++;
    Serial.println("button1 click");
    delay(500);
  }
	 else if(currBtn2!=prevBtn2)
  {
    prevBtn2=currBtn2;
    Serial.print(count2);
    Serial.print(":");
    count2++;
    Serial.println("button2 click");
    delay(500);
  }
}
    
