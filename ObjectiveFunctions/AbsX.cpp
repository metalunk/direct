#include <cmath>
#include <vector>
#include "AbsX.h"

namespace direct {

    double AbsX::evaluate(std::vector<double> x) const {
        return std::abs(x[0]);
    }

}
