#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SnapNetPropertyEntityIndex.h"
#include "SnapNetPropertyEntityIndexFunctionLibrary.generated.h"

class USnapNetEntityComponent;
class USnapNetSimulation;

UCLASS(Blueprintable)
class SNAPNET_API USnapNetPropertyEntityIndexFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USnapNetPropertyEntityIndexFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetValueByEntityReference(UPARAM(Ref) FSnapNetPropertyEntityIndex& SnapNetPropertyEntityIndex, USnapNetEntityComponent* entityComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue(UPARAM(Ref) FSnapNetPropertyEntityIndex& SnapNetPropertyEntityIndex, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USnapNetEntityComponent* GetEntityComponent(const FSnapNetPropertyEntityIndex& SnapNetPropertyEntityIndex, USnapNetSimulation* Simulation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Conv_SnapNetPropertyEntityIndexToInt(const FSnapNetPropertyEntityIndex& SnapNetPropertyEntityIndex);
    
};

