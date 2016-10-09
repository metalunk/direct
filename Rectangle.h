#ifndef DIRECT_RECTANGLE_H
#define DIRECT_RECTANGLE_H

#include <MacTypes.h>
#include <vector>
#include "Edge.h"
#include "Point.h"

namespace direct {
    class Rectangle {
        int center_point;
        const std::vector<direct::Point> vertices;
        const std::vector<direct::Edge> edges;

    public:
        void calc_center_point();

        Rectangle(
            const std::vector<direct::Point> vertices,
            const std::vector<direct::Edge> edges
        );
    };
}

#endif //DIRECT_RECTANGLE_H
