#pragma once
#include "CoreMinimal.h"
#include "RivalsEdgegapEnvironmentDetails.generated.h"

USTRUCT(BlueprintType)
struct FRivalsEdgegapEnvironmentDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Queue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MasterIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TitleIds;
    
    RIVALS2_API FRivalsEdgegapEnvironmentDetails();
};

