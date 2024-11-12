#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnUpdateRendererDelDelegate.h"
#include "RivalsStoryRenderer.generated.h"

class USceneComponent;
class USnapNetEntityRendererComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsStoryRenderer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateRendererDel OnUpdateRendererDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityRendererComponent* EntityRendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> InstancedComponents;
    
public:
    ARivalsStoryRenderer(const FObjectInitializer& ObjectInitializer);

};

