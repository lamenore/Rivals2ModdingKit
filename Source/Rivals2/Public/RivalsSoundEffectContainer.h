#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RivalsSoundEffectData.h"
#include "RivalsSoundEffectContainer.generated.h"

class UFMODBank;

UCLASS(Abstract, Blueprintable)
class RIVALS2_API URivalsSoundEffectContainer : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SfxCategory;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFMODBank*> AssociatedBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRivalsSoundEffectData> SoundEffectData;
    
    URivalsSoundEffectContainer();

};

