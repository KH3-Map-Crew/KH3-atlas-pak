#include "TresAnimNotify_FaceAnimEye.h"

UTresAnimNotify_FaceAnimEye::UTresAnimNotify_FaceAnimEye() {
    this->m_AnimType = NORMAL_AUTO;
    this->m_bIsBattleFaceEnd = false;
    this->m_BlendInTime = -1.00f;
    this->m_bIsLoop = false;
    this->m_PlaySpeed = 1.00f;
    this->m_bSameCheck = true;
    this->m_PlayPriority = PRIO_DEFAULT;
    this->m_bEnable0Frame = false;
}

