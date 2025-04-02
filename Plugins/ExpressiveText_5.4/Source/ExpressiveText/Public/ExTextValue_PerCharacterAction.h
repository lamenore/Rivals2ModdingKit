#pragma once
#include "CoreMinimal.h"
#include "ExpressiveTextParameterValue.h"
#include "ExTextValue_PerCharacterAction.generated.h"

class UExText_ActionBase;

UCLASS(Blueprintable, CollapseCategories)
class EXPRESSIVETEXT_API UExTextValue_PerCharacterAction : public UExpressiveTextParameterValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExText_ActionBase* Value;
    
    UExTextValue_PerCharacterAction();

};

