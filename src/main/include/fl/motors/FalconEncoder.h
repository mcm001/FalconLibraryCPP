#pragma once

#include <FalconLibrary.h>

namespace fl {

template <class T>
class FalconEncoder {

    /**
     * The velocity of the encoder in [T]/s
     */
    double getVelocity();

    /**
     * The position of the encoder in [T]
     */
    double getPosition();

    /**
     * The velocity of the encoder in NativeUnits/s
     */
    double rawVelocity();
    /**
     * The position of the encoder in NativeUnits
     */
    double rawPosition();

    void resetPosition(double newPosition);

};  
} // namespace fl
