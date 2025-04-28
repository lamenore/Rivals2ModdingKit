#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseMenuTab.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UPauseMenuTab : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ButtonContainer;
    
public:
    UPauseMenuTab();

};

