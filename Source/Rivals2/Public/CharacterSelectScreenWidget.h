#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "BaseScreenWidget.h"
#include "CharacterSelectPlayerBoxInfo.h"
#include "CharacterSelectPlayerInfo.h"
#include "ECharacterSelectPlayerState.h"
#include "ERivalsAirGrabParrySetting.h"
#include "ERivalsArcadeModeDifficultySetting.h"
#include "ERivalsColorSlot.h"
#include "ERivalsRightStickSetting.h"
#include "ERivalsSessionState.h"
#include "MatchSettingsInfo.h"
#include "RivalsPlayerTag.h"
#include "Templates/SubclassOf.h"
#include "CharacterSelectScreenWidget.generated.h"

class APlayerController;
class ARivalsPlayerController;
class ARivalsPlayerEntity;
class UCSSCharacterButtonWidget;
class UCanvasPanel;
class UCharacterSelectScreenWidget;
class UCssPlayerSlotWidget;
class UCursorInterfaceWidget;
class UHorizontalBox;
class UOnlineTimerWidget;
class UProgressBar;
class URivalsCharacterDefinition;
class URivalsCharacterSkinDefinition;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCharacterSelectScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCSSCharacterButtonWidget> WBP_CSSCharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCharacterSelectScreenWidget> WBP_CSSHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_CSSButtonRow_UpperRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_CSSButtonRow_LowerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCursorInterfaceWidget* BP_CursorInterface;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARivalsPlayerEntity*> PlayerEntities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSelectPlayerInfo> PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchSettingsInfo MatchInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* GameSettingsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPlayerSlotWidget* BP_CssPlayerSlotWidget0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPlayerSlotWidget* BP_CssPlayerSlotWidget1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPlayerSlotWidget* BP_CssPlayerSlotWidget2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCssPlayerSlotWidget* BP_CssPlayerSlotWidget3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BP_OnHoldVisualContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* BP_BackProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineTimerWidget* BP_OnlineStateTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBackPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBackPressTime;
    
public:
    UCharacterSelectScreenWidget();

    UFUNCTION(BlueprintCallable)
    void UnhoverCharacterBox(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool ToggleTourneyMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTeamAttackSetting();
    
    UFUNCTION(BlueprintCallable)
    void ToggleTapWalljump(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ToggleTapStrong(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ToggleTapJump(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ToggleRumble(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ToggleRandomizeTeams();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDpadMovement(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ToggleAutoWalk(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetWinsRequired(const int32 InWinsRequired);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStickThreshold(const int32& PlayerSlot, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRightStickSetting(const int32& PlayerSlot, const ERivalsRightStickSetting& RstickSetting);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerTag(const FString& PlayerTagName, const int32& PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerCpu(const int32& PlayerSlot, const FString& Character);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchTimeSetting(int32 TimeInMinutes);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchTeamsSetting(bool bInTeamEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchStockSetting(int32 StockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchStockAndTime(int32 StockCount, int32 TimeInMinutes);
    
    UFUNCTION(BlueprintCallable)
    void SetJoystickSensitivityMultiplier(const int32& PlayerSlot, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetJoystickDeadzoneMultiplier(const int32& PlayerSlot, float InValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetHoverColorSlot(const int32& PlayerSlot, ERivalsColorSlot ColorSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultySetting(ERivalsArcadeModeDifficultySetting DifficultySetting);
    
    UFUNCTION(BlueprintCallable)
    void SetCpuLevel(const int32& PlayerSlot, const int32& CpuLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetAirParrySetting(const int32& PlayerSlot, const ERivalsAirGrabParrySetting& Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetAirGrabSetting(const int32& PlayerSlot, const ERivalsAirGrabParrySetting& Setting);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousSkin(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousColorSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextSkin(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextColorSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SelectHoveredCharacter(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void SelectCharacter(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition, TSoftClassPtr<URivalsCharacterSkinDefinition> InSkinDefinition, ERivalsColorSlot ColorSlot);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerSettings(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartMatch(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void RequestForfeit();
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayer(const int32& ThisPlayerSlot, const int32& TargetPlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void OpenTempGameSettings(const int32 OpeningPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenRemappingMenu(const int32& PlayerSlot, const FName& ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OpenPlayerStyles(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void OpenPlayerSettings(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuMovingToStageSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnInitSessionState(const ERivalsSessionState SessionState);
    
    UFUNCTION(BlueprintCallable)
    void MarkPlayerReady(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void MarkPlayerNotReady(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerUsingDefaultControls(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerReady(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerCpu(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerActive(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEveryoneReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsColorSlotAvailable(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition, TSoftClassPtr<URivalsCharacterSkinDefinition> InSkinDefinition, ERivalsColorSlot ColorSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitCSSWidget();
    
    UFUNCTION(BlueprintCallable)
    void IncrementWinsRequired();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCpuLevel(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void HoverOverCharacterBox(const int32& PlayerSlot, TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCharacterSelected(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinsRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinCountForPlayer(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTempMappingsForActionOrAxis(const int32& PlayerSlot, const FName& Name, bool& IsAction, TArray<FInputActionKeyMapping>& OutActionKeyMap, TArray<FInputAxisKeyMapping>& OutAxisKeyMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsColorSlot GetPlayerTeam(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSlotForPlayerController(APlayerController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable)
    ARivalsPlayerController* GetPlayerControllerForSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharacterSelectPlayerBoxInfo GetPlayerCharacterInfo(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMatchSettingsInfo GetMatchSettingsInfo();
    
    UFUNCTION(BlueprintCallable)
    void GetCustomMappingsForActionOrAxis(const int32& PlayerSlot, const FName& Name, bool& IsAction, TArray<FInputActionKeyMapping>& OutActionKeyMap, TArray<FInputAxisKeyMapping>& OutAxisKeyMap);
    
    UFUNCTION(BlueprintCallable)
    FRivalsPlayerTag GetCurrentPlayerTagInfo(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCpuLevel(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectCharacter(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void DecrementWinsRequired();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCpuLevel(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void CloseTempGameSettings();
    
    UFUNCTION(BlueprintCallable)
    void CloseRemappingMenu(const int32& PlayerSlot, const bool& AcceptChanges);
    
    UFUNCTION(BlueprintCallable)
    void ClosePlayerStyles(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ClosePlayerSettings(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomMappingsForActionOrAxis(const int32& PlayerSlot, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTeam(const int32& ThisPlayerSlot, const int32& TargetPlayerSlot);
    
    UFUNCTION(BlueprintCallable)
    void ChangeSkin(const int32& PlayerSlot, const ECharacterSelectPlayerState InState, TSoftClassPtr<URivalsCharacterSkinDefinition> InSkinDefinition, ERivalsColorSlot ColorSlot);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer(const int32& PlayerSlot);
    
};

