#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Templates/SubclassOf.h"
#include "SnapNetSamplePlayerController.generated.h"

class UInGameMenuWidget;
class UScoreboardWidget;

UCLASS(Blueprintable)
class SNAPNETSAMPLE_API ASnapNetSamplePlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInGameMenuWidget> InGameMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScoreboardWidget> ScoreboardWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScoreboardWidget* ScoreboardWidget;
    
public:
    ASnapNetSamplePlayerController(const FObjectInitializer& ObjectInitializer);

};

