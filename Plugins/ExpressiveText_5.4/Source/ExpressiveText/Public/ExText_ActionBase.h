#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExText_ActionInterface.h"
#include "ExText_ActionBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class EXPRESSIVETEXT_API UExText_ActionBase : public UObject, public IExText_ActionInterface {
    GENERATED_BODY()
public:
    UExText_ActionBase();


    // Fix for true pure virtual functions not being implemented
};

