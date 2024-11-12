#include "HorizonButtonUserWidget.h"
#include "Components/SlateWrapperTypes.h"

UHorizonButtonUserWidget::UHorizonButtonUserWidget() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->Button_Main = NULL;
    this->TextBlock_Main = NULL;
    this->Image_Main = NULL;
    this->Text_Main = FText::FromString(TEXT("Text Block"));
    this->bFocusOnHovered = true;
    this->bButtonFocused = false;
}








void UHorizonButtonUserWidget::NativeOnButtonUnhovered() {
}

void UHorizonButtonUserWidget::NativeOnButtonReleased() {
}

void UHorizonButtonUserWidget::NativeOnButtonPressed() {
}

void UHorizonButtonUserWidget::NativeOnButtonHovered() {
}

void UHorizonButtonUserWidget::NativeOnButtonClicked() {
}


