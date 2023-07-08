#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCA_FishBase.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCA_FishBase : public AActor {
    GENERATED_BODY()
public:
    ATresGimmickCA_FishBase(const FObjectInitializer& ObjectInitializer);
};

