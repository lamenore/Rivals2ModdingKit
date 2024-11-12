#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RivalsChatMessage.h"
#include "RivalsChatSubsystem.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API URivalsChatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRivalsChatMessage> ChatHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastProcessedNotificationId;
    
public:
    URivalsChatSubsystem();

};

