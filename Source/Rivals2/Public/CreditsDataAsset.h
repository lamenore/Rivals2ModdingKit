#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreditsLine.h"
#include "CreditsDataAsset.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UCreditsDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreditsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KsCreditsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsLine> CreditsLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsLine> KsCreditsLines;
    
    UCreditsDataAsset();

};

