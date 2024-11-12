#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyEnum.h"
#include "SnapNetPropertyInt32.h"
#include "AttackTargetEntityOnStateChangeDelegate.h"
#include "EAttackTargetEntityState.h"
#include "RivalsStoryArticle.h"
#include "RivalsStoryHitboxInterface.h"
#include "StoryEntityReferences.h"
#include "StoryOnGameplayTickDelegate.h"
#include "RivalsStoryTargetEntity.generated.h"

class USceneComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryTargetEntity : public ARivalsStoryArticle, public IRivalsStoryHitboxInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* HurtboxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ChildComponents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 ResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 DisabledFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEnum AttackTargetEntityState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackTargetEntityOnStateChange OnStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnTargetHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryOnGameplayTick OnGameplayTick;
    
    ARivalsStoryTargetEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ChangeState(EAttackTargetEntityState _newState);
    

    // Fix for true pure virtual functions not being implemented
};

