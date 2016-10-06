#ifndef DIRECT_RECTANGLE_H
#define DIRECT_RECTANGLE_H

#include <MacTypes.h>
#include <vector>

namespace direct {

    class Rectangle {
    public:
        void calc_center_point();

        Rectangle(std::vector<std::vector<double>> vertices);

    private:
        int center_point;
        std::vector<std::vector<double>> vertices;
    };

}

#endif //DIRECT_RECTANGLE_H
