#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyInt32.h"
#include "BattleWave.h"
#include "RivalsStoryEntity.h"
#include "RivalsStoryToggleInterface.h"
#include "StoryEntityReferences.h"
#include "RivalsBattleManager.generated.h"

UCLASS(Blueprintable)
class RIVALSSTORYEDITOR_API ARivalsBattleManager : public ARivalsStoryEntity, public IRivalsStoryToggleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bPrevActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleWave> Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 CurrentWaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnBattleStartRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoryEntityReferences OnBattleEndRef;
    
    ARivalsBattleManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleNextWave(FBattleWave& _nextwave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void AddWave(FBattleWave& _wave);
    

    // Fix for true pure virtual functions not being implemented
};

