#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleRenderer.h"
#include "OnUpdateRendererDelDelegate.h"
#include "RivalsStoryArticleRenderer.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryArticleRenderer : public ARivalsArticleRenderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateRendererDel OnUpdateRendererDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> InstancedComponents;
    
public:
    ARivalsStoryArticleRenderer(const FObjectInitializer& ObjectInitializer);

};

