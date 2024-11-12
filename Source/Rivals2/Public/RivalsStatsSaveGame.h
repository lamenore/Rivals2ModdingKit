#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RivalsPlayerTagStats.h"
#include "RivalsStatsSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsStatsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPlayerTagStats TotalStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRivalsPlayerTagStats> StatsByTag;
    
public:
    URivalsStatsSaveGame();

};

