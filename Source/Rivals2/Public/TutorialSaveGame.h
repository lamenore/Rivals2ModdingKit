#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ERivalsTutorialType.h"
#include "TutorialSaveGame.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UTutorialSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsTutorialType, bool> BeginnerCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsTutorialType, bool> IntermediateCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERivalsTutorialType, bool> AdvancedCompletion;
    
    UTutorialSaveGame();

};

