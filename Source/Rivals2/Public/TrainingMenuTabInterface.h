#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TrainingMenuTabInterface.generated.h"

class ARivalsPlayerController;
class UTrainingMenu;
class UTrainingMenuRow;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTrainingMenuTabInterface : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_RowContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenu* TrainingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrainingMenuRow* FocusedRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARivalsPlayerController* CurrentController;
    
public:
    UTrainingMenuTabInterface();

};

