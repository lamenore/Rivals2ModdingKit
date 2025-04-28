#pragma once
#include "CoreMinimal.h"
#include "RivalsArticleEntity.h"
#include "TutorialSpike.generated.h"

class ARivalsCharacterEntity;

UCLASS(Blueprintable)
class RIVALS2_API ATutorialSpike : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunningSpike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpikeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetractTime;
    
    ATutorialSpike(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RetractSpike();
    
    UFUNCTION(BlueprintCallable)
    bool IsRivalRunning(ARivalsCharacterEntity* CharacterEntity);
    
    UFUNCTION(BlueprintCallable)
    bool IsExtended();
    
    UFUNCTION(BlueprintCallable)
    void ExtendSpike(bool IsRunning);
    
};

