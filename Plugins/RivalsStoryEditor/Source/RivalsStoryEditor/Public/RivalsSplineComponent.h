#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SnapNetPropertyFloat.h"
#include "RivalsPropertySplineCurves.h"
#include "RivalsSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RIVALSSTORYEDITOR_API URivalsSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyFloat Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsPropertySplineCurves CompiledCurves;
    
    URivalsSplineComponent(const FObjectInitializer& ObjectInitializer);

};

