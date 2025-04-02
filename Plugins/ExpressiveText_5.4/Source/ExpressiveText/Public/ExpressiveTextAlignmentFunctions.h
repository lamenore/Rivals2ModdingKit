#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EExpressiveTextAlignmentOffsetType.h"
#include "ExpressiveTextAlignment.h"
#include "ExpressiveTextAlignmentFunctions.generated.h"

UCLASS(Blueprintable)
class UExpressiveTextAlignmentFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExpressiveTextAlignmentFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment TopRight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment TopLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment TopCenter();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D PositionToAlignmentOffset(FVector2D Position, FVector2D DisplaySize, FVector2D TextSize, const FExpressiveTextAlignment& Alignment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment DefineVerticalOffset(UPARAM(Ref) FExpressiveTextAlignment& Alignment, float Amount, EExpressiveTextAlignmentOffsetType OffsetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment DefineHorizontalOffset(UPARAM(Ref) FExpressiveTextAlignment& Alignment, float Amount, EExpressiveTextAlignmentOffsetType OffsetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment CenterRight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment CenterLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment Center();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment BottomRight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment BottomLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FExpressiveTextAlignment BottomCenter();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D AlignmentToPosition(const FExpressiveTextAlignment& Alignment, const FVector2D& DisplaySize, const FVector2D& TextSize);
    
};

