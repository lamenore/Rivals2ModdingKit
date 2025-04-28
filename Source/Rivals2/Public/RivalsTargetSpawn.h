#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RivalsTargetData.h"
#include "RivalsTargetWindowData.h"
#include "RivalsTargetSpawn.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalsTargetSpawn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRivalsTargetData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsTargetWindowData> Windows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMovingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnEnd;
    
    ARivalsTargetSpawn(const FObjectInitializer& ObjectInitializer);

};

