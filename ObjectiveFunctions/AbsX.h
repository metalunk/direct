#ifndef DIRECT_ABS_X_H
#define DIRECT_ABS_X_H

#include "../ObjectiveFunctionBase.h"
#include "../Rectangle.h"

namespace direct {

    class AbsX : public ObjectiveFunctionBase {
        int N = 1;

        double evaluate(const std::vector<double>& x) const override;

        std::vector<Rectangle> create_feasible_rectangles() const override;
    };

}

#endif //DIRECT_ABS_X_H
