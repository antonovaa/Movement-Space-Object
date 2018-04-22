// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyC.generated.h"

UCLASS()
class MYPROJECT_API AMyC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyC();

protected:
	FVector v1;
	float t;
	float x0; 
	float y0;
	FVector f1;
	float len_a;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//UFUNCTION(BlueprintCallable)
	//	float changeloc(float x0, TArray<float> m, TArray<float> x);

	UFUNCTION(BlueprintCallable)
		FVector changelocX(FVector f0, TArray<float> m, TArray<FVector> f);

	FVector velocity(FVector a);
	FVector a(TArray<float> m, TArray<FVector> f);


	
};
