// Fill out your copyright notice in the Description page of Project Settings.

#include "MyC.h"


// Sets default values
AMyC::AMyC()
{
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyC::Tick(float DeltaTime)
{
	t = DeltaTime;
	Super::Tick(DeltaTime);

}

FVector AMyC::changelocX(FVector f0, TArray<float> m, TArray<FVector> f)
{
	this->x0 = f0.X;
	this->y0 = f0.Y;
	FVector a1 = AMyC::a(m, f);
	v1 = AMyC::velocity(a1);
	return f0 + v1*t + a1*t*t / 2;
}



FVector AMyC::velocity(FVector a)
{

	v1 = v1 + a*t;
	return v1;
}
FVector AMyC::a(TArray<float> m, TArray<FVector> f)
{
	int i;
	FVector result(0,0,0);
	int32 l = m.Num();
	float r;
	for (i = 0; i < l; i++) {
			f1.X = f[i].X - x0;
			f1.Y = f[i].Y - y0;
			f1.Z = 0;
			r = f1.X*f1.X + f1.Y*f1.Y;
			if (r < 30) r = 30;
			len_a =  5*m[i] / r;
			result = result + f1*len_a;
	}

	return result;
}


