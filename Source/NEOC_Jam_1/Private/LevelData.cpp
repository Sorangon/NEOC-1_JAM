// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelData.h"

ULevelData::ULevelData()
{
	RoundDatas = TArray<FRoundData>();
	FRoundData DefaultRound = FRoundData();

	DefaultRound.Waves = TArray<FWaveData>();
	FWaveData DefaultWave = FWaveData();

	DefaultRound.Waves.Add(DefaultWave);
	RoundDatas.Add(DefaultRound);
}
