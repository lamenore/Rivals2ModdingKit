#pragma once
#include "CoreMinimal.h"
#include "CreditsLine.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCreditsLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    RIVALS2_API FCreditsLine();
};

