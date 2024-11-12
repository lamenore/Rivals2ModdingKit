#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertySoftObjectPath.h"
#include "Sync_SingleAnimationPlayData.generated.h"

USTRUCT(BlueprintType)
struct FSync_SingleAnimationPlayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertySoftObjectPath Sync_AnimToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean Sync_bSavedLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean Sync_bSavedPlaying;
    
    RIVALSSTORYEDITOR_API FSync_SingleAnimationPlayData();
};

