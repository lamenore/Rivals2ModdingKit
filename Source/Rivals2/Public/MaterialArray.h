#pragma once
#include "CoreMinimal.h"
#include "MaterialArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
    RIVALS2_API FMaterialArray();
};

