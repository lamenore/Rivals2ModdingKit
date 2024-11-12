#pragma once
#include "CoreMinimal.h"
#include "DynamicMeshActor.h"
#include "RivalsStoryTiledVolumeActor.generated.h"

class ARivalsStoryTiledResultActor;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryTiledVolumeActor : public ADynamicMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsStoryTiledResultActor* ResultActor;
    
    ARivalsStoryTiledVolumeActor(const FObjectInitializer& ObjectInitializer);

};

