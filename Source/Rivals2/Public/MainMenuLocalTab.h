#pragma once
#include "CoreMinimal.h"
#include "MainMenuTabInterface.h"
#include "MainMenuLocalTab.generated.h"

class URivalsMenuButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMainMenuLocalTab : public UMainMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_LocalButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_TrainingButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_ArcadeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsMenuButtonWidget* BP_BackButton;
    
    UMainMenuLocalTab();

    UFUNCTION(BlueprintCallable)
    void OnTrainingPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnArcadePressed();
    
};

