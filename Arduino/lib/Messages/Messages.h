#ifndef MESSAGES_H
#define MESSAGES_H

typedef enum {
    IncomingMessageEcho = 0x00,
    IncomingMessagePing = 0x01,
    IncomingMessageSwitchState = 0x03
} IncomingMessageType;


typedef enum {
    OutgoingMessageEcho = 0x00,
    OutgoingMessagePing = 0x01,
    OutgoingMessageSwitchState = 0x03
} OutgoingMessageType;


#endif // MESSAGES_H
