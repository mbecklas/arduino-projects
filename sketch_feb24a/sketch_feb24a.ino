
void setup()
{
leds.begin(); // This initializes the NeoPixel library.
}
void loop()
{
led_set(10, 0, 0);//red
led_set(0, 0, 0);
led_set(0, 10, 0);//green
led_set(0, 0, 0);
led_set(0, 0, 10);//blue
led_set(0, 0, 0);
}
void led_set(int R, int G, int B)
{
for (int i = 0; i < LED_NUM; i++)
{
leds.setPixelColor(i, leds.Color(R, G, B));
leds.show();
delay(50);
}
}
