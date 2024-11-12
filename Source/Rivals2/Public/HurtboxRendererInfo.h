#pragma once
#include "CoreMinimal.h"
#include "HurtboxRendererInfo.generated.h"

class UPoseableMeshComponent;

USTRUCT(BlueprintType)
struct FHurtboxRendererInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* HurtboxMeshComponent;
    
    RIVALS2_API FHurtboxRendererInfo();
};

