//버튼 1 , 2 누를때 동작

#define BUTTON_1 4
#define BUTTON_2 7

int count=1;
int count2=1;

void setup()
{
	Serial.begin(9600);
  	pinMode(BUTTON_1, INPUT);
 	pinMode(BUTTON_2, INPUT);
}

void loop()
{
  if(btn1()==1) {
     Serial.print(count);
    Serial.print(":");
    count++;
    Serial.println("button1 click");
  }
  if(btn2()==1) {
     Serial.print(count2);
    Serial.print(":");
    count2++;
    Serial.println("button2 click");
  }

}
//2개의 이상의 작업을 필요할때 함수를 이용해야한다
int btn1()
{ 
  static int currBtn = 0;
  static int prevBtn = 0;
  
  currBtn=digitalRead(BUTTON_1);
  
  if(currBtn != prevBtn)
  {
    	prevBtn=currBtn;
    	if(currBtn == 1)
        {
          return 1;
        }
    	delay(50);
  }
  
  return 0;
}

int btn2()
  { 
  static int currBtn = 0;
  static int prevBtn = 0;
  
  currBtn=digitalRead(BUTTON_2);
  
  if(currBtn != prevBtn)
  {
    	prevBtn=currBtn;
    	if(currBtn == 1)
        {
          return 1;
        }
    	delay(50);
  }
   
  return 0;
}
  