#include "RivalsCharacterSkinDefinition.h"

URivalsCharacterSkinDefinition::URivalsCharacterSkinDefinition() {
    this->Coolness = 0;
    this->VictorySequenceData = NULL;
    this->ElementalLerpCount = 5;
    this->SoundEventIndex = 0;
}

TSoftObjectPtr<UMaterialInterface> URivalsCharacterSkinDefinition::GetStockIconMaterial() const {
    return NULL;
}

TArray<URivalsCharacterSkinDefinition*> URivalsCharacterSkinDefinition::GetSkinDefinitions(TSoftClassPtr<URivalsCharacterDefinition> InCharacterDefinition) {
    return TArray<URivalsCharacterSkinDefinition*>();
}

URivalsColorSlotData* URivalsCharacterSkinDefinition::GetColorSlotData(const ERivalsColorSlot ColorSlot) const {
    return NULL;
}

FText URivalsCharacterSkinDefinition::GetCharacterName() const {
    return FText::GetEmpty();
}


