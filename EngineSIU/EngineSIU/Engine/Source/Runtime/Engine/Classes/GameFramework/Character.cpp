#include "Character.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"

UObject* ACharacter::Duplicate(UObject* InOuter)
{
    ThisClass* NewActor = Cast<ThisClass>(Super::Duplicate(InOuter));

    return NewActor;
}

void ACharacter::PostSpawnInitialize()
{
    Super::PostSpawnInitialize();

    RootComponent = AddComponent<USceneComponent>();

    if (!SkeletalMeshComponent)
    {
        SkeletalMeshComponent = AddComponent<USkeletalMeshComponent>("SkeletalMeshComponent");
    }

    if (!CapsuleComponent)
    {
        CapsuleComponent = AddComponent<UCapsuleComponent>("CapsuleComponent");
    }

}

void ACharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
