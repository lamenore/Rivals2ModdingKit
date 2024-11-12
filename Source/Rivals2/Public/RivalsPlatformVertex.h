#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyVector2D.h"
#include "RivalsPlatformVertex.generated.h"

USTRUCT(BlueprintType)
struct RIVALS2_API FRivalsPlatformVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D Location;
    
    FRivalsPlatformVertex();
};

