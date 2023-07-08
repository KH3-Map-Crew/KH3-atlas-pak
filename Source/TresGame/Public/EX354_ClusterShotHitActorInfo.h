#pragma once
#include "CoreMinimal.h"
#include "EX354_ClusterShotHitActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEX354_ClusterShotHitActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_HitActor;
    
    TRESGAME_API FEX354_ClusterShotHitActorInfo();
};

