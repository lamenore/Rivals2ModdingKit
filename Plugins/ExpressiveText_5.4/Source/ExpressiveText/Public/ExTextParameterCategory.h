#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "ExTextParameterCategory.generated.h"

class UExTextParameterCategory;

UCLASS(Blueprintable)
class UExTextParameterCategory : public UObject {
    GENERATED_BODY()
public:
    UExTextParameterCategory();

    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UExTextParameterCategory>> SortCategories(TArray<TSubclassOf<UExTextParameterCategory>> Categories);
    
};

