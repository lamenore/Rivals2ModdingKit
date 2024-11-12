#pragma once
#include "CoreMinimal.h"
#include "RivalsGrabRequest.generated.h"

class ARivalsCharacterEntity;

USTRUCT(BlueprintType)
struct FRivalsGrabRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterEntity* TargetRival;
    
    RIVALS2_API FRivalsGrabRequest();
};

