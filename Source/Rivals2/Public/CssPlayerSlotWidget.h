#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CssPlayerSlotWidget.generated.h"

class UBetterImage;
class UMaterialInterface;
class UPlayerRankWidget;
class UPlayerSlotOptionsMenuWidget;
class UScaleBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCssPlayerSlotWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_ChangeTypeScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_AddCPUScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* BP_PlayerRankScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerRankWidget* BP_PlayerRankDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerSlotOptionsMenuWidget* BP_PlayerSlotOptionsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_ProfileIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* IconUpdatingMaterial;
    
public:
    UCssPlayerSlotWidget();

    UFUNCTION(BlueprintCallable)
    void OnUpdatedFromBP();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedFromBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditingOptions() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSetPlayerCPU();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerAdded();
    
};

