void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));

  if (analogRead(A0) >= 166) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance


  if (analogRead(A0) > 10) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance


  if (analogRead(A0) >= 332) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance


  if (analogRead(A0) >= 664) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance

}
