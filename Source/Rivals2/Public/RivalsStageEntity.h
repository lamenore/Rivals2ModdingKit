#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnapNetPropertyInt32.h"
#include "EntityComponentOwner.h"
#include "RivalsStageEntity.generated.h"

class USnapNetEntityComponent;

UCLASS(Blueprintable)
class RIVALS2_API ARivalsStageEntity : public AActor, public IEntityComponentOwner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USnapNetEntityComponent* entityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 StateBasedSoundFlags;
    
public:
    ARivalsStageEntity(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

