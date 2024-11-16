#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "ERivalsCurrencyType.h"
#include "ResultsXpUpdateInfo.h"
#include "XpUpdateDisplayInterface.h"
#include "ArcadeModeVictoryScreen.generated.h"

class UArcadeMedalWidget;
class UFMODEvent;
class UImage;
class UResultsXpWidget;
class URivalsButtonWidget;
class UTextBlock;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UArcadeModeVictoryScreen : public UBaseScreenWidget, public IXpUpdateDisplayInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcadeMedalWidget* BP_OverallMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResultsXpWidget* BP_ResultsXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_ButtonInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> CharacterSplashImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UFMODEvent>> CharacterThemes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_EntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_TransitionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_ExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BP_BonusXPAnim;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FResultsXpUpdateInfo> PlayerXpInfoMap;
    
public:
    UArcadeModeVictoryScreen();

    UFUNCTION(BlueprintCallable)
    void StartXpAnimation();
    
    UFUNCTION(BlueprintCallable)
    void StartCoinSFX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayXpForSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterBackground(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    void ProcessXpUpdate(const FResultsXpUpdateInfo XpUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ProcessNextReward();
    
    UFUNCTION(BlueprintCallable)
    void PlayCoinTotalAppearSFX();
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterBGM(FName CharacterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FResultsXpUpdateInfo GetXpUpdateForSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IXpUpdateDisplayInterface> GetXpUpdateDisplayInterface();
    
    UFUNCTION(BlueprintCallable)
    FString GetTimeString(int32 Frames);
    
    UFUNCTION(BlueprintCallable)
    void EndCoinSFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessedPlayerXpUpdate(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisplayXpCoinReward(ERivalsCurrencyType CurrencyType, int32 DeltaCoins, int32 NewTotal, int32 BonusCoins);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CurrencyRewardProcessed(const ERivalsCurrencyType& CurrencyType, const int32& DeltaCurrency, const int32& NewCurrencyTotal);
    
    UFUNCTION(BlueprintCallable)
    void AttemptReturnToCSS();
    

    // Fix for true pure virtual functions not being implemented
};

