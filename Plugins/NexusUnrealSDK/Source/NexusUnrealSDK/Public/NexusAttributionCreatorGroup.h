#pragma once
#include "CoreMinimal.h"
#include "NexusAttributionCreatorGroup.generated.h"

USTRUCT(BlueprintType)
struct FNexusAttributionCreatorGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDefault;
    
    NEXUSUNREALSDK_API FNexusAttributionCreatorGroup();
};

