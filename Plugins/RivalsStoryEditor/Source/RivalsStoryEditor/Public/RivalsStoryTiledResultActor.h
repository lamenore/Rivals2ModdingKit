#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsStoryTiledResultActor.generated.h"

class ARivalsStoryTiledVolumeActor;
class URivalsCollisionMeshComponent;
class USnapNetEntityComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryTiledResultActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityComponent* entityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsCollisionMeshComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARivalsStoryTiledVolumeActor*> ComponentActors;
    
    ARivalsStoryTiledResultActor(const FObjectInitializer& ObjectInitializer);

};

