#pragma once
#include "CoreMinimal.h"
#include "HorizonDialogueMsgDecorator.h"
#include "HorizonDialogueMsgSpaceDecorator.generated.h"

UCLASS(Blueprintable)
class HORIZONUI_API UHorizonDialogueMsgSpaceDecorator : public UHorizonDialogueMsgDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FirstLineSpaceL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultWithSpaceL_AlphabeticOnly;
    
    UHorizonDialogueMsgSpaceDecorator();

};

