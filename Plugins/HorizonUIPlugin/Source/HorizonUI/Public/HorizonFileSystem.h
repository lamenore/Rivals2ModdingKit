#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HorizonFileSystem.generated.h"

class UFont;
class UHorizonFileSystem;
class UMaterial;
class UPaperFlipbook;
class USoundBase;
class UTexture2D;

UCLASS(Blueprintable, Config=HorizonPlugin)
class HORIZONUI_API UHorizonFileSystem : public UObject {
    GENERATED_BODY()
public:
    UHorizonFileSystem();

    UFUNCTION(BlueprintCallable)
    UObject* LoadUAsset(const FString& InPackageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* LoadTexture2D(const FString& InPackageFilePath, int32& OutWidth, int32& OutHeight);
    
    UFUNCTION(BlueprintCallable)
    USoundBase* LoadSound(const FString& InPackageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UPaperFlipbook* LoadPaperFlipbook(const FString& InPackageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UMaterial* LoadMaterial(const FString& InPackageFilePath);
    
    UFUNCTION(BlueprintCallable)
    UFont* LoadFont(const FString& InPackageFilePath);
    
    UFUNCTION(BlueprintCallable)
    static UHorizonFileSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void DestroyInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateDirectoryRecursively(const FString& InFolderToMake);
    
};

