#pragma once
#include "CoreMinimal.h"
#include "EntityReference.h"
#include "SoftObjectReference.h"
#include "StoryEntityReferences.generated.h"

USTRUCT(BlueprintType)
struct RIVALSSTORYEDITOR_API FStoryEntityReferences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectReference> SoftObjectRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEntityReference> EntityRef;
    
    FStoryEntityReferences();
};

