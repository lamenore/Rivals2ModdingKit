#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StockIconWidget.generated.h"

class UImage;
class UMaterialInterface;
class URivalsCharacterSkinDefinition;
class URivalsColorSlotData;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStockIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsCharacterSkinDefinition* SkinDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsColorSlotData* ColorSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_IconImage;
    
    UStockIconWidget();

    UFUNCTION(BlueprintCallable)
    void SetStockIconMaterialWithColorSlotData(URivalsColorSlotData* InColorSlotData, bool Sync);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetStockIconMaterial(bool Sync) const;
    
};

