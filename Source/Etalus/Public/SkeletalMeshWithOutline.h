#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshWithOutline.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSkeletalMeshWithOutline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PrimaryMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OutlineMesh;
    
    ETALUS_API FSkeletalMeshWithOutline();
};

