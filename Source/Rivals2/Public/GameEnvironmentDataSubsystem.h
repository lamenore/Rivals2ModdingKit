#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameEnvironmentDataSubsystem.generated.h"

class UGameEnvironmentDataAsset;
class UGameEnvironmentDataSubsystem;
class UObject;

UCLASS(Blueprintable)
class RIVALS2_API UGameEnvironmentDataSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UGameEnvironmentDataAsset*> EnvironmentDataAssets;
    
public:
    UGameEnvironmentDataSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGameEnvironmentDataSubsystem* Get(const UObject* WorldContextObject);
    
};

