#include "RivalsCollisionManager.h"

ARivalsCollisionManager::ARivalsCollisionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 ARivalsCollisionManager::Orientation(const FVector2D& P, const FVector2D& Q, const FVector2D& R) {
    return 0;
}

TArray<FVector2D> ARivalsCollisionManager::GiftWrappingConvexHull(TArray<FVector2D>& Points) {
    return TArray<FVector2D>();
}

TArray<FVector2D> ARivalsCollisionManager::GetRelativePoints(TArray<FVector2D> Points, FVector2D Centroid) {
    return TArray<FVector2D>();
}

FRivalsPlatformData ARivalsCollisionManager::GetPlatformData(FCollisionGroup CollisionGroup) {
    return FRivalsPlatformData{};
}

TArray<FVector2D> ARivalsCollisionManager::GetOrderedPoints(FCollisionGroup CollisionGroup) {
    return TArray<FVector2D>();
}

FVector2D ARivalsCollisionManager::GetCentroid(FCollisionGroup CollisionGroup) {
    return FVector2D{};
}

bool ARivalsCollisionManager::ClockwiseCompare(const FVector2D& A, const FVector2D& B, const FVector2D& Centroid) {
    return false;
}


