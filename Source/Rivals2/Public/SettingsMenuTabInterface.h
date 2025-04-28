#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsMenuTabInterface.generated.h"

class ARivalsPlayerController;
class UCharacterSelectScreen;
class USettingsMenuRow;
class USettingsMenuWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USettingsMenuTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectScreen* CSSWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_RowContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuWidget* SettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* FocusedRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* CurrentController;
    
public:
    USettingsMenuTabInterface();

};

