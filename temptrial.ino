float tempC;
int reading;
int tempPin = 32;//anolog pin

void setup()
{
  analogReference(INTERNAL);
Serial.begin(9600);
}

void loop()
{
reading = analogRead(tempPin);
tempC = reading / 9.31;
Serial.println(tempC);
delay(1000);
}
//ans in Cel
