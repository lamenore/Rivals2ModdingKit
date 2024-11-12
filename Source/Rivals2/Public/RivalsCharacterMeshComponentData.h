#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RivalsCharacterMeshComponentData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsCharacterMeshComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MainMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference OutlineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference AuraMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldRecolor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyMaterialOverrides;
    
    RIVALS2_API FRivalsCharacterMeshComponentData();
};

