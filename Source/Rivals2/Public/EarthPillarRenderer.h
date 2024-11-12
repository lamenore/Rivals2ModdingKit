#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "EarthPillarRenderer.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RIVALS2_API AEarthPillarRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PillarBaseMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PillarBaseOutlineMeshComponent;
    
    AEarthPillarRenderer(const FObjectInitializer& ObjectInitializer);

};

