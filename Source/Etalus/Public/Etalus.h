#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterEntity.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyFloat.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyVector2D.h"
#include "EtalusFrozenShieldHitInfo.h"
#include "EtalusIceManager.h"
#include "Etalus.generated.h"

UCLASS(Blueprintable)
class ETALUS_API AEtalus : public ARivalsCharacterEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEtalusFrozenShieldHitInfo> FrozenShieldHitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D DspecialShockwaveOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat DspecialShockwaveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean HasUspecialResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 IceArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEtalusIceManager IceManager;
    
    AEtalus(const FObjectInitializer& ObjectInitializer);

};

