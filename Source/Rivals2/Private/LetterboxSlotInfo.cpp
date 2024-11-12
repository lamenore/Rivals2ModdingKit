#include "LetterboxSlotInfo.h"

FLetterboxSlotInfo::FLetterboxSlotInfo() {
    this->PlayerSlot = 0;
    this->bIsCpu = false;
    this->Character = NULL;
    this->Skin = NULL;
    this->ColorSlot = ERivalsColorSlot::None;
    this->StocksRemaining = 0;
    this->Percent = 0;
}

