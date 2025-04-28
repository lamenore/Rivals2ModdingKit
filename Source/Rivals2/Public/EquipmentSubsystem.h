#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EquipmentSubsystem.generated.h"

class UEquipmentSubsystem;
class UObject;

UCLASS(Blueprintable)
class RIVALS2_API UEquipmentSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UEquipmentSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEquipmentSubsystem* Get(const UObject* WorldContextObject);
    
};

