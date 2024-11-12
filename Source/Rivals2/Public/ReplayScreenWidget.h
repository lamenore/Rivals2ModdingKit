#pragma once
#include "CoreMinimal.h"
#include "BasePopupWidget.h"
#include "Templates/SubclassOf.h"
#include "ReplayScreenWidget.generated.h"

class UReplayMenuRow;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UReplayScreenWidget : public UBasePopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayMenuRow> ReplayRowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ReplayRowContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReplayMenuRow* BP_NoReplaysPlaceholder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UReplayMenuRow*> ReplayRowEntries;
    
public:
    UReplayScreenWidget();

    UFUNCTION(BlueprintCallable)
    void RefreshReplayList();
    
};

