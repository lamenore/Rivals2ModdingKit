#include "TutorialPromptDisplayer.h"

ATutorialPromptDisplayer::ATutorialPromptDisplayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Style = EDisplayStyle::Normal;
    this->Colored = false;
    this->DisplayFor = EDisplayType::Both;
    this->ShouldListenForInputChange = true;
    this->bPlayAnimation = false;
    this->bLoopAnim = false;
    this->AnimationToPlay = EAnimationToPlay::Press;
}

bool ATutorialPromptDisplayer::IsKeyboard() {
    return false;
}



