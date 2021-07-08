#include <Arduino.h>

#define RED_LED_PIN 9
#define GREEN_LED_PIN 10
#define BLUE_LED_PIN 11

int red = 0;
int green = 0;
int blue = 0;

void connect_serial() {

}

void read_and_send_PWM() {

}

void setup() {
    Serial.begin(115200);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {

}
