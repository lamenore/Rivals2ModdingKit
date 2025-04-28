#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StageSkinButton.generated.h"

class UBetterImage;
class UBorder;
class URivalsButtonWidget;
class URivalsStageSkinData;
class UStageSelectScreen;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStageSkinButton : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_StageImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_OuterBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_OuterBorderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_SkinNotOwnedBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnUnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnPressAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnReleaseAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStageSelectScreen* ParentStageSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsStageSkinData* StageSkinData;
    
public:
    UStageSkinButton();

    UFUNCTION(BlueprintCallable)
    void OnUnhoveredByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPressedByPlayer(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHoveredByPlayer(const int32 UserIndex);
    
};

