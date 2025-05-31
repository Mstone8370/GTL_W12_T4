#pragma once

#include "Components/StaticMeshComponent.h"

class UWeaponComponent : public UStaticMeshComponent
{
    DECLARE_CLASS(UWeaponComponent, USceneComponent)

public:
    UWeaponComponent() = default;

    virtual void InitializeComponent() override;

public:
    virtual void Equip(UStaticMesh* NewWeapon);
    virtual void Unequip();

protected:
    AActor* OwnerActor = nullptr;

private:
    UStaticMesh* WeaponMesh = nullptr;
    

};

