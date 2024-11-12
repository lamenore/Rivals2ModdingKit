#pragma once
#include "CoreMinimal.h"
#include "ERivalsColorSlot.h"
#include "RivalsLastMatchData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsLastMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastPlayedChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastPlayedSkinId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastPlayedPlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsColorSlot LastPlayedColorSlot;
    
    RIVALS2_API FRivalsLastMatchData();
};

