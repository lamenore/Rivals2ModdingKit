#include "VirtualCursor.h"

UVirtualCursor::UVirtualCursor() {
}

void UVirtualCursor::SetCursorToCenterScreen(APlayerController* PlayerController) {
}

void UVirtualCursor::SetCursorToCenterOfWidget(APlayerController* PlayerController, UWidget* Widget) {
}

bool UVirtualCursor::IsOverInteractableWidget(APlayerController* PlayerController) {
    return false;
}

FVector2D UVirtualCursor::GetCursorPosition(APlayerController* PlayerController) {
    return FVector2D{};
}

void UVirtualCursor::Enable(APlayerController* PlayerController, bool bUseLeftStick) {
}

void UVirtualCursor::Disable(APlayerController* PlayerController) {
}


