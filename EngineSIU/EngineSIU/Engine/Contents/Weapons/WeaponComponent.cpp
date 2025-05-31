#include "WeaponComponent.h"

void UWeaponComponent::InitializeComponent()
{
    Super::InitializeComponent();
    if (GetOwner())
    {
        OwnerActor = GetOwner();
    }
    
}

void UWeaponComponent::Equip(UStaticMesh* NewWeapon)
{
    if (WeaponMesh == NewWeapon)
    {
        return;
    }

    if (WeaponMesh)
    {
        Unequip(); // 이미 장착한 무기가 있다면 먼저 해제.
    }

    WeaponMesh = NewWeapon;
}

void UWeaponComponent::Unequip()
{
    if (WeaponMesh)
    {
        WeaponMesh = nullptr; // 무기를 해제.
    }
}
