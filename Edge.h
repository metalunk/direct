#ifndef DIRECT_EDGE_H
#define DIRECT_EDGE_H

#include <MacTypes.h>
#include "Point.h"

namespace direct {
    class Edge {
        const Point from;
        const Point to;

    public:
        Edge(const Point& from, const Point& to);
    };
}

#endif //DIRECT_EDGE_H
