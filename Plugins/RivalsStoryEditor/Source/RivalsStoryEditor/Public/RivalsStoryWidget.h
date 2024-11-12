#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "RivalsStoryWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class RIVALSSTORYEDITOR_API URivalsStoryWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    URivalsStoryWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateRenderer(AActor* Renderer, float DeltaSeconds);
    
};

