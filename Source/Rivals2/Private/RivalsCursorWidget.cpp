#include "RivalsCursorWidget.h"

URivalsCursorWidget::URivalsCursorWidget() {
    this->ParentCursorInterface = NULL;
    this->OwnerPlayerSlot = 0;
    this->PuckPlayerSlot = 0;
    this->bIsCursorEnabled = false;
}

bool URivalsCursorWidget::IsCursorVisible() const {
    return false;
}







