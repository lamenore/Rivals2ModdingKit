#pragma once
#include "CoreMinimal.h"
#include "FMODBlueprintStatics.h"
#include "SnapNetEvent.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyPrimaryAsset.h"
#include "SnapNetPropertyString.h"
#include "RivalsSoundEventParameter.h"
#include "RivalsSoundEvent.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsSoundEvent : public USnapNetEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex OwnerEntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyPrimaryAsset SoundContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyString SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance SoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsSoundEventParameter> SoundParameters;
    
    URivalsSoundEvent();

};

