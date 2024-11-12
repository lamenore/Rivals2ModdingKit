#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyFloat.h"
#include "RivalsHazardVolumeEntity.h"
#include "RivalsDodgeRollEntity.generated.h"

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsDodgeRollEntity : public ARivalsHazardVolumeEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean IsInvuln;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat HeightScale;
    
    ARivalsDodgeRollEntity(const FObjectInitializer& ObjectInitializer);

};

