#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RivalsRenderWorldTickSubsystem.generated.h"

class UObject;
class URivalsRenderWorldTickSubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsRenderWorldTickSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentGlobalTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousGlobalTimeDilation;
    
    URivalsRenderWorldTickSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsRenderWorldTickSubsystem* Get(const UObject* WorldContextObject);
    
};

