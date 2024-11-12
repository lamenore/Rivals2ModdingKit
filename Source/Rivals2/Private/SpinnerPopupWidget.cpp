#include "SpinnerPopupWidget.h"

USpinnerPopupWidget::USpinnerPopupWidget() {
    this->BP_CancelButton = NULL;
    this->BP_SecondaryButton = NULL;
    this->BP_LoadingVisualContainer = NULL;
    this->BP_ErrorVisualContainer = NULL;
    this->BP_LoadingText = NULL;
    this->BP_AlertTextBlock = NULL;
    this->BP_CircularLoadingColorImage = NULL;
    this->BP_Loading = NULL;
}

void USpinnerPopupWidget::UnlockCancelButton() {
}

void USpinnerPopupWidget::ShowSecondaryButton() {
}

void USpinnerPopupWidget::ShowError(FText ErrorText) {
}

void USpinnerPopupWidget::SetSecondaryButtonText(FText Text) {
}

void USpinnerPopupWidget::SetCancelButtonText(FText Text) {
}

void USpinnerPopupWidget::OnStartLoading() {
}

void USpinnerPopupWidget::OnSecondaryButtonPressed() {
}

void USpinnerPopupWidget::LockCancelButton() {
}

void USpinnerPopupWidget::HideSecondaryButton() {
}


