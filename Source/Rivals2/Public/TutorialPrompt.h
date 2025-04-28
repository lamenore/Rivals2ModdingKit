#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TutorialPrompt.generated.h"

class UBetterButtonDisplayer;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTutorialPrompt : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_ButtonDisplayer;
    
    UTutorialPrompt();

};

