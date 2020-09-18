#include "SaveGameInstance.h"

//USaveGameInstance * USaveGameInstance::Instance = nullptr;

USaveGameInstance::USaveGameInstance()
{

	//Instance = this;
}
void USaveGameInstance::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
;
	//SaveActor->Serialize(Ar);


}
void USaveGameInstance::StoreActor(AActor * InActor)
{
	FSaveActorData TemData;
	TemData.ClassPath = InActor->GetClass()->GetPathName();
	TemData.ActroTransform = InActor->GetActorTransform();
	FMemoryWriter MemoryWriter(TemData.ActorData, true);
	FObjectAndNameAsStringProxyArchive Ar(MemoryWriter, false);
	InActor->Serialize(Ar);

	ActorsData.Add(TemData);
}