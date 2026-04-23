// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryManager.h"

// Sets default values
AInventoryManager::AInventoryManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AInventoryManager::BeginPlay()
{
	Super::BeginPlay();

	// 아이템 2개 가방에 넣기
	Inventory.Add(TEXT("초보자 검"));
	Inventory.Add(TEXT("마법지팡이"));

    // 아이템 정보 등록  
    ItemDataMap.Add(TEXT("초보자 검"), TEXT("누구나 쓸 수 있는 검"));
    ItemDataMap.Add(TEXT("마법지팡이"), TEXT("마법사만 쓸 수 있는 지팡이"));

	// 칭호 획득
	MyTitles.Add(TEXT("마법사"));

    // 가방 출력
    UE_LOG(LogTemp, Log, TEXT("===내 가방==="));
    for (FString Item : Inventory)
    {
        UE_LOG(LogTemp, Log, TEXT("아이템: %s"), *Item);
    }

    // 칭호 출력
    UE_LOG(LogTemp, Log, TEXT("===내 칭호==="));
    for (FString Title : MyTitles)
    {
        UE_LOG(LogTemp, Log, TEXT("칭호: %s"), *Title);
    }

    // 아이템 사용 테스트
    UE_LOG(LogTemp, Log, TEXT("===아이템 사용==="));

    // 마법지팡이 사용 시도 (마법사 칭호 있으니까 성공!)
    if (MyTitles.Contains(TEXT("마법사")))
    {
        UE_LOG(LogTemp, Log, TEXT("마법지팡이 사용 성공!"));
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("마법사 칭호가 없어서 사용 불가!"));
    }
	
}


