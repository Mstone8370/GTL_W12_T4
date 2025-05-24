#include "BodyInstance.h"
#include "Physics/PhysicsManager.h"

FBodyInstance::FBodyInstance()
{
}

void FBodyInstance::CreatePhysicsState()
{
    //// (1) 물리 씬 핸들 가져오기
    //PxScene* PhysScene = GetPxScene();
    //if (!PhysScene) return;

    //// (2) BodySetup(콜리전 메쉬 정보) 유효성 검사
    //if (!BodySetup) return;

    //// (3) 동적 또는 정적 바디 생성 분기
    //if (bSimulatePhysics)
    //{
    //    // PxRigidDynamic 생성
    //    PxTransform P2W = U2PTransform(GetUnrealWorldTransform());
    //    PxRigidDynamic* PActor = PhysScene->GetPxScene()->getPhysics()
    //        ->createRigidDynamic(P2W);

    //    ActorHandle = new FPhysxActorHandle(PActor);  // 내부에서 PxActor 포인터 저장
    //}
    //else
    //{
    //    // PxRigidStatic 생성
    //    PxTransform P2W = U2PTransform(GetUnrealWorldTransform());
    //    PxRigidStatic* PActor = PhysScene->GetPxScene()->getPhysics()
    //        ->createRigidStatic(P2W);

    //    ActorHandle = new FPhysxActorHandle(PActor);
    //}

    //// (4) userData에 자신(this) 연결 — 나중에 충돌 이벤트에서 꺼내 쓰기 위함
    //ActorHandle->GetPxRigidActor()->userData = (void*)this;

    //// (5) BodySetup의 지오메트리 정보로 PxShape 생성·붙이기
    //BuildBody(ActorHandle->GetPxRigidActor());

    //// (6) 동적 바디일 경우 질량·관성 적용
    //if (bSimulatePhysics)
    //{
    //    PxRigidBodyExt::updateMassAndInertia(*ActorHandle->GetPxRigidActor(), MassInKg);
    //}

    //// (7) PhysX 씬에 액터 등록
    //PhysScene->AddActor(ActorHandle);
}
