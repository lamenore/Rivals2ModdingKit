#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FMODBlueprintStatics.h"
#include "RivalsSoundManagerSubsystem.generated.h"

class UFMODEvent;
class UObject;
class URivalsSoundManagerSubsystem;

UCLASS(Blueprintable)
class RIVALS2_API URivalsSoundManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance BgmInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFMODEvent> BgmPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramePriorityHighest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFMODEventInstance> FramePriorityBuffer;
    
public:
    URivalsSoundManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopBgm();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeMenuMusic();
    
    UFUNCTION(BlueprintCallable)
    void PlayBgmNoParams(TSoftObjectPtr<UFMODEvent> BgmToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsSoundManagerSubsystem* Get(const UObject* WorldContextObject);
    
};

