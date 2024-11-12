#pragma once
#include "CoreMinimal.h"
#include "BaseScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "CreditsScreenWidget.generated.h"

class UCreditsDataAsset;
class UCreditsSectionWidget;
class UHorizonDialogueMsgTextBlock;
class URivalsButtonWidget;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UCreditsScreenWidget : public UBaseScreenWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsDataAsset> CreditsDataAssetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCreditsSectionWidget> SectionWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_CreditsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizonDialogueMsgTextBlock* BP_TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_KSCreditsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URivalsButtonWidget* BP_CatchAllButton;
    
public:
    UCreditsScreenWidget();

    UFUNCTION(BlueprintCallable)
    void OnCatchAllButtonReleased(const int32 UserIndex);
    
};

