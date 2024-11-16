#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "ERivalsColorSlot.h"
#include "ERivalsSessionState.h"
#include "VersusScreenPlayerInfo.h"
#include "VersusScreenWidget.generated.h"

class APlayerController;
class ARivalsPlayerController;
class ARivalsPlayerEntity;
class URivalsStageSkinData;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UVersusScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsStageSkinData* CurrentStageSkin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARivalsPlayerEntity*> PlayerEntities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVersusScreenPlayerInfo> PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
public:
    UVersusScreenWidget();

    UFUNCTION(BlueprintCallable)
    void OnInitSessionState(const ERivalsSessionState SessionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerActive(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitVersusWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWinCountForPlayer(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsStageSkinData* GetStageSkinData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsColorSlot GetPlayerTeam(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerSlotForPlayerController(APlayerController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVersusScreenPlayerInfo GetPlayerInfo(const int32& PlayerSlot) const;
    
    UFUNCTION(BlueprintCallable)
    ARivalsPlayerController* GetPlayerControllerForSlot(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetActivePlayerSlots() const;
    
};

