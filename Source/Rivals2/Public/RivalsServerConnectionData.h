#pragma once
#include "CoreMinimal.h"
#include "RivalsServerConnectionData.generated.h"

USTRUCT(BlueprintType)
struct FRivalsServerConnectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLobbyMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRankedMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionString;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InitialConnectionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastMatchStartTime;
    
    RIVALS2_API FRivalsServerConnectionData();
};

