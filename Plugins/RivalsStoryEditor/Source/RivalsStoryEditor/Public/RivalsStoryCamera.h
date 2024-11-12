#pragma once
#include "CoreMinimal.h"
#include "RivalsCamera.h"
#include "RivalsStoryCamera.generated.h"

UCLASS(Blueprintable)
class ARivalsStoryCamera : public ARivalsCamera {
    GENERATED_BODY()
public:
    ARivalsStoryCamera(const FObjectInitializer& ObjectInitializer);

};

