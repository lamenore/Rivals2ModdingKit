#include "TitleScreenWidget.h"

UTitleScreenWidget::UTitleScreenWidget() {
    this->BP_NextScreen = NULL;
    this->BP_PressStartText = NULL;
    this->BP_NetworkVisualContainer = NULL;
    this->BP_EntryAnim = NULL;
    this->BP_LoadingLoopAnim = NULL;
}

void UTitleScreenWidget::SwapToMainMenu() {
}



void UTitleScreenWidget::OnInitialDataFetchingFirstStepFinishedDynamicMulticastDelegate(bool bWasSuccessful) {
}

void UTitleScreenWidget::OnInitialDataFetchingFinalStepFinishedDynamicMulticastDelegate(bool bWasSuccessful) {
}

void UTitleScreenWidget::OnConnectToPlayFabServicesSuccess() {
}

void UTitleScreenWidget::OnConnectToPlayFabServicesError(FText ErrorReport) {
}


void UTitleScreenWidget::InitiateLogin() {
}


