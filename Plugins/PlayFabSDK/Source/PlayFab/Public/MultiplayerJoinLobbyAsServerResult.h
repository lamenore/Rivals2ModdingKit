#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerJoinLobbyAsServerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerJoinLobbyAsServerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FMultiplayerJoinLobbyAsServerResult();
};

