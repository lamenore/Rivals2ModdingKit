#include "RivalsDialoguePrompt.h"

URivalsDialoguePrompt::URivalsDialoguePrompt() {
    this->bCanAcceptInput = false;
    this->DialogueGroup = NULL;
    this->BP_DialogueText = NULL;
    this->BP_BodyText = NULL;
    this->BP_NameText = NULL;
    this->BP_CharacterImage = NULL;
    this->CharPrintDuration = 0.01f;
    this->BP_DialogueEntry = NULL;
    this->BP_DialogueExit = NULL;
    this->BP_DialogueAdvance = NULL;
    this->BP_PageDoneButtonDisplayer = NULL;
    this->BP_PageDoneBouncer = NULL;
    this->bEndOfPage = false;
    this->CurrentPageIndex = 0;
}

void URivalsDialoguePrompt::SetupDialogue(URivalsDialogueGroup* Dialogue, bool bShowCar) {
}

void URivalsDialoguePrompt::ResetDialogue() {
}

bool URivalsDialoguePrompt::IsKeyboard() {
    return false;
}

bool URivalsDialoguePrompt::IsEndOfPage() {
    return false;
}

void URivalsDialoguePrompt::InitDialogue() {
}

int32 URivalsDialoguePrompt::GetTotalPages() {
    return 0;
}

FText URivalsDialoguePrompt::GetFullPageText() {
    return FText::GetEmpty();
}

void URivalsDialoguePrompt::AdvancePage() {
}


