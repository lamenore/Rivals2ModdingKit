#pragma once
#include "CoreMinimal.h"
#include "RivalsPooledActor.h"
#include "RivalsGameStateRenderer.generated.h"

class USnapNetEntityRendererComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsGameStateRenderer : public ARivalsPooledActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityRendererComponent* EntityRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviouslyRenderedGameplayFrame;
    
public:
    ARivalsGameStateRenderer(const FObjectInitializer& ObjectInitializer);

};

