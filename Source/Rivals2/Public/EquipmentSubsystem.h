#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EquipmentSubsystem.generated.h"

class UEquipmentManager;
class UEquipmentSubsystem;
class UObject;

UCLASS(Blueprintable)
class RIVALS2_API UEquipmentSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEquipmentManager* EquipmentManager;
    
public:
    UEquipmentSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UEquipmentSubsystem* Get(const UObject* WorldContextObject);
    
};

