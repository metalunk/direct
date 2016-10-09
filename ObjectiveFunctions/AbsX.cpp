#include <cmath>
#include <vector>
#include "AbsX.h"

namespace direct {

    double AbsX::evaluate(const std::vector<double>& x) const {
        return std::abs(x[0]);
    }

    std::vector<Rectangle> AbsX::create_feasible_rectangles() const {
        direct::Point from(std::vector<double>(1, 0));
        direct::Point to(std::vector<double>(1, 1));

        direct::Edge edge(from, to);

        std::vector<direct::Point> vertices = {from, to};
        std::vector<direct::Edge> edges = {edge};

        direct::Rectangle rectangle(vertices, edges);
        std::vector<direct::Rectangle> rectangles = {rectangle};

        return rectangles;
    }
}
