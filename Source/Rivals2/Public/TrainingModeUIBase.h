#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "TrainingModeUIBase.generated.h"

class UBorder;
class URivalsStageData;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingModeUIBase : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_InputsBox;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenuOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGridVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGeometryVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentTrainingStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrevTrainingStage;
    
public:
    UTrainingModeUIBase();

    UFUNCTION(BlueprintCallable)
    void TrainingPlatformSetup(FName StageName);
    
    UFUNCTION(BlueprintCallable)
    void ShowTraining(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void ShowStage(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void ShowResults(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void ShowEnvironment(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingStage(FName StageName);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingPlatformsVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingGridVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuOpen(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void LoadTrainingLevel(FName StageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingGridVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrainingGeometryVisible();
    
    UFUNCTION(BlueprintCallable)
    void HideTraining(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void HideStage(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void HideResults(int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    void HideEnvironment(int32 Linkage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsStageData* GetCurrentStageData();
    
};

