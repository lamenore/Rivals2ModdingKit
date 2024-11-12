#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EmoteUsageData.h"
#include "EmoteSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UEmoteSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEmoteUsageData> EmoteUsageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FavoriteEmotes;
    
    UEmoteSaveGame();

};

