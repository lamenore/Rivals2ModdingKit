#pragma once
#include "CoreMinimal.h"
#include "RivalsHitboxAttributes.h"
#include "RivalsHitboxOnHitProperties.h"
#include "RivalsHitboxDefinition.generated.h"

USTRUCT(BlueprintType)
struct FRivalsHitboxDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsHitboxAttributes HitboxAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsHitboxOnHitProperties HitboxOnHitProperties;
    
    RIVALS2_API FRivalsHitboxDefinition();
};

