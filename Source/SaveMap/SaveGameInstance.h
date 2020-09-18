#pragma once

#include "CoreMinimal.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Serialization/MemoryWriter.h"

#include "GameFramework/SaveGame.h"
#include "SaveGameInstance.generated.h"

USTRUCT()
struct FSaveActorData
{
public:
	GENERATED_BODY()

	UPROPERTY()
	FString ClassPath;
	UPROPERTY()
		FTransform  ActroTransform;
	UPROPERTY()
		TArray<uint8> ActorData;

	FSaveActorData(){}
};
UCLASS()
class USaveGameInstance : public USaveGame
{
	GENERATED_BODY()
public:
	//static USaveGameInstance * Instance;
	USaveGameInstance();
	
	virtual void Serialize(FArchive& Ar);

	void StoreActor(AActor * InActor);
	UPROPERTY()
		TArray<FSaveActorData>  ActorsData;
};

