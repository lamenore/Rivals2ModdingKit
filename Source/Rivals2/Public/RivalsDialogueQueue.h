#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "RivalsDialogueQueue.generated.h"

class URivalsDialogueGroup;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsDialogueQueue : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URivalsDialogueGroup>> DialogueGroups;
    
    ARivalsDialogueQueue(const FObjectInitializer& ObjectInitializer);

};

