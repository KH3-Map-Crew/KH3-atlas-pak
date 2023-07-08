#pragma once
#include "CoreMinimal.h"
#include "TresLSIScoreEntryWins.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryWins {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 wins;
    
    TRESGAME_API FTresLSIScoreEntryWins();
};

