#pragma once
#include "CoreMinimal.h"
#include "PlayerSlotOptionsTabInterface.h"
#include "Templates/SubclassOf.h"
#include "TagPlayerSlotOptionsTab.generated.h"

class UPlayerSlotOptionsButtonWidget;
class UUIButtonDisplayer;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTagPlayerSlotOptionsTab : public UPlayerSlotOptionsTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerSlotOptionsButtonWidget> WBP_PlayerSlotOptionsButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIButtonDisplayer* BP_CreateButtonDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIButtonDisplayer* BP_DeleteButtonDisplayer;
    
    UTagPlayerSlotOptionsTab();

};

