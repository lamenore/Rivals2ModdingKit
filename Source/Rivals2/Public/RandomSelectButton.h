#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RandomSelectButton.generated.h"

class UBorder;
class UCanvasPanel;
class UCharacterSelectScreen;
class UCssPuckButton;
class UImage;
class URivalsButtonWidget;
class URivalsCharacterDefinition;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URandomSelectButton : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_ButtonBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_ContentPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_CharacterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_PuckPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPuckButton* BP_Player1Puck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPuckButton* BP_Player2Puck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPuckButton* BP_Player3Puck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPuckButton* BP_Player4Puck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_OnUnHoverAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_SelectedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_UnselectedAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterDefinition* CharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterSelectScreen* ParentScreen;
    
public:
    URandomSelectButton();

    UFUNCTION(BlueprintCallable)
    void OnButtonUnhovered(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonReleased(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonPressed(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonHovered(const int32 UserIndex);
    
};

