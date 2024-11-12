#include "SnapNetEvent.h"

USnapNetEvent::USnapNetEvent() {
    this->ConfirmedOrPredicted = false;
    this->Reliable = false;
    this->IncludedInReplays = true;
    this->predicted = true;
}






