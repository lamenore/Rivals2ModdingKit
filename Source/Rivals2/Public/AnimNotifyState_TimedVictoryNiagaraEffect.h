#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "AnimNotifyState_TimedVictoryNiagaraEffect.generated.h"

class ARivalsPlayerEntity;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class RIVALS2_API UAnimNotifyState_TimedVictoryNiagaraEffect : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerEntity* PlayerEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IncludedSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedSkins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PreviewSkinName;
    
    UAnimNotifyState_TimedVictoryNiagaraEffect();

};

