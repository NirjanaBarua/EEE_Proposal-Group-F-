int led = 9;
int pir=8;
int buzzer=10;
int state;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  int sensorValue = digitalRead(pir);
  if(sensorValue==1){
    digitalWrite(buzzer,HIGH);
    digitalWrite(led,HIGH);
 delay(5000);
  }
  else if(sensorValue==0)
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW)
  }
}

