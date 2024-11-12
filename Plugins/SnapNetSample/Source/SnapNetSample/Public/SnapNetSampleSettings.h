#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SnapNetSampleSettings.generated.h"

class UWorld;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SNAPNETSAMPLE_API USnapNetSampleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ProjectDisplayName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> GameMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScoreboardColumn1HeaderText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ScoreboardColumn2HeaderText;
    
    USnapNetSampleSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetScoreboardHeaderTextForColumn2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetScoreboardHeaderTextForColumn1();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetProjectDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UWorld> GetGameMap();
    
};

