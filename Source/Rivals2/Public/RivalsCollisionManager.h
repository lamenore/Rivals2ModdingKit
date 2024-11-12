#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CollisionGroup.h"
#include "RivalsPlatformData.h"
#include "RivalsCollisionManager.generated.h"

UCLASS(Blueprintable)
class RIVALS2_API ARivalsCollisionManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollisionGroup> CollisionGroups;
    
public:
    ARivalsCollisionManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    int32 Orientation(const FVector2D& P, const FVector2D& Q, const FVector2D& R);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> GiftWrappingConvexHull(TArray<FVector2D>& Points);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> GetRelativePoints(TArray<FVector2D> Points, FVector2D Centroid);
    
public:
    UFUNCTION(BlueprintCallable)
    FRivalsPlatformData GetPlatformData(FCollisionGroup CollisionGroup);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> GetOrderedPoints(FCollisionGroup CollisionGroup);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCentroid(FCollisionGroup CollisionGroup);
    
    UFUNCTION(BlueprintCallable)
    bool ClockwiseCompare(const FVector2D& A, const FVector2D& B, const FVector2D& Centroid);
    
};

