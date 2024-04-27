// Fill out your copyright notice in the Description page of Project Settings.


#include "SwapMaterialActor.h"

// Sets default values
ASwapMaterialActor::ASwapMaterialActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void ASwapMaterialActor::BeginPlay()
{
	Super::BeginPlay();
	//if (StaticMeshComponent)
	//{
	//	StaticMeshComponent->SetMaterial(0, DefaultMaterial);
	//	//StaticMeshComponent->SetMaterial(1, NewMaterial);
	//}
}

// Called every frame
void ASwapMaterialActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

