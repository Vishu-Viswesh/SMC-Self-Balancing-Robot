#include "smc.h"
#include "config.h"

SlidingModeController::SlidingModeController()
{
}

float SlidingModeController::saturation(float x)
{
    if(x > boundaryLayer)
        return 1.0;

    if(x < -boundaryLayer)
        return -1.0;

    return x / boundaryLayer;
}

float SlidingModeController::compute(
        float angle,
        float angularVelocity,
        float reference)
{

    float error = reference-angle;

    float surface =
            lambda*error
            - angularVelocity;

    float control =
            gainK *
            saturation(surface);

    return control;
}
