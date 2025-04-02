#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CompiledExpressiveCharacter.h"
#include "Templates/SubclassOf.h"
#include "ExpressiveTextProcessor.generated.h"

class UExpressiveTextParameterValue;

UCLASS(Blueprintable)
class EXPRESSIVETEXT_API UExpressiveTextProcessor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExpressiveTextProcessor();

    UFUNCTION(BlueprintCallable)
    static void StringIntoLinesArray(const FString& String, TArray<FString>& OutLines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UExpressiveTextParameterValue* GetParameter(const FCompiledExpressiveCharacter& Character, TSubclassOf<UExpressiveTextParameterValue> Type);
    
};

