#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "LoxodontRenderer.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RIVALS2_API ALoxodontRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MoltenChargeMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoltenChargeVisualLevel;
    
    ALoxodontRenderer(const FObjectInitializer& ObjectInitializer);

};

