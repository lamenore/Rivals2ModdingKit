#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RivalsCameraVolumeVisual.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALSSTORYEDITOR_API URivalsCameraVolumeVisual : public UActorComponent {
    GENERATED_BODY()
public:
    URivalsCameraVolumeVisual(const FObjectInitializer& ObjectInitializer);

};

