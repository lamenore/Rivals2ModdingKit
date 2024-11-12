#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "SmokeCloudRenderer.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RIVALS2_API ASmokeCloudRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SmokeMaskComponent;
    
    ASmokeCloudRenderer(const FObjectInitializer& ObjectInitializer);

};

