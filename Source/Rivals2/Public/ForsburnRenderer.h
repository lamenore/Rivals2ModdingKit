#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterRenderer.h"
#include "ForsburnRenderer.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class RIVALS2_API AForsburnRenderer : public ARivalsCharacterRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SmokeFullMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokescreenOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSmokescreenOpacity;
    
    AForsburnRenderer(const FObjectInitializer& ObjectInitializer);

};

