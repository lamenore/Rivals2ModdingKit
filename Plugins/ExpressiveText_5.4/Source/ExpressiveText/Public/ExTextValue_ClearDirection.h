#pragma once
#include "CoreMinimal.h"
#include "EExText_ClearDirection.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_ClearDirection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_ClearDirection : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExText_ClearDirection Value;
    
    UExTextValue_ClearDirection();

};

