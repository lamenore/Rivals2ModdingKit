#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RivalsStorySceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALSSTORYEDITOR_API URivalsStorySceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URivalsStorySceneComponent(const FObjectInitializer& ObjectInitializer);

};

