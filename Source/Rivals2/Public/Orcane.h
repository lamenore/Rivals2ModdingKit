#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyFloat.h"
#include "RivalsCharacterEntity.h"
#include "Orcane.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AOrcane : public ARivalsCharacterEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat BubbleAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean StartedMaxHeightUspecial;
    
    AOrcane(const FObjectInitializer& ObjectInitializer);

};

