#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "Templates/SubclassOf.h"
#include "SnapNetPlayInfo.generated.h"

class USnapNetServerScript;
class UWorld;

UCLASS(Blueprintable)
class SNAPNET_API ASnapNetPlayInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> NetworkLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USnapNetServerScript> ServerScriptClass;
    
    ASnapNetPlayInfo(const FObjectInitializer& ObjectInitializer);

};

