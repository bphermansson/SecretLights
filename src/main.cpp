// Based on https://registry.platformio.org/libraries/kitesurfer1404/WS2812FX

#include <Arduino.h>
#include <WS2812FX.h> // https://registry.platformio.org/libraries/kitesurfer1404/WS2812FX

#define LED_PIN   D6
#define LED_COUNT 9

WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

// unsigned long previousMillis = 0;
// const long interval = 8000; 
// int effectNo = 0;
// int noOfEffects = 12;

void setup() {
  Serial.begin(115200);
  Serial.printf("Hi there!\n");  

  ws2812fx.init();
  ws2812fx.setBrightness(100);
  ws2812fx.setSpeed(25000);
  ws2812fx.setMode(47);
  ws2812fx.start();
}

void loop() {
  ws2812fx.service();
  
  // To change effects
  // unsigned long currentMillis = millis();

  // if (currentMillis - previousMillis >= interval) {
  //   Serial.println("Change");
  //   Serial.println(effectNo);
  //   Serial.println(intEff[effectNo].eff);
  //   Serial.println(intEff[effectNo].len);

    
  //   ws2812fx.setBrightness(100);
  //   ws2812fx.setSpeed(intEff[effectNo].len);
  //   ws2812fx.setMode(intEff[effectNo].eff);
    
  //   previousMillis = currentMillis;
  //   effectNo++;
  //   if(effectNo > noOfEffects) {
  //     effectNo = 0;
  //   }
  // }
}