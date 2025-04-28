#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "MainMenuTrialsSubTab.generated.h"

class UMainMenuButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuTrialsSubTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_TargetTestButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_EyeBreakButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_EdgeguardButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMainMenuButtonWidget* BP_BackButton;
    
    UMainMenuTrialsSubTab();

    UFUNCTION(BlueprintCallable)
    void OnTargetBreakPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnEyeBreakPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnEdgeguardPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonReleased();
    
};

