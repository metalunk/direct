#ifndef DIRECT_ABS_X_H
#define DIRECT_ABS_X_H

#include "../ObjectiveFunctionBase.h"

namespace direct {

    class AbsX : public ObjectiveFunctionBase {
        int N = 1;

        double evaluate(std::vector<double> x) const override;
    };

}

#endif //DIRECT_ABS_X_H
