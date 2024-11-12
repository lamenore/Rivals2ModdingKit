#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoftObjectReference.generated.h"

USTRUCT(BlueprintType)
struct FSoftObjectReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ObjectPath;
    
    RIVALSSTORYEDITOR_API FSoftObjectReference();
};

