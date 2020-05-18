// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Enemy.h"
#include "LevelData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemy> EnemyActorType;

	UPROPERTY(EditAnywhere)
	int32 TargetSpawner = 0;
};

USTRUCT(BlueprintType)
///<summary>
///Contains all the data required to generate a wave
///</summary>
struct FWaveData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<FEnemyData> Enemies;

	UPROPERTY(EditAnywhere)
	int32 AllowedRemainingEnemies = 0;
};

USTRUCT(BlueprintType)
struct FRoundData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<FWaveData> Waves;
};

/**
 * 
 */
UCLASS()
class NEOC_JAM_1_API ULevelData : public UDataAsset {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadonly)
	TArray<FRoundData> RoundDatas;
};
