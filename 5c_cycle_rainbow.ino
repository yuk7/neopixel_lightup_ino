#include "FastLED.h"
#define NUM_LEDS 5
#define NUM_DATA_PIN 6
#define NUM_DELAY 500

CRGB leds[NUM_LEDS];
void setup() { FastLED.addLeds<NEOPIXEL, NUM_DATA_PIN>(leds, NUM_LEDS); }
void loop() {
  for (int i=0; i<5 ; i++) {
    leds[(0+i)<5?0+i:i-5] = CRGB::Red;
    leds[(1+i)<5?1+i:i-4] = CRGB::Orange;
    leds[(2+i)<5?2+i:i-3] = CRGB::Green;
    leds[(3+i)<5?3+i:i-2] = CRGB::Blue;
    leds[(4+i)<5?4+i:i-1] = CRGB::Purple;
    FastLED.show();
    delay(NUM_DELAY);
  }
}
