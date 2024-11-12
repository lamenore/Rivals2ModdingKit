#pragma once
#include "CoreMinimal.h"
#include "ItemArray.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FItemArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> Items;
    
    RIVALS2_API FItemArray();
};

