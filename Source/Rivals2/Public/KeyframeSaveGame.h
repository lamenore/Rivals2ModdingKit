#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "KeyframeData.h"
#include "KeyframeSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UKeyframeSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyframeData> KeyFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Test;
    
    UKeyframeSaveGame();

};

