#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExpressiveLineExtractionsInfo.h"
#include "ExpressiveTextExtractionSection.h"
#include "ExpressiveTextExtractionsFunctions.generated.h"

UCLASS(Blueprintable)
class UExpressiveTextExtractionsFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExpressiveTextExtractionsFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<FExpressiveTextExtractionSection> GetAllSections(const FExpressiveLineExtractionsInfo& Info);
    
};

