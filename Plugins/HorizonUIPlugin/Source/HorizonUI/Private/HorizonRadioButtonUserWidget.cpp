#include "HorizonRadioButtonUserWidget.h"
#include "Components/SlateWrapperTypes.h"

UHorizonRadioButtonUserWidget::UHorizonRadioButtonUserWidget() {
    this->Visibility = ESlateVisibility::Visible;
    this->bIsFocusable = true;
    this->CheckBox_Main = NULL;
    this->TextBlock_Main = NULL;
    this->Text_Main = FText::FromString(TEXT("Text Block"));
    this->bCheckedByDefault = false;
}

void UHorizonRadioButtonUserWidget::SetChecked() {
}

void UHorizonRadioButtonUserWidget::NativeOnCheckStateChanged(bool bIsChecked) {
}



