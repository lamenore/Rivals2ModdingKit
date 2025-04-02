#pragma once
#include "CoreMinimal.h"
#include "NexusBountyprerequisites_Struct_Element.generated.h"

USTRUCT(BlueprintType)
struct FNexusBountyprerequisites_Struct_Element {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    NEXUSUNREALSDK_API FNexusBountyprerequisites_Struct_Element();
};

