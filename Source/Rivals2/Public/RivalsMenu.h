#pragma once
#include "CoreMinimal.h"
#include "ERivalsMenuState.h"
#include "Templates/SubclassOf.h"
#include "RivalsMenu.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FRivalsMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERivalsMenuState LinkedMenuState;
    
    RIVALS2_API FRivalsMenu();
};

