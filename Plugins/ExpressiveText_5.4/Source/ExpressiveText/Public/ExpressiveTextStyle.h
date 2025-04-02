#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextStyleBase.h"
#include "ExpressiveTextStyle.generated.h"

UCLASS(Blueprintable)
class EXPRESSIVETEXT_API UExpressiveTextStyle : public UExpressiveTextStyleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
public:
    UExpressiveTextStyle();

};

