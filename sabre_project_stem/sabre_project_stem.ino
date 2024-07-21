#include <Adafruit_NeoPixel.h>

#define LED_PIN 6 
#define LED_COUNT 108

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRBW + NEO_KHZ800);


void setup(){
  strip.setBrightness(10);
  strip.begin();
  strip.show();
  
  pinMode(A0, INPUT);
  Serial.begin(9600);
}


void loop()
{
  int potentiometer = analogRead(A0);
  
  int leds_numbers = map(potentiometer,0,1023,0,108);
  
  strip.setPixelColor(leds_numbers,0,0,200);
  strip.show();


  Serial.println(potentiometer);

}
