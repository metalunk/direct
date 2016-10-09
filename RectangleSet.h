#ifndef DIRECT_RECTANGLESET_H
#define DIRECT_RECTANGLESET_H

#include <vector>
#include "Rectangle.h"

namespace direct {
    class RectangleSet {
        std::vector<direct::Rectangle> rectangles;
        std::vector<direct::Rectangle> potentially_optimums;

    public:
        RectangleSet(std::vector<direct::Rectangle>& rectangles);

        void calc_potentially_optimums();
    };
}

#endif //DIRECT_RECTANGLESET_H
