#include "DistributionFloat.h"

float FDistributionFloat::GetValue()
{
    float RandomValue = FMath::FRandRange(MinValue, MaxValue);
    return RandomValue;
}
