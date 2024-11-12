#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnapNetPropertyBoolean.h"
#include "StoryInterface.h"
#include "Templates/SubclassOf.h"
#include "RivalsStoryEntity.generated.h"

class ARivalsStoryRenderer;
class USceneComponent;
class USnapNetEntityComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryEntity : public AActor, public IStoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsStoryRenderer* RenderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityComponent* entityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARivalsStoryRenderer> RenderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ComponentsToRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, USceneComponent*> CopiedToRenderer;
    
    ARivalsStoryEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GameplayTick();
    

    // Fix for true pure virtual functions not being implemented
};

