#pragma once
#include "CoreMinimal.h"
#include "RivalCaptureSFX.generated.h"

USTRUCT(BlueprintType)
struct FRivalCaptureSFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreationWindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyWindowFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlayed;
    
    RIVALS2_API FRivalCaptureSFX();
};

