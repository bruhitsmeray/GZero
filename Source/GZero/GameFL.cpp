// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFL.h"

FString UGameFL::GetGameVersion(){
	FString GameVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		GameVersion,
		GGameIni
	);
	return GameVersion;
}
