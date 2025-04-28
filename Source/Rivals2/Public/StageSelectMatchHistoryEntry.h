#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StageSelectMatchHistoryEntry.generated.h"

class UBorder;
class UImage;
class UStockIconWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStageSelectMatchHistoryEntry : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_StageImageBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_StageImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStockIconWidget* BP_CharacterStockIcon;
    
public:
    UStageSelectMatchHistoryEntry();

};

