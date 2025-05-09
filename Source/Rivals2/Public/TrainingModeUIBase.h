#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "ERivalsSessionState.h"
#include "TrainingModeUIBase.generated.h"

class UActionSuccessCounter;
class UBetterButtonDisplayer;
class UBorder;
class URecordingIndicatorWidget;
class URivalsStageData;
class UTextBlock;
class UTrainingMenu;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingModeUIBase : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenu* TrainingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_InputsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionSuccessCounter* BP_SuccessCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URecordingIndicatorWidget* BP_RecordingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DpadRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DpadLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DpadDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_RightDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_LeftDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_DownDisplayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenuOpen;
    
public:
    UTrainingModeUIBase();

    UFUNCTION(BlueprintCallable)
    void UpdateActionCount();
    
    UFUNCTION(BlueprintCallable)
    void SetMenuOpen(bool IsOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchRestarted(ERivalsSessionState SessionState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URivalsStageData* GetCurrentStageData();
    
};

