#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsArcadeModeDifficultySetting.h"
#include "ArcadeModeDifficultyWidget.generated.h"

class UArcadeMedalWidget;
class URivalsButtonWidget;
class URivalsCharacterDefinition;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UArcadeModeDifficultyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DifficultyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ScoreTextEasy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ScoreTextMedium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ScoreTextHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcadeMedalWidget* BP_EasyMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcadeMedalWidget* BP_MediumMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcadeMedalWidget* BP_HardMedal;
    
    UArcadeModeDifficultyWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateState(const URivalsCharacterDefinition* CharacterDefinition);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyText(ERivalsArcadeModeDifficultySetting Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnRightReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnLeftReleased();
    
};

