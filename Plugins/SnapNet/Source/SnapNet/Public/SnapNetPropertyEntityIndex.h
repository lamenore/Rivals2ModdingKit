#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SnapNetProperty.h"
#include "SnapNetPropertyEntityIndex.generated.h"

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetPropertyEntityIndex : public FSnapNetProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EntityIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftComponentReference EntityReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EntityIndexDirty;
    
public:
    FSnapNetPropertyEntityIndex();
};

