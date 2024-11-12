#pragma once
#include "CoreMinimal.h"
#include "CharacterChoices.generated.h"

USTRUCT(BlueprintType)
struct FCharacterChoices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PossibleCharacters;
    
    RIVALS2_API FCharacterChoices();
};

