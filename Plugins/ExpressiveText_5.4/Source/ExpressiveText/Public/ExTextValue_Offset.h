#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_Offset.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_Offset : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    UExTextValue_Offset();

};

