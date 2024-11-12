#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuTabInterface.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMainMenuTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TopBarScreenName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_LeftButtonContainer;
    
public:
    UMainMenuTabInterface();

};

