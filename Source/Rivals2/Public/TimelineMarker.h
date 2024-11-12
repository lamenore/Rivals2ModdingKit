#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TimelineMarker.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UTimelineMarker : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_TimelineMarker;
    
    UTimelineMarker();

};

