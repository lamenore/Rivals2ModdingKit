#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "MainMenuTutorialsSubTab.generated.h"

class UMainMenuButtonWidget;
class UTutorialSaveGame;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuTutorialsSubTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_MovementButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_DefenseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_OffenseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialSaveGame* TutorialSave;
    
    UMainMenuTutorialsSubTab();

    UFUNCTION(BlueprintCallable)
    void OnOffenseButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnDefenseButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
};

