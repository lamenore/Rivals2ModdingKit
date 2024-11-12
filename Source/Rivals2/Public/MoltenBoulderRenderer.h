#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "MoltenBoulderRenderer.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AMoltenBoulderRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
    AMoltenBoulderRenderer(const FObjectInitializer& ObjectInitializer);

};

