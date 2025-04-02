#include "ExpressiveTextFunctions.h"

UExpressiveTextFunctions::UExpressiveTextFunctions() {
}

void UExpressiveTextFunctions::SetWrapSettings(FExpressiveText& ExpressiveText, const FExpressiveTextWrapSettings& Value) {
}

void UExpressiveTextFunctions::SetText(FExpressiveText& ExpressiveText, const FText& Value) {
}

void UExpressiveTextFunctions::SetJustification(FExpressiveText& ExpressiveText, TEnumAsByte<ETextJustify::Type> Value) {
}

void UExpressiveTextFunctions::SetInjectedText(FExpressiveTextSelector& Selector, FExpressiveText& Text) {
}

void UExpressiveTextFunctions::SetFields(FExpressiveText& ExpressiveText, FExpressiveTextFields Value) {
}

void UExpressiveTextFunctions::SetDefaultStyle(FExpressiveText& ExpressiveText, UExpressiveTextStyleBase* Value) {
}

void UExpressiveTextFunctions::SetDefaultFontSize(FExpressiveText& ExpressiveText, int32 Value) {
}

void UExpressiveTextFunctions::SetAsset(FExpressiveText& ExpressiveText, UExpressiveTextAsset* Value) {
}

void UExpressiveTextFunctions::SetAlignment(FExpressiveText& ExpressiveText, const FExpressiveTextAlignment& Value) {
}

FExpressiveText UExpressiveTextFunctions::NewExpressiveText(UObject* WorldContextObject, FText StartingText) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::MakeExpressiveTextFromFields(UObject* WorldContextObject, const FExpressiveTextFields& Fields) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::MakeExpressiveTextFromAsset(UObject* WorldContextObject, UExpressiveTextAsset* Asset) {
    return FExpressiveText{};
}

FString UExpressiveTextFunctions::GetWordAtLocation(FExpressiveText& Text, FVector2D Location, float Scaling) {
    return TEXT("");
}

FString UExpressiveTextFunctions::GetWordAtIndex(FExpressiveText& Text, int32 LineIndex, int32 CharacterIndex) {
    return TEXT("");
}

float UExpressiveTextFunctions::GetRevealProgress(FExpressiveText& Text) {
    return 0.0f;
}

int32 UExpressiveTextFunctions::GetNumRevealedCharacters(FExpressiveText& Text) {
    return 0;
}

void UExpressiveTextFunctions::GetLineInformation(FExpressiveText& Text, TArray<FExpressiveTextLineInformation>& OutLineInformation) {
}

FExpressiveTextLayoutInformation UExpressiveTextFunctions::GetLayoutInformation(FExpressiveText& Text) {
    return FExpressiveTextLayoutInformation{};
}

FExpressiveTextFields UExpressiveTextFunctions::GetFields(FExpressiveText& Text) {
    return FExpressiveTextFields{};
}

FExpressiveText UExpressiveTextFunctions::GetExpressiveTextFromSelector(UObject* WorldContextObject, const FExpressiveTextSelector& Selector) {
    return FExpressiveText{};
}

FString UExpressiveTextFunctions::GetChararacterAtLocation(FExpressiveText& Text, FVector2D Location, float Scaling) {
    return TEXT("");
}

int32 UExpressiveTextFunctions::GetCharacterCount(FExpressiveText& Text) {
    return 0;
}

FVector2D UExpressiveTextFunctions::GetBoxSize(FExpressiveText& Text) {
    return FVector2D{};
}

void UExpressiveTextFunctions::DisableDefaultFontSize(FExpressiveText& ExpressiveText) {
}

FExpressiveText UExpressiveTextFunctions::DefineWrapSettings(FExpressiveText& ExpressiveText, const FExpressiveTextWrapSettings Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineWorldContext(FExpressiveText& ExpressiveText, UObject* Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineText(FExpressiveText& ExpressiveText, FText Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineJustification(FExpressiveText& ExpressiveText, TEnumAsByte<ETextJustify::Type> Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineFields(FExpressiveText& ExpressiveText, const FExpressiveTextFields& Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineDefaultStyle(FExpressiveText& ExpressiveText, UExpressiveTextStyleBase* Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineDefaultFontSize(FExpressiveText& ExpressiveText, int32 Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineAsset(FExpressiveText& ExpressiveText, UExpressiveTextAsset* Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::DefineAlignment(FExpressiveText& ExpressiveText, const FExpressiveTextAlignment& Value) {
    return FExpressiveText{};
}

FExpressiveText UExpressiveTextFunctions::Clone(const FExpressiveText& ExpressiveText) {
    return FExpressiveText{};
}

int64 UExpressiveTextFunctions::CalcSelectorChecksum(FExpressiveTextSelector& Selector) {
    return 0;
}

FExpressiveText UExpressiveTextFunctions::AddTemplateValue(FExpressiveText& Text, const FName& Key, const FString& Value) {
    return FExpressiveText{};
}


