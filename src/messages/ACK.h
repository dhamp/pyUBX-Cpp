// File lang/cpp/src/messages/ACK.h
// Auto-generated by pyUBX generateCPP.py v0.1 on 2017-11-11T12:55:06.083694
// See https://github.com/mayeranalytics/pyUBX
// DO NOT MODIFY THIS FILE!

#ifndef __ACK_H__
#define __ACK_H__

#include <stdint.h>
#include "../UBX.h"

/* Message class ACK.
 */
struct ACK
{
    struct ACK_;
    struct NAK;
};

struct ACK::ACK_ : public Message
{
    uint8_t clsID;
    uint8_t msgID;

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t ACK::ACK_::classID   = 0x05;
uint8_t ACK::ACK_::messageID = 0x01;

struct ACK::NAK : public Message
{
    uint8_t clsID;
    uint8_t msgID;

    static uint8_t classID;
    static uint8_t messageID;
};

uint8_t ACK::NAK::classID   = 0x05;
uint8_t ACK::NAK::messageID = 0x00;

#endif // ifndef __ACK_H__
