#include "Rectangle.h"

namespace direct {
    Rectangle::Rectangle(std::vector<std::vector<double>> vertices) {
        this->vertices = vertices;
    }

    void Rectangle::calc_center_point() {
        this->center_point = 0;
    }
}
