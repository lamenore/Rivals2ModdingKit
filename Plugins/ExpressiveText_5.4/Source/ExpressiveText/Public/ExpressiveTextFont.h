#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ExpressiveTextFont.generated.h"

class UFont;

UCLASS(Blueprintable)
class EXPRESSIVETEXT_API UExpressiveTextFont : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotUseSdfFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* SdfFont;
    
    UExpressiveTextFont();

};

