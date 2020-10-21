#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Enemy.h"
#include "LevelData.generated.h"

USTRUCT(BlueprintType)
///<summary>
///Contains the enemy type to generate and his target spawner
///</summary>
struct FEnemyData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AEnemy> EnemyActorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetSpawner = 0;
};

USTRUCT(BlueprintType)
///<summary>
///Contains all the data required to generate a wave
///</summary>
struct FWaveData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEnemyData> Enemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AllowedRemainingEnemies = 0;
};

USTRUCT(BlueprintType)
///<summary>
///Contains all the data required to manage a round
///</summary>
struct FRoundData {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FWaveData> Waves;
};

/**
 * 
 */
UCLASS(BlueprintType)
class NEOC_JAM_1_API ULevelData : public UDataAsset {
	GENERATED_BODY()

	ULevelData();

public:
	UPROPERTY(EditAnywhere, BlueprintReadonly)
	TArray<FRoundData> RoundDatas;
};
