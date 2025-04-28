#include "TutorialHUD.h"

UTutorialHUD::UTutorialHUD() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_CurrentAction = NULL;
    this->BP_ActionDisplayBox = NULL;
    this->BP_ActionDisplayer = NULL;
    this->BP_ActionDisplayer1 = NULL;
    this->BP_ActionDisplayer2 = NULL;
    this->BP_ActionDisplayer3 = NULL;
    this->BP_ActionDisplayer4 = NULL;
    this->BP_ActionDisplayerMiddleText = NULL;
    this->BP_ActionDisplayerMiddleText1 = NULL;
    this->BP_ActionDisplayerMiddleText2 = NULL;
    this->BP_ActionDisplayerMiddleText3 = NULL;
    this->BP_IntroText = NULL;
    this->BP_IntroAnim = NULL;
    this->CurrentFacingDirection = 0.00f;
    this->PreviousFacingDirection = 0.00f;
    this->CurrentAttack = ERivalsCharacterAttack::None;
    this->CurrentAnim = EAnimationToPlay::Press;
    this->CurrentAnim1 = EAnimationToPlay::Press;
    this->CurrentAnim2 = EAnimationToPlay::Press;
    this->CurrentAnim3 = EAnimationToPlay::Press;
    this->CurrentAnim4 = EAnimationToPlay::Press;
}

void UTutorialHUD::UpdateActionDisplayer(UBetterButtonDisplayer* ActionDisplayer) {
}

void UTutorialHUD::ShowOutro() {
}

void UTutorialHUD::ShowIntro() {
}

void UTutorialHUD::SetupMiddleText(UTextBlock* MiddleText, FText Text) {
}

void UTutorialHUD::SetupDisplayer(FName ActionName, EAnimationToPlay Animation, FText MiddleText, FName ActionName1, EAnimationToPlay Animation1, FText MiddleText1, FName ActionName2, EAnimationToPlay Animation2, FText MiddleText2, FName ActionName3, EAnimationToPlay Animation3, FText MiddleText3, FName ActionName4, EAnimationToPlay Animation4) {
}

void UTutorialHUD::SetupActionDisplayer(UBetterButtonDisplayer* ActionDisplayer, FName ActionName, EAnimationToPlay Animation) {
}

void UTutorialHUD::SetInputDisplayAttack(ERivalsCharacterAttack Attack) {
}

void UTutorialHUD::SetInputDisplayAction(ERivalsBufferedInputAction Action) {
}

void UTutorialHUD::ResetInputDisplay() {
}

void UTutorialHUD::OnFacingDirChanged() {
}

bool UTutorialHUD::IsDirectionAnim(EAnimationToPlay Anim) {
    return false;
}

bool UTutorialHUD::IsDirection(FName ActionName) {
    return false;
}

FName UTutorialHUD::GetOppositeDirName(ERivalsCharacterAttack Attack, float Direction) {
    return NAME_None;
}

EAnimationToPlay UTutorialHUD::GetOppositeDirAnim(ERivalsCharacterAttack Attack, EAnimationToPlay Anim, float Direction) {
    return EAnimationToPlay::Press;
}


