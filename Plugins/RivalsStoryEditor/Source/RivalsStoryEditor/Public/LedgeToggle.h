#pragma once
#include "CoreMinimal.h"
#include "ERivalsFacingDirection.h"
#include "LedgeToggle.generated.h"

USTRUCT(BlueprintType)
struct FLedgeToggle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlatformIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ledgeIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsFacingDirection facing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    RIVALSSTORYEDITOR_API FLedgeToggle();
};

