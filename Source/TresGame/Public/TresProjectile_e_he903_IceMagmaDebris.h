#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_he903_IceMagmaDebris.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_he903_IceMagmaDebris : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_he903_IceMagmaDebris(const FObjectInitializer& ObjectInitializer);
};

