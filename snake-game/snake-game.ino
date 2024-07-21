#include <Adafruit_NeoPixel.h>

#define LED_PIN 6 
#define LED_COUNT 40

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  strip.setBrightness(5);
  strip.begin();
  strip.show();

  Serial.begin(9600);
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop(){
  //strip.setPixelColor(37,randd1,randd2,randd3,randd4);
  //strip.show();
  //delay(500);
  
  int positionn = 12;
  int nada = 1;

  while(nada = 1){

  int varx = analogRead(A0);
  int x = map(varx,1023,0,0,180);

  int vary = analogRead(A1);
  int y = map(vary,1023,0,0,180);


    if(y < 35){
      strip.setPixelColor(positionn,0,0,0,0);
      strip.show();
      
      positionn = positionn + 1; 
   }

    else if(y > 145){
      strip.setPixelColor(positionn,0,0,0,0);
      strip.show();
      positionn = positionn - 1; 
    }

    else if(x < 35){
      strip.setPixelColor(positionn,0,0,0,0);
      strip.show();
      positionn = positionn + 8; 
    }

    else if(x > 145){
      strip.setPixelColor(positionn,0,0,0,0);
      strip.show();
      positionn = positionn - 8;
    }

    strip.setPixelColor(positionn,255,0,0,0);
    strip.show();
    delay(500);

    Serial.println("--------------------");
    Serial.println(y);
    Serial.println(x);
    Serial.println(positionn);
    Serial.println("--------------------");
  }

}
