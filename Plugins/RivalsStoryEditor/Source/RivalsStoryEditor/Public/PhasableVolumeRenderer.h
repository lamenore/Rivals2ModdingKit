#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderRenderer.h"
#include "PhasableVolumeRenderer.generated.h"

class URivalsMeshComponent;

UCLASS(Blueprintable)
class APhasableVolumeRenderer : public ARivalsColliderRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMeshComponent* VisibleComponent;
    
    APhasableVolumeRenderer(const FObjectInitializer& ObjectInitializer);

};

