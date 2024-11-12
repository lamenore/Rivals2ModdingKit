#pragma once
#include "CoreMinimal.h"
#include "FMODBlueprintStatics.h"
#include "RivalsPooledActor.h"
#include "RivalsGameplayRenderer.generated.h"

UCLASS(Abstract, Blueprintable)
class RIVALS2_API ARivalsGameplayRenderer : public ARivalsPooledActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializedFromEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFMODEventInstance> StateBasedSoundInstances;
    
public:
    ARivalsGameplayRenderer(const FObjectInitializer& ObjectInitializer);

};

