#ifndef DIRECT_OBJECTIVEFUNCTIONBASE_H
#define DIRECT_OBJECTIVEFUNCTIONBASE_H

#include <vector>

namespace direct {

    class ObjectiveFunctionBase {
    public:
        int N = 1;

        virtual double evaluate(std::vector<double> x) const = 0;

        int getN() const;
    };

}

#endif //DIRECT_OBJECTIVEFUNCTIONBASE_H
