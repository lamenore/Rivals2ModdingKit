#pragma once
#include "CoreMinimal.h"
#include "StoreTabInterface.h"
#include "Templates/SubclassOf.h"
#include "MedalStoreTab.generated.h"

class UBetterButtonDisplayer;
class UBorder;
class URankedStoreCluster;
class UTopBarCurrencyDisplayer;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UMedalStoreTab : public UStoreTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URankedStoreCluster> RankedStoreClusterClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* BP_ItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_StoreRefreshBorder_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTopBarCurrencyDisplayer* BP_MedalDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_StoreRefreshBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_FwdPageButtonDisplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterButtonDisplayer* BP_FwdPageButtonDisplayer_2;
    
public:
    UMedalStoreTab();

};

