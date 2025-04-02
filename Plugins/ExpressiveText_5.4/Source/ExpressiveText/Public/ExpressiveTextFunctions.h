#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Framework/Text/TextLayout.h"
#include "ExpressiveText.h"
#include "ExpressiveTextAlignment.h"
#include "ExpressiveTextFields.h"
#include "ExpressiveTextLayoutInformation.h"
#include "ExpressiveTextLineInformation.h"
#include "ExpressiveTextSelector.h"
#include "ExpressiveTextWrapSettings.h"
#include "ExpressiveTextFunctions.generated.h"

class UExpressiveTextAsset;
class UExpressiveTextStyleBase;
class UObject;

UCLASS(Blueprintable)
class UExpressiveTextFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExpressiveTextFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetWrapSettings(UPARAM(Ref) FExpressiveText& ExpressiveText, const FExpressiveTextWrapSettings& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetText(UPARAM(Ref) FExpressiveText& ExpressiveText, const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetJustification(UPARAM(Ref) FExpressiveText& ExpressiveText, TEnumAsByte<ETextJustify::Type> Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInjectedText(UPARAM(Ref) FExpressiveTextSelector& Selector, UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SetFields(UPARAM(Ref) FExpressiveText& ExpressiveText, FExpressiveTextFields Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultStyle(UPARAM(Ref) FExpressiveText& ExpressiveText, UExpressiveTextStyleBase* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultFontSize(UPARAM(Ref) FExpressiveText& ExpressiveText, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetAsset(UPARAM(Ref) FExpressiveText& ExpressiveText, UExpressiveTextAsset* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlignment(UPARAM(Ref) FExpressiveText& ExpressiveText, const FExpressiveTextAlignment& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FExpressiveText NewExpressiveText(UObject* WorldContextObject, FText StartingText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FExpressiveText MakeExpressiveTextFromFields(UObject* WorldContextObject, const FExpressiveTextFields& Fields);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FExpressiveText MakeExpressiveTextFromAsset(UObject* WorldContextObject, UExpressiveTextAsset* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWordAtLocation(UPARAM(Ref) FExpressiveText& Text, FVector2D Location, float Scaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWordAtIndex(UPARAM(Ref) FExpressiveText& Text, int32 LineIndex, int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRevealProgress(UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumRevealedCharacters(UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLineInformation(UPARAM(Ref) FExpressiveText& Text, TArray<FExpressiveTextLineInformation>& OutLineInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextLayoutInformation GetLayoutInformation(UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextFields GetFields(UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FExpressiveText GetExpressiveTextFromSelector(UObject* WorldContextObject, const FExpressiveTextSelector& Selector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetChararacterAtLocation(UPARAM(Ref) FExpressiveText& Text, FVector2D Location, float Scaling);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterCount(UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetBoxSize(UPARAM(Ref) FExpressiveText& Text);
    
    UFUNCTION(BlueprintCallable)
    static void DisableDefaultFontSize(UPARAM(Ref) FExpressiveText& ExpressiveText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineWrapSettings(UPARAM(Ref) FExpressiveText& ExpressiveText, const FExpressiveTextWrapSettings Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineWorldContext(UPARAM(Ref) FExpressiveText& ExpressiveText, UObject* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineText(UPARAM(Ref) FExpressiveText& ExpressiveText, FText Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineJustification(UPARAM(Ref) FExpressiveText& ExpressiveText, TEnumAsByte<ETextJustify::Type> Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineFields(UPARAM(Ref) FExpressiveText& ExpressiveText, const FExpressiveTextFields& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineDefaultStyle(UPARAM(Ref) FExpressiveText& ExpressiveText, UExpressiveTextStyleBase* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineDefaultFontSize(UPARAM(Ref) FExpressiveText& ExpressiveText, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineAsset(UPARAM(Ref) FExpressiveText& ExpressiveText, UExpressiveTextAsset* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText DefineAlignment(UPARAM(Ref) FExpressiveText& ExpressiveText, const FExpressiveTextAlignment& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText Clone(const FExpressiveText& ExpressiveText);
    
    UFUNCTION(BlueprintPure)
    static int64 CalcSelectorChecksum(UPARAM(Ref) FExpressiveTextSelector& Selector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveText AddTemplateValue(UPARAM(Ref) FExpressiveText& Text, const FName& Key, const FString& Value);
    
};

