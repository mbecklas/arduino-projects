unsigned long previousMillisLED12=0;
unsigned long previousMillisLED13=0;


int intervalLED12 = 100;
int intervalLED13 = 1000;

boolean LED13state = false;
boolean LED12state = false;

void setup(){
  pinMode(13 , OUTPUT);
  pinMode(12 , OUTPUT);
}

void loop(){
  unsigned long currentMillis = millis();

  if ((currentMillis - previousMillisLED12) >= intervalLED12) {
     LED12state = !LED12state;
     digitalWrite(12, LED12state);
     previousMillisLED12 = currentMillis;
  }

   if ((currentMillis - previousMillisLED13) >= intervalLED13) {
     LED13state = !LED13state;
     digitalWrite(13, LED13state);
     previousMillisLED13 = currentMillis;
  }
}
