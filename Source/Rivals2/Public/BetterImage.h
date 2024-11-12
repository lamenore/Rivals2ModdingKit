#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "BetterImage.generated.h"

class UPaperFlipbook;

UCLASS(Blueprintable)
class RIVALS2_API UBetterImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* PaperFlipbook;
    
    UBetterImage();

    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetFlipbook(UPaperFlipbook* InFlipbook);
    
    UFUNCTION(BlueprintCallable)
    void ResetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation();
    
};

