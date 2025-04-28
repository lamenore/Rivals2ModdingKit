#include "RivalsGameBlueprintFunctionLibrary.h"

URivalsGameBlueprintFunctionLibrary::URivalsGameBlueprintFunctionLibrary() {
}

void URivalsGameBlueprintFunctionLibrary::SetUserFocusToGameViewport(int32 UserIndex) {
}

void URivalsGameBlueprintFunctionLibrary::LogAllObjectReferencers(UObject* InObject) {
}

bool URivalsGameBlueprintFunctionLibrary::IsRankedSession(const UObject* WorldContextObject) {
    return false;
}

bool URivalsGameBlueprintFunctionLibrary::IsOnlineSession(const UObject* WorldContextObject) {
    return false;
}

bool URivalsGameBlueprintFunctionLibrary::IsLobbySession(const UObject* WorldContextObject) {
    return false;
}

bool URivalsGameBlueprintFunctionLibrary::IsBotMatchMode(const UObject* WorldContextObject) {
    return false;
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetTeamColorLight(const ERivalsColorSlot InTeam, const float ShadeValue, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetTeamColorDarker(const ERivalsColorSlot InTeam, const float ShadeValue, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetTeamColorDark(const ERivalsColorSlot InTeam, const float ShadeValue, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetTeamColor(const ERivalsColorSlot InTeam, const float AlphaOverride, const bool bSquareResult, const bool bIsArcadeMode) {
    return FLinearColor{};
}

FRivalsServerMatchInfo URivalsGameBlueprintFunctionLibrary::GetServerMatchInfo(const UObject* WorldContextObject) {
    return FRivalsServerMatchInfo{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetRankedColorLight(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetRankedColorDark(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetRankedColor(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride) {
    return FLinearColor{};
}

int32 URivalsGameBlueprintFunctionLibrary::GetPlayerSlotForPlayerController(const UObject* WorldContextObject, APlayerController* InController) {
    return 0;
}

ARivalsPlayerController* URivalsGameBlueprintFunctionLibrary::GetPlayerControllerForSlot(const UObject* WorldContextObject, const int32& InPlayerSlot) {
    return NULL;
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetPlayerColorLight(const UObject* WorldContextObject, const int32 InPlayerIndex, const float ShadeValue, const float AlphaOverride, const bool bSquareResult) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetPlayerColorDarker(const UObject* WorldContextObject, const int32 InPlayerIndex, const float ShadeValue, const float AlphaOverride, const bool bSquareResult) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetPlayerColorDark(const UObject* WorldContextObject, const int32 InPlayerIndex, const float ShadeValue, const float AlphaOverride, const bool bSquareResult) {
    return FLinearColor{};
}

FLinearColor URivalsGameBlueprintFunctionLibrary::GetPlayerColor(const UObject* WorldContextObject, const int32 InPlayerIndex, const float AlphaOverride, const bool bSquareResult) {
    return FLinearColor{};
}

ARivalsGameStateEntity* URivalsGameBlueprintFunctionLibrary::GetGameStateEntity(const UObject* WorldContextObject) {
    return NULL;
}

UObject* URivalsGameBlueprintFunctionLibrary::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

void URivalsGameBlueprintFunctionLibrary::FlushControllerInput(APlayerController* InController) {
}

FString URivalsGameBlueprintFunctionLibrary::DateTimeToFormattedString(const FDateTime& InDateTime, const FString& Format) {
    return TEXT("");
}

bool URivalsGameBlueprintFunctionLibrary::CanRematch(const UObject* WorldContextObject) {
    return false;
}

bool URivalsGameBlueprintFunctionLibrary::CanBackToMatchmaking(const UObject* WorldContextObject) {
    return false;
}


