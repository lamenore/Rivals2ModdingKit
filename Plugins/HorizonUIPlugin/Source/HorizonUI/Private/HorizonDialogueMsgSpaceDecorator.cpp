#include "HorizonDialogueMsgSpaceDecorator.h"

UHorizonDialogueMsgSpaceDecorator::UHorizonDialogueMsgSpaceDecorator() {
    this->FirstLineSpaceL = FText::FromString(TEXT("  "));
    this->Space = FText::FromString(TEXT(" "));
    this->bDefaultWithSpaceL_AlphabeticOnly = true;
}


