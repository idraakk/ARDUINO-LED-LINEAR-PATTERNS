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
  //PATTERN 1 RUNNING LIGHTS END TO END
  //LIGHT ON
  for(int i=12;i>=3;i--)
  {
    for(int j=3;j<=i;j++)
    {
      digitalWrite(j,HIGH);
      delay(25);
      digitalWrite(j,LOW);
    }
    digitalWrite(i,HIGH);
    delay(200);
  }
  //LIGHT OFF
  for(int i=3;i<=12;i++)
  {
    for(int j=12;j>=i;j--)
    {
      digitalWrite(j,LOW);
      delay(25);
      digitalWrite(j,HIGH);
    }
    digitalWrite(i,LOW);
    delay(200);
  }
}
