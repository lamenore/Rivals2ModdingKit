#pragma once
#include "CoreMinimal.h"
#include "RivalsGameplayEntity.h"
#include "SnapNetPropertyBoolean.h"
#include "StoryInterface.h"
#include "RivalsColliderEntity.generated.h"

class ARivalsStoryRenderer;
class URivalsCollisionMeshComponent;
class USceneComponent;
class UShapeComponent;
class USnapNetEntityComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsColliderEntity : public ARivalsGameplayEntity, public IStoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsCollisionMeshComponent* MeshCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShapeComponent*> ColliderShapeComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsStoryRenderer* RenderActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityComponent* entityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> ComponentsToRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, USceneComponent*> CopiedToRenderer;
    
    ARivalsColliderEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSnapNetPropsModified();
    

    // Fix for true pure virtual functions not being implemented
};

