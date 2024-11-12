#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "RivalsColorPalette.generated.h"

UCLASS(Abstract, Blueprintable)
class RIVALS2_API URivalsColorPalette : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> CustomColorSlotDefinitions;
    
    URivalsColorPalette();

};

