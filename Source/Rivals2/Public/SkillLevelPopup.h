#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "SkillLevelPopup.generated.h"

class UMenuButtonWidget;
class USkillLevelButton;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USkillLevelPopup : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillLevelButton* BP_BeginnerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillLevelButton* BP_IntermediateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillLevelButton* BP_AdvancedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonWidget* BP_CloseButton;
    
public:
    USkillLevelPopup();

private:
    UFUNCTION(BlueprintCallable)
    void OnCloseButtonPressed(int32 UserIndex);
    
};

