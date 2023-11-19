void setup() {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);

}

void loop() 
{
  //PATTERN 2 ALTERNATE BLINKING
  for(int j=1;j<=20;j++)
  {

    for(int i=3;i<=12;i++)
      {
        if(i%2!=j%2) digitalWrite(i,LOW);
        else digitalWrite(i,HIGH);
      }
    delay(100);
  }
  for(int i=3;i<=12;i++) digitalWrite(i,LOW); delay(500);
}
