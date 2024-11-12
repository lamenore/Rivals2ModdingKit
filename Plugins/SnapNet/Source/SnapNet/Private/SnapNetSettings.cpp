#include "SnapNetSettings.h"

USnapNetSettings::USnapNetSettings() {
    this->ProtocolVersion = 0;
    this->DefaultEntityPredictionAtSpawn = ESnapNetEntityPredictionMode::All;
    this->MaxClients = 16;
    this->MaxPlayers = 16;
    this->TickRate = 60;
    this->TicksPerServerSend = 1;
    this->SavedInstantReplays = 1;
    this->InputActions.AddDefaulted(23);
    this->InputAxes.AddDefaulted(6);
    this->IncludeControlRotation = false;
    this->Maps.AddDefaulted(30);
    this->StringPools.AddDefaulted(7);
    this->SmallPositionDeltaThreshold = 100.00f;
    this->RotationPrecisionSimulatedOrSpectated = 0.01f;
    this->RotationPrecisionNeitherSimulatedNorSpectated = 1.00f;
    this->CommonEntitiesCacheEnabled = true;
    this->DeltaCacheEnabled = true;
    this->DormancyEnabled = true;
    this->EntityHashes = true;
    this->GeneratePacketsForBots = false;
    this->LegacyLevelLoadingArchitecture = false;
    this->LogDeltaEncoding = false;
    this->TradeBandwidthForPerformance = true;
    this->ValidateSerialization = false;
    this->TimeoutSeconds = 8;
    this->MaxEntities = 1000;
    this->MaxEvents = 1000;
    this->MaxFutureInputs = 6;
    this->MaxLocalPlayers = 8;
    this->MaxLagCompensationMilliseconds = 200;
    this->DeltaCompressionHistoryMilliseconds = 1500;
    this->SnapshotSize = 409600;
    this->MaxPacketSize = 819200;
    this->ReplayChunkSeconds = 10;
    this->NetworkSimulationEnabled = false;
    this->NetworkSimulationOnlyInEditorBuilds = true;
    this->PacketLatencyMilliseconds = 100;
    this->PacketJitterMilliseconds = 15;
    this->PacketLossPercentage = 2.00f;
    this->ClientPredictedPhysicsEnabled = false;
    this->RenderInterpolationMethod = ESnapNetRenderInterpolationMethod::PreviousTicks;
    this->MinInputDelayBeforePredictionMilliseconds = 0;
    this->MaxInputDelayBeforePredictionMilliseconds = 33;
    this->MaxPredictedMilliseconds = 130;
    this->SynchronouslyLoadAllEntityRenderersOnStart = true;
    this->SpectatingLagCompensatedByDefault = false;
    this->AdditionalJitterBufferMilliseconds = 0;
    this->ConnectionInterruptedMilliseconds = 500;
    this->MaxInputTransmissions = 3;
    this->Port = 7777;
    this->ReplaysEnabled = false;
    this->MultithreadedDeltaEncoding = false;
    this->InstantReplayMaxSeconds = 10;
    this->MaxUniqueDeltasPerSend = 3;
    this->MaxUniqueInstantReplays = 16;
    this->MinSecondsBetweenBaselines = -1;
    this->SettingsVersion = 2;
    this->PredictionMode = ESnapNetPredictionMode::Upgraded;
    this->PooledEntityRenders.AddDefaulted(3);
}


