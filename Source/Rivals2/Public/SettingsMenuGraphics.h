#pragma once
#include "CoreMinimal.h"
#include "SettingsMenuTabInterface.h"
#include "SettingsMenuGraphics.generated.h"

class USettingsMenuRow;

UCLASS(Blueprintable, EditInlineNew)
class RIVALS2_API USettingsMenuGraphics : public USettingsMenuTabInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_VSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_MaxFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_MaterialQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_ReflectionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_MeshQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_AA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_SSAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USettingsMenuRow* BP_SettingsMenuRow_WindowMode;
    
    USettingsMenuGraphics();

    UFUNCTION(BlueprintCallable)
    int32 GetMaxFPS();
    
};

