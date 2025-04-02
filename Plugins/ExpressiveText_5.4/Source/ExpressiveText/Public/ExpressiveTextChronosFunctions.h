#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ExpressiveTextChronos.h"
#include "OnTextFullyRevealedDelegateDelegate.h"
#include "ExpressiveTextChronosFunctions.generated.h"

UCLASS(Blueprintable)
class UExpressiveTextChronosFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExpressiveTextChronosFunctions();

    UFUNCTION(BlueprintCallable)
    static void SkipToRevealEnd(UPARAM(Ref) FExpressiveTextChronos& Chronos);
    
    UFUNCTION(BlueprintCallable)
    static void SetRevealPaused(UPARAM(Ref) FExpressiveTextChronos& Chronos, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(UPARAM(Ref) FExpressiveTextChronos& Chronos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRevealing(const FExpressiveTextChronos& Chronos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeSinceFullyRevealed(const FExpressiveTextChronos& Chronos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimePassed(const FExpressiveTextChronos& Chronos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRevealDuration(const FExpressiveTextChronos& Chronos);
    
    UFUNCTION(BlueprintCallable)
    static void BindOnTextFullyRevealed(UPARAM(Ref) FExpressiveTextChronos& Chronos, FOnTextFullyRevealedDelegate Delegate);
    
};

