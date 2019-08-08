#pragma once

#include "SIValue.h"

namespace fl {

template<class T>
struct SIUnit : SIValue<T> {

    const double value;

    T operator/(const double other) const;

};

}