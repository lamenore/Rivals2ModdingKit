#include "RivalsCursorManager.h"

URivalsCursorManager::URivalsCursorManager() {
}

void URivalsCursorManager::ToggleRivalsCursorDebug() {
}

void URivalsCursorManager::ToggleRivalsAnalogDebug() {
}

void URivalsCursorManager::SetRivalsCursorToCenterScreen() {
}

void URivalsCursorManager::SetRivalsCursorToCenterOfWidget(UWidget* Widget) {
}

bool URivalsCursorManager::IsRivalsCursorValid() const {
    return false;
}

bool URivalsCursorManager::IsRivalsCursorLocked() const {
    return false;
}

bool URivalsCursorManager::IsRivalsCursorHidden() const {
    return false;
}

bool URivalsCursorManager::IsRivalsCursorDebugActive() const {
    return false;
}

bool URivalsCursorManager::IsRivalsAnalogDebugActive() const {
    return false;
}

FVector2D URivalsCursorManager::GetRivalsCursorPosition() {
    return FVector2D{};
}

void URivalsCursorManager::EnableRivalsCursor() {
}

void URivalsCursorManager::DisableRivalsCursor() {
}

bool URivalsCursorManager::ContainsGamepadRivalsCursorInputProcessor() const {
    return false;
}


