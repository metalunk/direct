#include "Rectangle.h"

namespace direct {
    void Rectangle::calc_center_point() {
        this->center_point = 0;
    }

    Rectangle::Rectangle(
        const std::vector<direct::Point> vertices,
        const std::vector<direct::Edge> edges
    ) : vertices(vertices), edges(edges) {}
}
