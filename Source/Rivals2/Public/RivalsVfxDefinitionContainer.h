#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetObject.h"
#include "RivalsVfxDefinition.h"
#include "RivalsVfxDefinitionContainer.generated.h"

UCLASS(Abstract, Blueprintable)
class RIVALS2_API URivalsVfxDefinitionContainer : public UPrimaryAssetObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRivalsVfxDefinition> VfxDefinitions;
    
    URivalsVfxDefinitionContainer();

};

