#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEEX773_POINT_KIND.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEEX773_POINT_KIND : uint8 {
    POINT_KIND_NONE,
    POINT_KIND_FACE_CLAW,
    POINT_KIND_HEAVENLY_PILLAR_START,
    POINT_KIND_HEAVENLY_PILLAR_END,
    POINT_KIND_FLARE_TORNADO,
    POINT_KIND_ALL_PILLAR_HEIGHT,
    POINT_KIND_ECLIPSE13_WARP_ESCAPE,
    POINT_KIND_ECLIPSE13_WARP_APEAR,
    POINT_KIND_MAX UMETA(Hidden),
};

