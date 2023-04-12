// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFL.generated.h"

/**
 * 
 */
UCLASS()
class GZERO_API UGameFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintPure, meta=(DisplayName="GetGameVersion"), Category="Game")
	static FString GetGameVersion();
};
