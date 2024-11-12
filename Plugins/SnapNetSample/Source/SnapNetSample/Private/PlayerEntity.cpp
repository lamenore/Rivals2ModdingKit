#include "PlayerEntity.h"
#include "SnapNetEntityComponent.h"

APlayerEntity::APlayerEntity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->entityComponent = CreateDefaultSubobject<USnapNetEntityComponent>(TEXT("SnapNetEntityComponent"));
}

FText APlayerEntity::GetScoreboardColumn2Text() const {
    return FText::GetEmpty();
}

FText APlayerEntity::GetScoreboardColumn1Text() const {
    return FText::GetEmpty();
}

int32 APlayerEntity::GetPing() {
    return 0;
}

FText APlayerEntity::GetDisplayName() const {
    return FText::GetEmpty();
}

APlayerEntity* APlayerEntity::Get(int32 PlayerIndex, const UObject* WorldContextObject) {
    return NULL;
}


