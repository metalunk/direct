#include <iostream>
#include <vector>
#include "ObjectiveFunctions/AbsX.h"

int main() {
    std::string objective_function_name;
    std::cin >> objective_function_name;

    std::unique_ptr<direct::ObjectiveFunctionBase> objective_function;
    if (objective_function_name == "AbsX") {
        objective_function = std::unique_ptr<direct::ObjectiveFunctionBase>(
            new direct::AbsX()
        );
    } else {
        std::cerr << "Invalid function name." << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::vector<double> x(1, -1);
    std::cout << "Abs of -1 is " << objective_function->evaluate(x) << std::endl;

    return 0;
}
