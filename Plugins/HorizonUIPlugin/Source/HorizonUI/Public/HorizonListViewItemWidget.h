#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "HorizonListViewItemWidget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class HORIZONUI_API UHorizonListViewItemWidget : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_ClickArea;
    
    UHorizonListViewItemWidget();

    UFUNCTION(BlueprintCallable)
    void SynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnListItemObjectUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnListItemObjectReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnListItemObjectPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnListItemObjectHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnListItemObjectClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnListItemObjectButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnListItemObjectButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnListItemObjectButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnListItemObjectButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnListItemObjectButtonClicked();
    

    // Fix for true pure virtual functions not being implemented
};

