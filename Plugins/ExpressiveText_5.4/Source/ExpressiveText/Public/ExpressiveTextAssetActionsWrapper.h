#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExpressiveTextAssetActionsWrapper.generated.h"

class UExText_ActionBase;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class EXPRESSIVETEXT_API UExpressiveTextAssetActionsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UExText_ActionBase*> Actions;
    
    UExpressiveTextAssetActionsWrapper();

};

