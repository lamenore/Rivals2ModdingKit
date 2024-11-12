#pragma once
#include "CoreMinimal.h"
#include "SnapNetPropertyInt32.h"
#include "SnapNetPropertyVector2D.h"
#include "RivalsArticleEntity.h"
#include "SmokeCloud.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ASmokeCloud : public ARivalsArticleEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyVector2D DestinationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnapNetPropertyInt32 FramesElapsed;
    
    ASmokeCloud(const FObjectInitializer& ObjectInitializer);

};

