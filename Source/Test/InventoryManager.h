// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryManager.generated.h"

UCLASS()
class TEST_API AInventoryManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInventoryManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	TArray<FString> Inventory; //가방

	TMap<FString, FString> ItemDataMap;//아이템정보

	TSet<FString> MyTitles; //칭호목록

};
