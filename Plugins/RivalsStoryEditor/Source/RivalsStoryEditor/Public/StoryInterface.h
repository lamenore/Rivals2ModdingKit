#pragma once
#include "CoreMinimal.h"
#include "UniversalStoryInterface.h"
#include "StoryInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class RIVALSSTORYEDITOR_API UStoryInterface : public UUniversalStoryInterface {
    GENERATED_BODY()
};

class RIVALSSTORYEDITOR_API IStoryInterface : public IUniversalStoryInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateRenderer(AActor* Renderer, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRendererConstruct(AActor* Renderer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameplayTick();
    
};

