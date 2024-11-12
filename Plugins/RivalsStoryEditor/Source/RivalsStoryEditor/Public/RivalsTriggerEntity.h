#pragma once
#include "CoreMinimal.h"
#include "RivalsColliderEntity.h"
#include "RivalsStoryToggleInterface.h"
#include "StoryEntityReferences.h"
#include "RivalsTriggerEntity.generated.h"

class URivalsBoxComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsTriggerEntity : public ARivalsColliderEntity, public IRivalsStoryToggleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnTriggerEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnTriggerExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnTriggerToggle;
    
    ARivalsTriggerEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerToggleEvent(bool _toggleState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerExitEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTriggerEnterEvent();
    

    // Fix for true pure virtual functions not being implemented
};

