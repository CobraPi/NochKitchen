#ifndef SERIAL_PROTOCOL_H
#define SERIAL_PROTOCOL_H

#include <Arduino.h>

extern bool switch_state;

class SerialProtocol {
    uint8_t _data;
    byte Ping = 0x00;
    byte Echo = 0x01;
    byte SwitchState = 0x05;

    public:
        SerialProtocol();
        void init();
        void process_serial();

};


#endif
