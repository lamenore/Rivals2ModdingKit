#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RankedStoreCluster.generated.h"

class URankedLargeStoreItem;
class USizeBox;
class UStoreItem;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URankedStoreCluster : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightSideLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* BP_SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URankedLargeStoreItem* BP_LargeStoreItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreItem* BP_StoreItem00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreItem* BP_StoreItem01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreItem* BP_StoreItem10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStoreItem* BP_StoreItem11;
    
    URankedStoreCluster();

};

