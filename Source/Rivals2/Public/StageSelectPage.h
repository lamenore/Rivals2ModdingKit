#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StageSelectPage.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStageSelectPage : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_TopStageRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BP_BottomStageRow;
    
    UStageSelectPage();

};

