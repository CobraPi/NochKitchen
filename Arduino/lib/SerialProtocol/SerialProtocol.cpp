#include "SerialProtocol.h"

SerialProtocol::SerialProtocol() {
    Serial.begin(115200);
    Serial.setTimeout(1);
}

void SerialProtocol::init() {
    bool ack = false;
    while(!ack) {
        byte incoming = Serial.read();
        if(incoming == Ping) {
            ack = false;
            byte response[2];
            response[0] = Echo;
            response[1] = 0x00;
            Serial.write(response);
        }
    }
}

void SerialProtocol::process_serial() {
    if (Serial.available >= 2) {
        uint8_t code = (uint8_t)Serial.read();
        uint8_t length = (uint8_t)Serial.read();
        uint8_t data[length];

        if (length > 0) {
            Serial.readBytes(data, length);
        }

        switch (code) {
            case SwitchState:
                Serial.write(SwitchState);
                Serial.write();
        }
    }
}
