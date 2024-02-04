int c = 0;
int button = 12 ;
int ON= HIGH;
int OFF = LOW;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12,INPUT);

  
}

void loop()
{
if(digitalRead(button) == ON) 
{
 c++;
 if (c == 1)
 {
digitalWrite(13,ON);
 delay(500);
digitalWrite(13,OFF);
 delay(500);
}
else if (c ==2)
{
  digitalWrite(10,ON);
 delay(500);
digitalWrite(10,OFF);
 delay(500);


}
else if (c ==3)
{
  digitalWrite(11,ON);
 delay(500);
digitalWrite(11,OFF);
 delay(500);
  
    }
  }
}
