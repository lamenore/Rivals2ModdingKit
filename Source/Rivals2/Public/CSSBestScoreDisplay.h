#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsScoreType.h"
#include "CSSBestScoreDisplay.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCSSBestScoreDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TotalTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_ScoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TotalScoreText;
    
    UCSSBestScoreDisplay();

    UFUNCTION(BlueprintCallable)
    void UpdateState(int32 Value, TEnumAsByte<ERivalsScoreType> ScoreType);
    
    UFUNCTION(BlueprintCallable)
    void SetTotalScore(int32 Value, TEnumAsByte<ERivalsScoreType> ScoreType);
    
    UFUNCTION(BlueprintCallable)
    void AddScoreToTotal(int32 Value, TEnumAsByte<ERivalsScoreType> ScoreType);
    
};

