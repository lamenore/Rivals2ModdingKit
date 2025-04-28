#pragma once
#include "CoreMinimal.h"
#include "RivalsCharacterEntity.h"
#include "SnapNetPropertyBoolean.h"
#include "SnapNetPropertyEntityIndex.h"
#include "Olympia.generated.h"

UCLASS(Blueprintable)
class OLYMPIA_API AOlympia : public ARivalsCharacterEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean bCanDspecialCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyBoolean HasFspecialResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyEntityIndex HeldGemEntityIndex;
    
    AOlympia(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideGemField() const;
    
};

