int temperature = 0;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (temperature < 50 && temperature >10)
  {
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  }


  else if (temperature > 50 && temperature <70)
  {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }
  else
  {
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(8, LOW);
    digitalWrite(5, LOW);
    delay(200);
  }
  temperature++;

}