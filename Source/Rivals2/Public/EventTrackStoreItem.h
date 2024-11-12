#pragma once
#include "CoreMinimal.h"
#include "StoreItem.h"
#include "EventTrackStoreItem.generated.h"

class UBorder;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UEventTrackStoreItem : public UStoreItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_LevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_LevelBorder;
    
public:
    UEventTrackStoreItem();

};

