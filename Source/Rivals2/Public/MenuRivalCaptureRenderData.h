#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERivalsFacingDirection.h"
#include "RivalCaptureRenderData.h"
#include "MenuRivalCaptureRenderData.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class RIVALS2_API UMenuRivalCaptureRenderData : public URivalCaptureRenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CharacterMenuPoseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterMenuLocationAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CharacterMenuRotationAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterMenuScaleAdjustment;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsFacingDirection FacingDirection;
    
    UMenuRivalCaptureRenderData();

};

