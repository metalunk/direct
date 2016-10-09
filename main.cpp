#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "ObjectiveFunctions/AbsX.h"

int main() {
    char* objective_function_name;
    objective_function_name = getenv("OBJECTIVE_FUNCTION_NAME");

    std::unique_ptr<direct::ObjectiveFunctionBase> objective_function;
    if (strcmp("AbsX", objective_function_name) == 0) {
        objective_function = std::unique_ptr<direct::ObjectiveFunctionBase>(
            new direct::AbsX()
        );
    } else {
        std::cerr << "Invalid function name." << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::vector<direct::Rectangle> rectangles = objective_function->create_feasible_rectangles();

    return 0;
}
