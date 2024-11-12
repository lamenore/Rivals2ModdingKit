#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "MainMenuExtrasTab.generated.h"

class UMainMenuButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuExtrasTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_ReplaysButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_CreditsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_InventoryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_ProgressionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BackButton;
    
    UMainMenuExtrasTab();

    UFUNCTION(BlueprintCallable)
    void OnReplaysButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnProgressionButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCreditsButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
};

