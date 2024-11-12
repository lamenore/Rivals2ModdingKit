#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TrainingSubsystem.generated.h"

class UTrainingModeUIBase;
class UTrainingSaveGame;

UCLASS(Blueprintable)
class RIVALS2_API UTrainingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrainingSaveGame* TrainingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingModeUIBase* BaseUIWidget;
    
    UTrainingSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetIsTrainingStage(bool NewIsTrainingStage);
    
    UFUNCTION(BlueprintCallable)
    void QueueForMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void OpenTrainingMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchFound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingStage();
    
    UFUNCTION(BlueprintCallable)
    UTrainingModeUIBase* GetBaseUIWidget();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStageLayout(FName StageName);
    
};

