#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERivalsFacingDirection.h"
#include "RivalRendererSpawn.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalRendererSpawn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsFacingDirection FacingDirection;
    
    ARivalRendererSpawn(const FObjectInitializer& ObjectInitializer);

};

