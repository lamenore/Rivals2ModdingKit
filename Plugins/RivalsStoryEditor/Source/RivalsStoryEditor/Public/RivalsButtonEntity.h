#pragma once
#include "CoreMinimal.h"
#include "RivalsActiveHitbox.h"
#include "RivalsColliderEntity.h"
#include "RivalsStoryHitboxInterface.h"
#include "StoryEntityReferences.h"
#include "RivalsButtonEntity.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsButtonEntity : public ARivalsColliderEntity, public IRivalsStoryHitboxInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnButtonHitbox;
    
    ARivalsButtonEntity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonHitEvent(FRivalsActiveHitbox& ActiveHitbox);
    

    // Fix for true pure virtual functions not being implemented
};

