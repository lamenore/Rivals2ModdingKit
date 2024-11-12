#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ERivalsArcadeModeDifficultySetting.h"
#include "ArcadeTopBarWidget.generated.h"

class URivalsCharacterSkinDefinition;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UArcadeTopBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_StageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_RecordText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TotalTime;
    
    UArcadeTopBarWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateTotalTime();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBestTime(FName CharacterName, ERivalsArcadeModeDifficultySetting Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void UpdateArcadeInfo();
    
    UFUNCTION(BlueprintCallable)
    FString GetOpponentString(TArray<TSoftClassPtr<URivalsCharacterSkinDefinition>> Opponents);
    
    UFUNCTION(BlueprintCallable)
    FString GetModeString();
    
};

