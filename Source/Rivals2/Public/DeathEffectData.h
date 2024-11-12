#pragma once
#include "CoreMinimal.h"
#include "EquipmentItemAsset.h"
#include "Templates/SubclassOf.h"
#include "DeathEffectData.generated.h"

class URivalsSoundEffectContainer;
class URivalsVfxDefinitionAsset;

UCLASS(Blueprintable)
class RIVALS2_API UDeathEffectData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsVfxDefinitionAsset> DeathEffectContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsSoundEffectContainer> DeathSoundContainer;
    
    UDeathEffectData();

};

