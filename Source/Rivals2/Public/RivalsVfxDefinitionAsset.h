#pragma once
#include "CoreMinimal.h"
#include "RivalsVfxDefinitionContainer.h"
#include "RivalsVfxDefinitionAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class RIVALS2_API URivalsVfxDefinitionAsset : public URivalsVfxDefinitionContainer {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VfxCategory;
    
    URivalsVfxDefinitionAsset();

};

