#include "BaseScreenCursor.h"

UBaseScreenCursor::UBaseScreenCursor() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_InnerBorderLight = NULL;
    this->BP_InnerBorderDark = NULL;
    this->BP_OuterBorder = NULL;
    this->BP_BowlBG = NULL;
    this->BP_BowlPNumText = NULL;
    this->BP_CSSPuck = NULL;
}


