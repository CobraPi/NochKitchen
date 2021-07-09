#include <Arduino.h>

#define LED_PIN 13
#define SWITCH_PIN 7
#define RED_LED_PIN 9
#define GREEN_LED_PIN 10
#define BLUE_LED_PIN 11

const byte ping = 0x00;
const byte echo = 0x01;
const byte incoming_switch_state = 0x05;
const byte incoming_led_state = 0x06;

bool led_state = LOW;
bool switch_state = LOW;
bool last_switch_state = LOW;
bool blue_led_state = LOW;

unsigned long last_debounce_time = 0;
unsigned long debounce_delay = 100;

//int red = 0;
//int green = 0;
//int blue = 0;

void process_serial() {
    int code = Serial.read();
    //int length = serial.read();
    //int data = serial.read();
    switch(code) {
        case incoming_switch_state:
            int state = switch_state;
            Serial.write(state);
            break;
    }
}

void connect_serial() {

}

void debounce(int switch_pin) {
    int reading = digitalRead(switch_pin);
    if(reading != last_switch_state) {
        last_debounce_time = millis();
    }
    if((millis() - last_debounce_time) > debounce_delay) {

        if(reading != switch_state) {
            switch_state = reading;
        }
    }
    last_switch_state = reading;
}

void toggle_led() {
    if(!switch_state) {
        digitalWrite(LED_PIN, HIGH);
        //Serial.println("switch on");
    }
    else {
        digitalWrite(LED_PIN, LOW);
        //Serial.println("switch off");
    }
}

void setup() {
    Serial.begin(115200);
    Serial.setTimeout(1);
    pinMode(LED_PIN, OUTPUT);
    pinMode(SWITCH_PIN, INPUT);

}

void loop() {
    debounce(SWITCH_PIN);
    process_serial();
    toggle_led();
    Serial.write(incoming_switch_state);
    Serial.write(switch_state);

}
