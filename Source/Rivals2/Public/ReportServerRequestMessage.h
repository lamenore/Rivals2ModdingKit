#pragma once
#include "CoreMinimal.h"
#include "SnapNetReliableMessage.h"
#include "ReportServerRequestMessage.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API UReportServerRequestMessage : public USnapNetReliableMessage {
    GENERATED_BODY()
public:
    UReportServerRequestMessage();

};

