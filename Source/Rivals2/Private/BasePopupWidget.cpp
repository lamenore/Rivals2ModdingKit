#include "BasePopupWidget.h"

UBasePopupWidget::UBasePopupWidget() {
    this->BackSoundEvent = EMenuSoundType::GenericPopupBack;
    this->SelectOnClose = NULL;
}

void UBasePopupWidget::ClosePopup() {
}


