#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "StagePreferencesSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UStagePreferencesSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> StageSkinPreferences;
    
    UStagePreferencesSaveGame();

};

