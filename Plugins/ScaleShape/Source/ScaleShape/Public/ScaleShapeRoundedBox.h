#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScaleShapeBase.h"
#include "ScaleShapeRoundedBox.generated.h"

UCLASS(Blueprintable)
class SCALESHAPE_API UScaleShapeRoundedBox : public UScaleShapeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Roundness;
    
    UScaleShapeRoundedBox();

    UFUNCTION(BlueprintCallable)
    void SetRoundness(FVector4 InRoundness);
    
};

