#pragma once
#include "CoreMinimal.h"
#include "EMenuSoundType.generated.h"

UENUM(BlueprintType)
enum class EMenuSoundType : uint8 {
    Forward,
    Back,
    Confirm,
    Option,
    IncreaseOption,
    DecreaseOption,
    ChangeSkin,
    Hover,
    MoveCursor,
    CSSCharacterConfirm,
    CSSCharacterBack,
    PlayerReady,
    TimerCountdown,
    TimerCountdownFinal,
    MatchEnd,
    PauseEnter,
    Logo,
    SplashScreenStartPressed,
    SplashScreenCloudsRise,
    SplashScreenCharactersAppear,
    SplashScreenLogoHit,
    SplashScreenAmbience,
    PauseExit,
    MainMenuHover,
    MainMenuConfirm,
    MainMenuBack,
    SettingsHover,
    SettingsIncreaseOption,
    SettingsDecreaseOption,
    SettingsChangeTab,
    SettingsConfirm,
    SettingsBack,
    TrainingChangeTab,
    CSSCharacterHover,
    CSSCharacterOptionsHover,
    CSSCharacterOptionsConfirm,
    CSSCharacterOptionsIncreaseLevel,
    CSSCharacterOptionsDecreaseLevel,
    CSSCharacterSettingsBack,
    CSSReadyToFight,
    StageSelectHover,
    StageSelectConfirm,
    StageSelectStrike,
    StageSelectUnstrike,
    VersusEnter,
    VersusWhooshCloses,
    LevelUp,
    MainMenuChangeCSS,
    ShopHover,
    ShopConfirm,
    ShopPurchase,
    CSSCharacterSlotAppear,
    VersusWhooshOpens,
    ShopChangeTab,
    ShopBack,
    GenericPopupHover,
    GenericPopupConfirm,
    GenericPopupBack,
    ChangePalette,
    ArcadeOptionsIncrease,
    ArcadeOptionsDecrease,
    ArcadeResultsEnter,
    ArcadeResultsContinue,
    ArcadeVictoryEnter,
    ArcadeVictoryResultsEnter,
    ArcadeVictoryFirstTimeBonus,
    ArcadeVictoryContinue,
    GetCoin,
    GetCoinStart,
    ArcadeGameOverEnter,
    ArcadeGameOverHover,
    ArcadeGameOverContinue,
    ArcadeGameOverGiveUp,
    Count,
    None,
};
