#pragma once

#include <cstdlib>

namespace fl {

template <class T>
class SIValue {
    public:
        
        const double value;

        virtual T createNew(double newValue);

        const T absoluteValue() = createNew(abs(value));

        T operator-() const;

        // Operators with SI Units
        T operator+(const T& other) const;
        T operator-(const T& other) const;

        double operator/(const T& other) const;
        double operator%(const T& other) const;

        // Operators with scalars
        T operator*(const double other) const;
        T operator/(const double other) const;
        T operator%(const double other) const;

        T lerp(const T endValue&, const double t) const;
        bool epsilonEquals(const T& other) const;

};

}
