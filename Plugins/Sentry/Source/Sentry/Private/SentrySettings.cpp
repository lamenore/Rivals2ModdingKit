#include "SentrySettings.h"
#include "SentryBeforeSendHandler.h"
#include "SentryTraceSampler.h"

USentrySettings::USentrySettings() {
    this->InitAutomatically = true;
    this->Dsn = TEXT("https://446ae0a1a572732cbc9012fd37895b97@o230184.ingest.us.sentry.io/4506916692099072");
    this->Debug = true;
    this->EnableAutoCrashCapturing = true;
    this->Environment = TEXT("Release");
    this->SampleRate = 1.00f;
    this->EnableAutoLogAttachment = true;
    this->AttachStacktrace = true;
    this->SendDefaultPii = true;
    this->AttachScreenshot = false;
    this->MaxBreadcrumbs = 100;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UseProxy = false;
    this->BeforeSendHandler = USentryBeforeSendHandler::StaticClass();
    this->EnableTracing = false;
    this->SamplingType = ESentryTracesSamplingType::UniformSampleRate;
    this->TracesSampleRate = 0.00f;
    this->TracesSampler = USentryTraceSampler::StaticClass();
    this->EnableForPromotedBuildsOnly = false;
    this->UploadSymbolsAutomatically = false;
    this->IncludeSources = false;
}


