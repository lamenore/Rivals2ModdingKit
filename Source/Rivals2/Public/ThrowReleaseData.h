#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ThrowKnockbackData.h"
#include "ThrowReleaseData.generated.h"

USTRUCT(BlueprintType)
struct FThrowReleaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ReleaseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReleaseWindowStringTableKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowKnockbackData ThrowKnockbackData;
    
    RIVALS2_API FThrowReleaseData();
};

