#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FMODBlueprintStatics.h"
#include "RivalsStageRenderer.generated.h"

class USnapNetEntityRendererComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsStageRenderer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityRendererComponent* EntityRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFMODEventInstance> StateBasedSoundInstances;
    
public:
    ARivalsStageRenderer(const FObjectInitializer& ObjectInitializer);

};

