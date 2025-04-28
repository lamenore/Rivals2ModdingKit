#include "TextInputPopup.h"

UTextInputPopup::UTextInputPopup() {
    this->BP_TitleRichTextBox = NULL;
    this->BP_BodyRichTextBox = NULL;
    this->BP_BodyTextBox = NULL;
    this->BP_InputField = NULL;
    this->BP_CloseButton = NULL;
    this->BP_ConfirmButton = NULL;
}

void UTextInputPopup::OnConfirmPressed(const int32 UserIndex) {
}

void UTextInputPopup::OnClosePressed(const int32 UserIndex) {
}


