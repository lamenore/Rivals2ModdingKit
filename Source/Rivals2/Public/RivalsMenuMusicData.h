#pragma once
#include "CoreMinimal.h"
#include "RivalsMenuMusicData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FRivalsMenuMusicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFMODEvent> Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> SoundParameters;
    
    RIVALS2_API FRivalsMenuMusicData();
};

