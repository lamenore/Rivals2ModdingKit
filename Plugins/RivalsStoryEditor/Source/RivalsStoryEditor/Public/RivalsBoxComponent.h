#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "RivalsBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALSSTORYEDITOR_API URivalsBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    URivalsBoxComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSnapNetPropertiesModified();
    
};

