#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayerLoadedAssetData.h"
#include "RivalsLoadingSubsystem.generated.h"

class UObject;
class URivalsLoadingSubsystem;
class URivalsVictorySequenceData;

UCLASS(Blueprintable)
class RIVALS2_API URivalsLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedCharacterSelectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedStageSelectAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedGameplayAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerLoadedAssetData> LoadedCharacterAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedPersistentAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedStageAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URivalsVictorySequenceData* LoadedVictoryDataForSounds;
    
    URivalsLoadingSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingPersistentAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingGameplayAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URivalsLoadingSubsystem* Get(const UObject* WorldContextObject);
    
};

