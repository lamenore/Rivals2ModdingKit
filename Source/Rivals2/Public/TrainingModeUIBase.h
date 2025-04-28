#pragma once
#include "CoreMinimal.h"
#include "ClientBehavior.h"
#include "ERivalsSessionState.h"
#include "TrainingModeUIBase.generated.h"

class UActionSuccessCounter;
class UBorder;
class UImage;
class URivalsStageData;
class UTextBlock;
class UTrainingMenuPopup;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingModeUIBase : public UClientBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuPopup* TrainingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_InputsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionSuccessCounter* BP_SuccessCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DpadRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DpadLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_DpadDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_DownImage;
    
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

