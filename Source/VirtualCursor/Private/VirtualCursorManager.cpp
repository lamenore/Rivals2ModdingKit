#include "VirtualCursorManager.h"

UVirtualCursorManager::UVirtualCursorManager() {
}

void UVirtualCursorManager::ToggleCursorDebug() {
}

void UVirtualCursorManager::ToggleAnalogDebug() {
}

void UVirtualCursorManager::SetCursorToCenterScreen() {
}

void UVirtualCursorManager::SetCursorToCenterOfWidget(UWidget* Widget) {
}

bool UVirtualCursorManager::IsCursorValid() const {
    return false;
}

bool UVirtualCursorManager::IsCursorOverInteractableWidget() const {
    return false;
}

bool UVirtualCursorManager::IsCursorDebugActive() const {
    return false;
}

bool UVirtualCursorManager::IsAnalogDebugActive() const {
    return false;
}

FVector2D UVirtualCursorManager::GetCursorPosition() {
    return FVector2D{};
}

void UVirtualCursorManager::EnableAnalogCursor(bool bUseLeftStick) {
}

void UVirtualCursorManager::DisableAnalogCursor() {
}

bool UVirtualCursorManager::ContainsGamepadCursorInputProcessor() const {
    return false;
}


