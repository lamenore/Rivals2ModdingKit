#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RivalsLastMatchData.h"
#include "RivalsPlayerTag.h"
#include "RivalsServerConnectionData.h"
#include "RivalsSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsPlayerTag> SavedPlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultPlayerTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsServerConnectionData ReconnectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsLastMatchData LastMatchData;
    
    URivalsSaveGame();

};

