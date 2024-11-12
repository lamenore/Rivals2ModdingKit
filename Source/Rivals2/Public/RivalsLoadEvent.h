#pragma once
#include "CoreMinimal.h"
#include "SnapNetEvent.h"
#include "RivalsLoadEvent.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsLoadEvent : public USnapNetEvent {
    GENERATED_BODY()
public:
    URivalsLoadEvent();

};

