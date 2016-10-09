#ifndef DIRECT_POINT_H
#define DIRECT_POINT_H

#include <vector>

namespace direct {
    class Point {
        const std::vector<double> x;

    public:
        Point(const std::vector<double>& x);
    };
}

#endif //DIRECT_POINT_H
