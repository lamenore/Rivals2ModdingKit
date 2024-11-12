#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KeyframeManager.generated.h"

class UKeyframe;

UCLASS(Blueprintable)
class RIVALS2_API UKeyframeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKeyframe*> KeyFrames;
    
    UKeyframeManager();

    UFUNCTION(BlueprintCallable)
    bool SaveKeyframesToFile();
    
    UFUNCTION(BlueprintCallable)
    bool LoadKeyframesFromFile();
    
};

