#include <Adafruit_NeoPixel.h>

#define LED_PIN 6 
#define LED_COUNT 20

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
    strip.setBrightness(10);
    strip.begin();
    strip.show();
}

void loop() {

  int randd1 = random(256);
  int randd2 = random(256);
  int randd3 = random(256);
  int randd4 = random(256);

  for(int i = 0; i < 108; i++){
    strip.setPixelColor(i,randd1,randd2,randd3,randd4); 
     strip.show();
      delay(20);

  }




}
