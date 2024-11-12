#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SnapNetServerSettings.generated.h"

class USnapNetServerScript;

USTRUCT(BlueprintType)
struct SNAPNET_API FSnapNetServerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AcceptRemoteConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USnapNetServerScript> ServerScriptClass;
    
    FSnapNetServerSettings();
};

