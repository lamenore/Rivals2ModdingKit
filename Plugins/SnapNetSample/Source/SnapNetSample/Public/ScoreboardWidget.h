#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreboardWidget.generated.h"

class UScoreboardListItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SNAPNETSAMPLE_API UScoreboardWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScoreboardListItem*> ScoreboardListItems;
    
public:
    UScoreboardWidget();

    UFUNCTION(BlueprintCallable)
    void RefreshScoreboard();
    
};

