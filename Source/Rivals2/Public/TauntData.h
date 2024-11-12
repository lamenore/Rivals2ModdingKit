#pragma once
#include "CoreMinimal.h"
#include "EquipmentItemAsset.h"
#include "Templates/SubclassOf.h"
#include "TauntData.generated.h"

class URivalsCharacterAttackData;

UCLASS(Blueprintable)
class RIVALS2_API UTauntData : public UEquipmentItemAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URivalsCharacterAttackData> TauntAttackData;
    
    UTauntData();

};

