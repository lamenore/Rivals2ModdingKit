#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "RivalsCharacterEntity.h"
#include "Zetterburn.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API AZetterburn : public ARivalsCharacterEntity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 GameplayFrameForLast3NspecialHits[3];
    
    AZetterburn(const FObjectInitializer& ObjectInitializer);

};

