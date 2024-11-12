#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HurtboxRendererInfo.h"
#include "RivalsHurtboxRendererComponent.generated.h"

class UPoseableMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALS2_API URivalsHurtboxRendererComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHurtboxRendererInfo> HurtboxMeshInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPoseableMeshComponent*> HitboxMeshComponents;
    
    URivalsHurtboxRendererComponent(const FObjectInitializer& ObjectInitializer);

};

