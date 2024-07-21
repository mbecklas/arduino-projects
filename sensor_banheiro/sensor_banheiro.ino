void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);

  pinMode(8, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(7));
  if (digitalRead(7) == 1) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
