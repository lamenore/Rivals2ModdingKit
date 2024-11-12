#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetObject.h"
#include "TargetBreakSkins.h"
#include "Templates/SubclassOf.h"
#include "RivalsStoryTargetBreakMap.generated.h"

class URivalsCharacterDefinition;

UCLASS(Blueprintable)
class RIVALS2_API URivalsStoryTargetBreakMap : public UPrimaryAssetObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<URivalsCharacterDefinition>, FTargetBreakSkins> BreakMaps;
    
    URivalsStoryTargetBreakMap();

};

