#include "TresGenerator_e_ex360_PlayVoise.h"

ATresGenerator_e_ex360_PlayVoise::ATresGenerator_e_ex360_PlayVoise(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayVoiceRate = 100;
    this->m_PlayVoiceWaitTime = 0.00f;
    this->m_VoiceAudioComponent = NULL;
}

