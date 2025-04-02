#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExpressiveTextAlignment.h"
#include "ExpressiveTextContext.h"
#include "ExpressiveTextFields.h"
#include "ExpressiveTextWrapSettings.h"
#include "ExpressiveTextAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class EXPRESSIVETEXT_API UExpressiveTextAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressiveTextFields Fields;
    
    UExpressiveTextAsset();

    UFUNCTION(BlueprintCallable)
    void ProcessPositioning(FExpressiveTextAlignment& OutAlignment, FExpressiveTextWrapSettings& OutWidth);
    
    UFUNCTION(BlueprintCallable)
    FExpressiveTextContext CreateContext();
    
    UFUNCTION(BlueprintPure)
    int64 CalcChecksum() const;
    
};

