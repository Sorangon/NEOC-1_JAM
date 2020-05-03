// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Attractor.generated.h"


UCLASS( ClassGroup=(Custom),Blueprintable ,meta=(BlueprintSpawnableComponent) )
class NEOC_JAM_1_API UAttractor : public USceneComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this component's properties
	UAttractor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
