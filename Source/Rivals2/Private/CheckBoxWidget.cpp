#include "CheckBoxWidget.h"

UCheckBoxWidget::UCheckBoxWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BP_SizeBox = NULL;
    this->BP_CheckImage = NULL;
    this->BP_BorderBorder = NULL;
    this->BP_ContentBorder = NULL;
    this->BP_NormalMaterial = NULL;
    this->BP_NormalBorderMaterial = NULL;
    this->BP_CheckedMaterial = NULL;
    this->BP_CheckedBorderMaterial = NULL;
    this->BP_SelectedBorderMaterial = NULL;
    this->BP_LockedMaterial = NULL;
    this->BP_LockedBorderMaterial = NULL;
}


