#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "MainMenuTutorialsTab.generated.h"

class UMainMenuButtonWidget;
class UTutorialSaveGame;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuTutorialsTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_VideoTutorialsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_GuidesButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BeginnerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_IntermediateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_AdvancedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialSaveGame* TutorialSave;
    
    UMainMenuTutorialsTab();

    UFUNCTION(BlueprintCallable)
    void OnVideoTutorialButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnIntermediateButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnGuidesButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginnerButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnAdvancedButtonPressed();
    
};

