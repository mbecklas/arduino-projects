#include <Adafruit_NeoPixel.h>

#define LED_PIN 6 
#define LED_COUNT 40

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  strip.setBrightness(5);
    strip.begin();
    strip.show();
}

void loop() {

  int randd1 = random(256);
  int randd2 = random(256);
  int randd3 = random(256);
  int randd4 = random(256);
  
  
  strip.setPixelColor(5,randd1,randd2,randd3,randd4);
  strip.setPixelColor(14,randd1,randd2,randd3,randd4);
  strip.setPixelColor(16,randd1,randd2,randd3,randd4);
  strip.setPixelColor(17,randd1,randd2,randd3,randd4);
  strip.setPixelColor(18,randd1,randd2,randd3,randd4);
  strip.setPixelColor(19,randd1,randd2,randd3,randd4);
  strip.setPixelColor(20,randd1,randd2,randd3,randd4);
  strip.setPixelColor(21,randd1,randd2,randd3,randd4);
  strip.setPixelColor(22,randd1,randd2,randd3,randd4);
  strip.setPixelColor(23,randd1,randd2,randd3,randd4);
  strip.setPixelColor(30,randd1,randd2,randd3,randd4);
  strip.setPixelColor(37,randd1,randd2,randd3,randd4);

  strip.show();
  delay(500);

}
