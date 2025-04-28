#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERivalsColorSlot.h"
#include "RivalsServerMatchInfo.h"
#include "RivalsGameBlueprintFunctionLibrary.generated.h"

class APlayerController;
class ARivalsGameStateEntity;
class ARivalsPlayerController;
class UObject;

UCLASS(Blueprintable)
class RIVALS2_API URivalsGameBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URivalsGameBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUserFocusToGameViewport(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static void LogAllObjectReferencers(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRankedSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOnlineSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLobbySession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBotMatchMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetTeamColorLight(const ERivalsColorSlot InTeam, const float ShadeValue, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetTeamColorDarker(const ERivalsColorSlot InTeam, const float ShadeValue, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetTeamColorDark(const ERivalsColorSlot InTeam, const float ShadeValue, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetTeamColor(const ERivalsColorSlot InTeam, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FRivalsServerMatchInfo GetServerMatchInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetRankedColorLight(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetRankedColorDark(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetRankedColor(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPlayerSlotForPlayerController(const UObject* WorldContextObject, APlayerController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARivalsPlayerController* GetPlayerControllerForSlot(const UObject* WorldContextObject, const int32& InPlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetPlayerColorLight(const UObject* WorldContextObject, const int32 InPlayerIndex, const float ShadeValue, const float AlphaOverride, const bool bSquareResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetPlayerColorDarker(const UObject* WorldContextObject, const int32 InPlayerIndex, const float ShadeValue, const float AlphaOverride, const bool bSquareResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetPlayerColorDark(const UObject* WorldContextObject, const int32 InPlayerIndex, const float ShadeValue, const float AlphaOverride, const bool bSquareResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetPlayerColor(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride, const bool bSquareResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARivalsGameStateEntity* GetGameStateEntity(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintCallable)
    static void FlushControllerInput(APlayerController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString DateTimeToFormattedString(const FDateTime& InDateTime, const FString& Format);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanRematch(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanBackToMatchmaking(const UObject* WorldContextObject);
    
};

