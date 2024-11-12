#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HordeStockDisplayWidget.generated.h"

class URivalsArcadeModeSubsystem;
class URivalsCharacterSkinDefinition;
class URivalsColorSlotData;
class UStockIconWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UHordeStockDisplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsArcadeModeSubsystem* ArcadeModeSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStockIconWidget* BP_StockIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_StockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StockIconInitialized;
    
    UHordeStockDisplayWidget();

    UFUNCTION(BlueprintCallable)
    void SetStockCount(int32 NewStockCount);
    
    UFUNCTION(BlueprintCallable)
    void InitStockIcon(URivalsCharacterSkinDefinition* Skin, URivalsColorSlotData* ColorSlotData);
    
    UFUNCTION(BlueprintCallable)
    void GetHordeCpuCharacter();
    
};

