#pragma once
#include "CoreMinimal.h"
#include "PrimaryAssetObject.h"
#include "Templates/SubclassOf.h"
#include "UIMaps.generated.h"

class UBasePopupWidget;
class UBaseScreenWidget;

UCLASS(Blueprintable)
class RIVALS2_API UUIMaps : public UPrimaryAssetObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UBasePopupWidget>, TSubclassOf<UBasePopupWidget>> DialogMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UBaseScreenWidget>, TSubclassOf<UBaseScreenWidget>> ScreenMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBaseScreenWidget*> Test;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UBaseScreenWidget>> Test1;
    
    UUIMaps();

};

