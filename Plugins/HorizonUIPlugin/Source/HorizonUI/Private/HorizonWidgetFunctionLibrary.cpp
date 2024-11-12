#include "HorizonWidgetFunctionLibrary.h"

UHorizonWidgetFunctionLibrary::UHorizonWidgetFunctionLibrary() {
}

UWidget* UHorizonWidgetFunctionLibrary::SetWidgetVisibility(UUserWidget* UserWidget, FName WidgetName, ESlateVisibility eVisiblity) {
    return NULL;
}

void UHorizonWidgetFunctionLibrary::SetInputMode(APlayerController* InPC, EHorizonUIInputMode InInputMode, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bInHideCursorDuringCapture) {
}

bool UHorizonWidgetFunctionLibrary::IsIdeographic(int32 InCodePoint) {
    return false;
}

bool UHorizonWidgetFunctionLibrary::IsAlphabetic(int32 InCodePoint) {
    return false;
}

UWidget* UHorizonWidgetFunctionLibrary::GetWidgetFromNameRecursively(UUserWidget* pUserWidget, const FName& InWidgetName) {
    return NULL;
}

UWidgetAnimation* UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(UUserWidget* pUserWidget, const FName& animeName) {
    return NULL;
}

int32 UHorizonWidgetFunctionLibrary::GetUserIndex(UWidget* InWidget) {
    return 0;
}

UCanvasPanelSlot* UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(UWidget* pWidget) {
    return NULL;
}

EHorizonUIInputMode UHorizonWidgetFunctionLibrary::GetInputMode(const APlayerController* InPC) {
    return EHorizonUIInputMode::Invalidated;
}


