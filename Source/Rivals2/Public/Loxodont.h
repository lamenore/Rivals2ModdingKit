#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsCharacterEntity.h"
#include "Loxodont.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ALoxodont : public ARivalsCharacterEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex HeldMoltenBoulderEntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 MoltenChargeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 NextLavaPoolFacingDirection;
    
    ALoxodont(const FObjectInitializer& ObjectInitializer);

};

