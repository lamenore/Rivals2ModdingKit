#include "CursorInterfaceWidget.h"

UCursorInterfaceWidget::UCursorInterfaceWidget() {
}

bool UCursorInterfaceWidget::RetrievePuck(const int32& RetrieverPlayerSlot, const int32& PuckPlayerSlot) {
    return false;
}

void UCursorInterfaceWidget::PlacePuckAtWidgetGeo(const int32& PlacerPlayerSlot, UPanelWidget* InWidgetGeometry, UWidget* InCharacterButton) {
}


bool UCursorInterfaceWidget::IsPuckPlaced(const int32& PlayerSlot) {
    return false;
}

bool UCursorInterfaceWidget::IsPuckForCPU(const int32& PuckPlayerSlot) {
    return false;
}

bool UCursorInterfaceWidget::IsPlayerHoldingPuck(const int32& CursorPlayerSlot, int32& HeldPuckPlayerSlot) {
    return false;
}

int32 UCursorInterfaceWidget::GetPuckPlayerSlotFromCursorPlayerSlot(const int32& CursorPlayerSlot, const bool ReturnCursorSlotIfNoPuck) {
    return 0;
}

void UCursorInterfaceWidget::ForceUpdateAllCursors() {
}



