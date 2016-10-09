#ifndef DIRECT_OBJECTIVEFUNCTIONBASE_H
#define DIRECT_OBJECTIVEFUNCTIONBASE_H

#include <vector>
#include "Rectangle.h"

namespace direct {

    class ObjectiveFunctionBase {
    public:
        const int N = 1;

        virtual double evaluate(const std::vector<double>& x) const = 0;

        virtual std::vector<Rectangle> create_feasible_rectangles() const = 0;

        int getN() const;
    };

}

#endif //DIRECT_OBJECTIVEFUNCTIONBASE_H
