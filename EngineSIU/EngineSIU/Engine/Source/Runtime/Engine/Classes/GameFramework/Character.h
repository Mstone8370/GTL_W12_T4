#pragma once
#include <commctrl.h>

#include "Pawn.h"

class USkeletalMeshComponent;
class UCapsuleComponent;

class ACharacter : public APawn
{
    DECLARE_CLASS(ACharacter, APawn)
public:
    ACharacter() = default;
    virtual UObject* Duplicate(UObject* InOuter) override;
    
    virtual void PostSpawnInitialize() override;
    virtual void Tick(float DeltaTime) override;

    virtual void SetupInputComponent(UInputComponent* PlayerInputComponent) override { }

    USkeletalMeshComponent* GetSkeletalMeshComponent() const { return SkeletalMeshComponent; }
    UCapsuleComponent* GetCapsuleComponent() const { return CapsuleComponent; }
    
protected:
    USkeletalMeshComponent* SkeletalMeshComponent = nullptr;
    UCapsuleComponent* CapsuleComponent = nullptr;

protected:
    bool bIsFalling = false; // 
    bool bIsJumping = false; // 점프 중일 때. 
    bool bIsAttacking = false;
    
    bool bIsCrouching = false; // 앉기가 필요하면 사용.
    bool bIsSprinting = false; // 달리기 필요하면 사용.

};
