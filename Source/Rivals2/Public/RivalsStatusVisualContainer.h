#pragma once
#include "CoreMinimal.h"
#include "RivalsStatusVisualDefinition.h"
#include "RivalsStatusVisualContainer.generated.h"

class ARivalsCharacterEntity;

USTRUCT(BlueprintType)
struct FRivalsStatusVisualContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterEntity* OwnerRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsStatusVisualDefinition Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterEntity* AffectedRival;
    
    RIVALS2_API FRivalsStatusVisualContainer();
};

