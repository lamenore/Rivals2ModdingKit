#include "AnimNotify_PlayVictoryNiagaraEffect.h"

UAnimNotify_PlayVictoryNiagaraEffect::UAnimNotify_PlayVictoryNiagaraEffect() {
    this->PlayerEntity = NULL;
    this->IncludedSkins.AddDefaulted(1);
    this->PreviewSkinName = TEXT("Default");
}


