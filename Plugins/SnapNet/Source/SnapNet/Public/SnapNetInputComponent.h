#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "SnapNetInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USnapNetInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    USnapNetInputComponent(const FObjectInitializer& ObjectInitializer);

};

