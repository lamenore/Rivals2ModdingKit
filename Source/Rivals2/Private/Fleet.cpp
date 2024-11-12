#include "Fleet.h"

AFleet::AFleet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AFleet::IsEmpowered() const {
    return false;
}

int32 AFleet::GetStaminaRemaining() const {
    return 0;
}


