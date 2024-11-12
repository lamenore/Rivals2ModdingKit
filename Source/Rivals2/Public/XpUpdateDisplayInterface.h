#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ERivalsCurrencyType.h"
#include "ResultsXpUpdateInfo.h"
#include "XpUpdateDisplayInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UXpUpdateDisplayInterface : public UInterface {
    GENERATED_BODY()
};

class IXpUpdateDisplayInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void StartCoinSFX() PURE_VIRTUAL(StartCoinSFX,);
    
    UFUNCTION()
    virtual void ProcessXpUpdate(const FResultsXpUpdateInfo XpUpdate) PURE_VIRTUAL(ProcessXpUpdate,);
    
    UFUNCTION()
    virtual void ProcessNextReward() PURE_VIRTUAL(ProcessNextReward,);
    
    UFUNCTION()
    virtual void PlayCoinTotalAppearSFX() PURE_VIRTUAL(PlayCoinTotalAppearSFX,);
    
    UFUNCTION()
    virtual void EndCoinSFX() PURE_VIRTUAL(EndCoinSFX,);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ProcessedPlayerXpUpdate(const int32& PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisplayXpCoinReward(ERivalsCurrencyType CurrencyType, int32 DeltaCoins, int32 NewTotal);
    
};

