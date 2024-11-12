#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshEffectData.h"
#include "SkeletalMeshEffectContainer.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshEffectContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletalMeshEffectData> SkeletalMeshEffectDatas;
    
    RIVALS2_API FSkeletalMeshEffectContainer();
};

