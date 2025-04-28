#include "RivalsArticleData.h"
#include "RivalsArticleEntity.h"

URivalsArticleData::URivalsArticleData() {
    this->Attack = ERivalsCharacterAttack::None;
    this->ArticleClass = ARivalsArticleEntity::StaticClass();
    this->bIsProjectile = false;
    this->bIsAttachedToOwner = false;
    this->bInheritOwnerChargeValue = true;
    this->bRotateWithVelocity = false;
    this->bInfluenceCamera = false;
    this->HurtboxesSkeletalMesh = NULL;
    this->HurtboxesPhysicsAsset = NULL;
    this->HasHitReaction = EArticleHitReaction::None;
    this->GotHitReaction = EArticleHitReaction::None;
    this->ParryReaction = EArticleHitReaction::None;
    this->bCanBeHitByOwner = false;
    this->bCanHitOwner = false;
    this->bCanBeDetectedByOwner = false;
    this->bCanDetectOwner = false;
    this->bDestroyProjectilesThatHitMe = true;
    this->EcbType = EArticleEcbType::None;
    this->EcbRadius = 0.00f;
    this->ShouldGetOutOfGroundOnSpawn = true;
    this->GroundCollisionResponse = EArticleCollisionResponse::None;
    this->WallCollisionResponse = EArticleCollisionResponse::None;
    this->CeilingCollisionResponse = EArticleCollisionResponse::None;
    this->OffscreenIndicatorTexture = NULL;
}


