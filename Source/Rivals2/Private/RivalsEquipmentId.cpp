#include "RivalsEquipmentId.h"

FRivalsEquipmentId::FRivalsEquipmentId() {
    this->ItemType = ERivalsItemType::Skin;
    this->Rarity = ERivalsSkinRarity::Default;
    this->IsBaseGameItem = false;
    this->HideFromUnlockEverything = false;
    this->ColorSlot = 0;
    this->Coolness = 0;
}

