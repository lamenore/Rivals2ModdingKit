#pragma once
#include "CoreMinimal.h"
#include "ArticleMaterialContainer.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FArticleMaterialContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomColors;
    
    RIVALS2_API FArticleMaterialContainer();
};

