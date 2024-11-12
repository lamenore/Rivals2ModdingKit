#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "RivalsLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class RIVALS2_API URivalsLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerTagName;
    
    URivalsLocalPlayer();

};

