#pragma once
#include "CoreMinimal.h"
#include "SnapNetSampleServerScript.h"
#include "ERivalsPlayerSlotStatus.h"
#include "RivalsPlayerReconnectSlot.h"
#include "RivalsServerPlayerStats.h"
#include "RivalsServerScript.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsServerScript : public USnapNetSampleServerScript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> OccupiedPlayerSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ERivalsPlayerSlotStatus> PlayerSlotStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRivalsServerPlayerStats> PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FRivalsPlayerReconnectSlot> ReconnectSlots;
    
public:
    URivalsServerScript();

    UFUNCTION(BlueprintCallable)
    void GoToCharacterSelectScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetThrows(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelfDestructs(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPummelSuccesses(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPummelAttempts(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParrySuccesses(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetParryAttemps(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLedgeGrabs(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKOs(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroundTime(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGrabSuccesses(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGrabAttempts(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeaths(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageTaken(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageShielded(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageDealt(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAirTime(int32 PlayerIndex) const;
    
};

