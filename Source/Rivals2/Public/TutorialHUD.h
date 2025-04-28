#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EAnimationToPlay.h"
#include "ERivalsBufferedInputAction.h"
#include "ERivalsCharacterAttack.h"
#include "TutorialHUD.generated.h"

class UBetterButtonDisplayer;
class URivalsExpressiveTextWidget;
class UTextBlock;
class UVerticalBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTutorialHUD : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ActionDisplayBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_ActionDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_ActionDisplayer1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_ActionDisplayer2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_ActionDisplayer3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_ActionDisplayer4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ActionDisplayerMiddleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ActionDisplayerMiddleText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ActionDisplayerMiddleText2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ActionDisplayerMiddleText3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsExpressiveTextWidget* BP_IntroText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_IntroAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsCharacterAttack CurrentAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAction2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAction3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAction4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationToPlay CurrentAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationToPlay CurrentAnim1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationToPlay CurrentAnim2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationToPlay CurrentAnim3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationToPlay CurrentAnim4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentMidText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentMidText1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentMidText2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentMidText3;
    
    UTutorialHUD();

    UFUNCTION(BlueprintCallable)
    void UpdateActionDisplayer(UBetterButtonDisplayer* ActionDisplayer);
    
    UFUNCTION(BlueprintCallable)
    void ShowOutro();
    
    UFUNCTION(BlueprintCallable)
    void ShowIntro();
    
    UFUNCTION(BlueprintCallable)
    void SetupMiddleText(UTextBlock* MiddleText, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetupDisplayer(FName ActionName, EAnimationToPlay Animation, FText MiddleText, FName ActionName1, EAnimationToPlay Animation1, FText MiddleText1, FName ActionName2, EAnimationToPlay Animation2, FText MiddleText2, FName ActionName3, EAnimationToPlay Animation3, FText MiddleText3, FName ActionName4, EAnimationToPlay Animation4);
    
    UFUNCTION(BlueprintCallable)
    void SetupActionDisplayer(UBetterButtonDisplayer* ActionDisplayer, FName ActionName, EAnimationToPlay Animation);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDisplayAttack(ERivalsCharacterAttack Attack);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDisplayAction(ERivalsBufferedInputAction Action);
    
    UFUNCTION(BlueprintCallable)
    void ResetInputDisplay();
    
    UFUNCTION(BlueprintCallable)
    void OnFacingDirChanged();
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectionAnim(EAnimationToPlay Anim);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirection(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    FName GetOppositeDirName(ERivalsCharacterAttack Attack, float Direction);
    
    UFUNCTION(BlueprintCallable)
    EAnimationToPlay GetOppositeDirAnim(ERivalsCharacterAttack Attack, EAnimationToPlay Anim, float Direction);
    
};

