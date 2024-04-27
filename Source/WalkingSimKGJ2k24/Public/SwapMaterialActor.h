// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISwapMaterial.h"
#include "Components/StaticMeshComponent.h"
#include "SwapMaterialActor.generated.h"

UCLASS()
class WALKINGSIMKGJ2K24_API ASwapMaterialActor : public AActor, public IISwapMaterial
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwapMaterialActor();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Material")
	void SwapMaterial_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	//TObjectPtr<UMaterialInstance> DefaultMaterial;

	////UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
	////TObjectPtr<UMaterialInstance> NewMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	TObjectPtr<UStaticMeshComponent> StaticMeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
