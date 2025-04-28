#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RivalsEyeBreakData.h"
#include "RivalsTargetBreakData.h"
#include "TrialsSaveGame.generated.h"

class URivalsCharacterDefinition;

UCLASS(Blueprintable)
class RIVALS2_API UTrialsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsTargetBreakData TargetBreakData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsEyeBreakData EyeBreakData;
    
    UTrialsSaveGame();

    UFUNCTION(BlueprintCallable)
    void SetTargetBreakTime(const URivalsCharacterDefinition* CharDefinition, const int32 TotalFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeBreakScore(const URivalsCharacterDefinition* CharDefinition, const int32 Score);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTargetBreakTime(const URivalsCharacterDefinition* CharDefinition);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEyeBreakScore(const URivalsCharacterDefinition* CharDefinition);
    
};

