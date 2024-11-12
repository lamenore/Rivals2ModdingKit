#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderEntity.h"
#include "RivalsStoryToggleInterface.h"
#include "PhasableVolumeEntity.generated.h"

class APhasableVolumeRenderer;
class UMaterial;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API APhasableVolumeEntity : public ARivalsColliderEntity, public IRivalsStoryToggleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* PhaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* BaseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasPhased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhasableVolumeRenderer* Renderer;
    
    APhasableVolumeEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TogglePhase();
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(bool _bIsPhased);
    

    // Fix for true pure virtual functions not being implemented
};

