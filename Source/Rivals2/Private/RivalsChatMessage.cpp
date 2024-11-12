#include "RivalsChatMessage.h"

FRivalsChatMessage::FRivalsChatMessage() {
    this->SendingPlayerSlot = 0;
    this->Timestamp = 0.00f;
    this->bIsNotification = false;
    this->NotificationId = 0;
}

