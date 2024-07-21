void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(2, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) < 500) {
    digitalWrite(2, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(2, LOW);
  } else {
    digitalWrite(2, LOW);
  }
}
