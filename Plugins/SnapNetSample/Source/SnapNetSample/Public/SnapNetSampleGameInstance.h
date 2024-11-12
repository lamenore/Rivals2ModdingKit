#pragma once
#include "CoreMinimal.h"
#include "SnapNetGameInstance.h"
#include "SnapNetSampleGameInstance.generated.h"

class UWorld;

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Engine)
class SNAPNETSAMPLE_API USnapNetSampleGameInstance : public USnapNetGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStartListenServerOnMapLoadComplete;
    
public:
    USnapNetSampleGameInstance();

    UFUNCTION(BlueprintCallable)
    void LeaveMatch();
    
    UFUNCTION(BlueprintCallable)
    void LaunchListenServer(TSoftObjectPtr<UWorld> Map);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSteam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSessionBrowser() const;
    
};

