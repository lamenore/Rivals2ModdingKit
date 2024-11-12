#pragma once
#include "CoreMinimal.h"
#include "RivalsWidget.h"
#include "RivalsPuckWidget.generated.h"

class UCursorInterfaceWidget;
class UImage;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API URivalsPuckWidget : public URivalsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCursorInterfaceWidget* ParentCursorInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PuckOwnerPlayerSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PuckImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PuckText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* CharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCPUPuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    URivalsPuckWidget();

    UFUNCTION(BlueprintCallable)
    void OnPuckClicked(const int32& ClickingUserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PuckRetrieved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PuckPlaced(const int32& PlayerSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdate();
    
};

