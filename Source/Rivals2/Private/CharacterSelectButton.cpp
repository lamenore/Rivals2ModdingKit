#include "CharacterSelectButton.h"

UCharacterSelectButton::UCharacterSelectButton() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_ButtonInteract = NULL;
    this->BP_PrimaryGradient = NULL;
    this->BP_SecondaryGradient = NULL;
    this->BP_ElementPrimaryGradient = NULL;
    this->BP_ElementSecondaryGradient = NULL;
    this->BP_SelectedScrollBG = NULL;
    this->BP_CharacterImageShadow = NULL;
    this->BP_CharacterImage = NULL;
    this->BP_NamePlateBG = NULL;
    this->BP_NamePlateBG1 = NULL;
    this->BP_NamePlateBGGlow = NULL;
    this->BP_NamePlateBGGlow1 = NULL;
    this->BP_CharacterXPBarContainer = NULL;
    this->BP_CharacterXPBarBorder = NULL;
    this->BP_CharacterXPBar = NULL;
    this->BP_ContentRetainerBox = NULL;
    this->BP_NamePlateSpacingBorder = NULL;
    this->BP_NameplatePanel = NULL;
    this->BP_CharacterNameText = NULL;
    this->BP_LevelBox = NULL;
    this->BP_CharacterLevelText = NULL;
    this->BP_MedalsBox = NULL;
    this->BP_EasyMedal = NULL;
    this->BP_MediumMedal = NULL;
    this->BP_HardMedal = NULL;
    this->BP_EasyMedalBox = NULL;
    this->BP_MediumMedalBox = NULL;
    this->BP_HardMedalBox = NULL;
    this->BP_ScoreBox = NULL;
    this->BP_ScoreText = NULL;
    this->BP_PuckPanel = NULL;
    this->BP_Puck1ScaleBox = NULL;
    this->BP_Player1Puck = NULL;
    this->BP_Puck2ScaleBox = NULL;
    this->BP_Player2Puck = NULL;
    this->BP_Puck3ScaleBox = NULL;
    this->BP_Player3Puck = NULL;
    this->BP_Puck4ScaleBox = NULL;
    this->BP_Player4Puck = NULL;
    this->BP_OnHoverAnim = NULL;
    this->BP_OnUnHoverAnim = NULL;
    this->BP_SelectedAnim = NULL;
    this->BP_UnselectedAnim = NULL;
    this->CharacterDefinition = NULL;
    this->ParentScreen = NULL;
}

void UCharacterSelectButton::OnButtonUnhovered(const int32 UserIndex) {
}

void UCharacterSelectButton::OnButtonReleased(const int32 UserIndex) {
}

void UCharacterSelectButton::OnButtonPressed(const int32 UserIndex) {
}

void UCharacterSelectButton::OnButtonHovered(const int32 UserIndex) {
}


