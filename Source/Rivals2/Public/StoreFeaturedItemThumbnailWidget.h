#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StoreFeaturedItemThumbnailWidget.generated.h"

class UBetterImage;
class UBorder;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API UStoreFeaturedItemThumbnailWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_RarityImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* BP_RarityBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ItemTypeBGImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BP_ItemTypeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBetterImage* BP_ItemImage;
    
    UStoreFeaturedItemThumbnailWidget();

};

