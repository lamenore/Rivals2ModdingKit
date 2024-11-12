#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ERivalsAbyssArmorState.h"
#include "ERivalsArcadeMedalType.h"
#include "ERivalsArcadeModeDifficultySetting.h"
#include "ERivalsArcadeModeStageType.h"
#include "ResultsXpUpdateInfo.h"
#include "Templates/SubclassOf.h"
#include "RivalsArcadeModeSubsystem.generated.h"

class ARivalsTargetEntity;
class UArcadeModeGameOverWidget;
class UGameOutroWidget;
class UHordeStockDisplayWidget;
class UObject;
class URivalsArcadeModeData;
class URivalsArcadeModeSubsystem;
class URivalsCharacterSkinDefinition;

UCLASS(Blueprintable)
class RIVALS2_API URivalsArcadeModeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsArcadeModeDifficultySetting ArcadeModeDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLastArcadeANewMedal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHordeStockDisplayWidget> HordeStockWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterSkinDefinition* ArcadeModeSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArcadeModeStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArcadeModeStocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArcadeModeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalArcadeModeFramesElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArcadeModeStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingTargets;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERivalsArcadeMedalType> MedalHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultsXpUpdateInfo> XpUpdates;
    
    URivalsArcadeModeSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveTarget(ARivalsTargetEntity* TargetEntity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameOver();
    
    UFUNCTION(BlueprintCallable)
    bool IncreaseDifficulty();
    
    UFUNCTION(BlueprintPure)
    ERivalsArcadeMedalType GetTotalMedal(int32 TotalElapsedFrames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalHordeOpponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalFramesElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalArcadeModeStages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeFromSteamStats(FName Character, ERivalsArcadeModeDifficultySetting Difficulty);
    
    UFUNCTION(BlueprintPure)
    ERivalsArcadeMedalType GetStageMedal(int32 StageElapsedFrames, bool IsTeams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARivalsTargetEntity*> GetRemainingTargets();
    
    UFUNCTION(BlueprintPure)
    ERivalsArcadeMedalType GetMedalFromSteamStats(FName Character, ERivalsArcadeModeDifficultySetting Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAbyssArmor(ERivalsArcadeModeDifficultySetting Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHordeStocksRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UArcadeModeGameOverWidget* GetGameOverWidget(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UGameOutroWidget* GetGameOutroWidget(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsArcadeModeStageType GetCurrentStageType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsArcadeModeData* GetArcadeModeData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERivalsAbyssArmorState GetAbyssArmorState(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsArcadeModeSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool DecreaseDifficulty();
    
};

