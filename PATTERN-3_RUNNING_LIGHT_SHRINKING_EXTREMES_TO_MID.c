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
  //PATTERN 3 RUNNING LIGHT SHRINKING EXTREMES TO MID
  //LIGHT ON
  int first=3,last=12;
  for(int i=3;i<=7;i++)
  {
    for(int j=first;j<=last;j++)
    {
      digitalWrite(j,HIGH);
      delay(30);
      digitalWrite(j,LOW);
    }
    digitalWrite(last,HIGH);
    delay(100);
    for(int j=last-1;j>=first;j--)
    {
      digitalWrite(j,HIGH);
      delay(30);
      digitalWrite(j,LOW);
    }
    digitalWrite(first,HIGH);
    delay(100);
    first++; last--;
  }
  //LIGHT OFF
  first=3; last=12;
  for(int i=3;i<=7;i++)
  {
    for(int j=first;j<=last;j++)
    {
      digitalWrite(j,LOW);
      delay(20);
      digitalWrite(j,HIGH);
    }
    digitalWrite(last,LOW);
    delay(100);
    for(int j=last-1;j>=first;j--)
    {
      digitalWrite(j,LOW);
      delay(20);
      digitalWrite(j,HIGH);
    }
    digitalWrite(first,LOW);
    delay(100);
    first++; last--;
  }
}
