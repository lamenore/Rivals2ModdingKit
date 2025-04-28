#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OverheadHudWidget.generated.h"

class ARivalsCharacterEntity;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UOverheadHudWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsCharacterEntity* OwnerRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TagText;
    
    UOverheadHudWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOverheadHudBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpowered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPoisonStacks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFleetStamina();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamage();
    
};

