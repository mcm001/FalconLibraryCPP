#pragma once

#include <SIUnit.h>

namespace fl {

template <class T>
class FalconMotor {

    /**
     * The encoder attached to the motor
     */
    FalconEncoder<T> encoder;

    /**
     * The voltage output of the motor controller in volts
     */
    double getVoltageOutput();

    /**
     * Inverts the output given to the motor
     */
    void setOutputInverted(bool isInverted);

    /**
     *  When enabled, motor leads are commonized electrically to reduce motion
     */
    void setBrakeMode(bool isBrakeMode);

    /**
     * Configures the max voltage output given to the motor
     */
    void setVoltageCompensation(double compVoltage);

    /**
     *  Peak target velocity that the on board motion profile generator will use
     *  Unit is [T]/s
     */
    void setMotionProfileVelocity(double newVelocity);
    double getMotionProfileVelocity();

    /**
     *  Acceleration that the on board motion profile generator will
     *  Unit is [T]/s/s
     */
    void setMotionProfileAcceleration(double newAccel);
    double getMotionProfileAcceleration();

    /**
     * Enables the use of on board motion profiling for position mode
     */
    void setUseMotionProfileForPosition(bool useMotionProfileForPosition);
    bool getUseMotionProfileForPosition();

    bool follow(motor: FalconMotor);

    /**
     * Sets the output [voltage] in volts and [arbitraryFeedForward] in volts
     */
    void setVoltage(double voltage, double arbitraryFeedForward = 0.0);

    /**
     * Sets the output [dutyCycle] in percent and [arbitraryFeedForward] in volts
     */
    void setDutyCycle(double dutyCycle, double arbitraryFeedForward = 0.0);

    /**
     * Sets the output [velocity] in [T]/s and [arbitraryFeedForward] in volts
     */
    void setVelocity(double velocity, double arbitraryFeedForward = 0.0);

    /**
     * Sets the output [position] in [T] and [arbitraryFeedForward] in volts
     */
    void setPosition(double position, double arbitraryFeedForward = 0.0);

    /**
     * Sets the output of the motor to neutral
     */
    void setNeutral();

};
}  // namespace fl
