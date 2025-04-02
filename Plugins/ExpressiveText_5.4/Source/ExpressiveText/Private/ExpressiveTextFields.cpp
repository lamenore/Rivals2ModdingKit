#include "ExpressiveTextFields.h"

FExpressiveTextFields::FExpressiveTextFields() {
    this->DefaultFontSize = 0;
    this->UseDefaultFontSize = false;
    this->UseAutoSize = false;
    this->Justification = ETextJustify::Left;
    this->DefaultStyle = NULL;
    this->RefreshAutomaticallyOnChange = false;
}

