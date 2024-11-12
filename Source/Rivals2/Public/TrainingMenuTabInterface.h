#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TrainingMenuTabInterface.generated.h"

class ARivalsPlayerController;
class UTrainingMenuPopup;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuPopup* TrainingMenuParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* CurrentController;
    
public:
    UTrainingMenuTabInterface();

};

