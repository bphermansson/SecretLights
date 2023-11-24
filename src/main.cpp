// Based on https://registry.platformio.org/libraries/kitesurfer1404/WS2812FX

#include <Arduino.h>
#include <WS2812FX.h>

#define LED_PIN   D6
#define LED_COUNT 9

WS2812FXT ws2812fxt = WS2812FXT(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  Serial.printf("Hi there!\n");  

  ws2812fxt.init();
  ws2812fxt.v1->setBrightness(32);
  ws2812fxt.v1->setSegment(0, 0, LED_COUNT-1, FX_MODE_RAINBOW_CYCLE, BLACK, 5000);
  ws2812fxt.start();


}

void loop() {
  ws2812fxt.service();
}