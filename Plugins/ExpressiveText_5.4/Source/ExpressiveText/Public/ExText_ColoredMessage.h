#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExText_ColoredMessage.generated.h"

USTRUCT(BlueprintType)
struct FExText_ColoredMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    EXPRESSIVETEXT_API FExText_ColoredMessage();
};

