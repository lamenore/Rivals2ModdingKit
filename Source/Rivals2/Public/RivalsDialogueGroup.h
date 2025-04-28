#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialoguePage.h"
#include "RivalsDialogueGroup.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsDialogueGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialoguePage> Pages;
    
    URivalsDialogueGroup();

};

