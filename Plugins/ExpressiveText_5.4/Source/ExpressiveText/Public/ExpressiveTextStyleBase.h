#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "ExpressiveTextStyleBase.generated.h"

class UExpressiveTextParameterValue;
class UExpressiveTextStyleBase;

UCLASS(Abstract, Blueprintable)
class EXPRESSIVETEXT_API UExpressiveTextStyleBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPostEditChangeCalled);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UExpressiveTextParameterValue>, UExpressiveTextParameterValue*> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UExpressiveTextStyleBase*> InheritedStyles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostEditChangeCalled OnPostEditChangeCalled;
    
    UExpressiveTextStyleBase();

};

