#include <Arduino.h>

#define RED_LED_PIN 1
#define GREEN_LED_PIN 3
#define BLUE_LED_PIN 7


void setup() {
    Serial.begin(115200);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {

}
