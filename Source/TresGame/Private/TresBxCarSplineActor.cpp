#include "TresBxCarSplineActor.h"

ATresBxCarSplineActor::ATresBxCarSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eBlinkerType = EGimmickBX_CarSplineBlinker_None;
    this->m_bConnection = false;
    this->m_bNoRotation = false;
    this->m_bHighSpeed = false;
}

