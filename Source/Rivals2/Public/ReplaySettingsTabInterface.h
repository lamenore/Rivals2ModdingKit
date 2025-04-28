#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ReplaySettingsTabInterface.generated.h"

class ARivalsPlayerController;
class UReplaySettingsPopup;
class UReplaySettingsRow;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplaySettingsTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_RowContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsPopup* SettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplaySettingsRow* FocusedRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* CurrentController;
    
public:
    UReplaySettingsTabInterface();

};

