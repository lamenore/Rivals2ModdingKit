#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAnimationToPlay.h"
#include "EDisplayStyle.h"
#include "EDisplayType.h"
#include "TutorialPromptDisplayer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ATutorialPromptDisplayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Colored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisplayType DisplayFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldListenForInputChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationToPlay AnimationToPlay;
    
    ATutorialPromptDisplayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnControllerUpdate();
    
};

