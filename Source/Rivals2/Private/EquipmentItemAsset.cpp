#include "EquipmentItemAsset.h"

UEquipmentItemAsset::UEquipmentItemAsset() {
    this->ExcludeFromBuild = true;
    this->CharacterParentClass = NULL;
    this->Rarity = ERivalsSkinRarity::Common;
    this->ExcludeFromUnlockEverythingInBuild = false;
}


