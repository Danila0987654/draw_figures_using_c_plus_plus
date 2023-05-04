#include <iostream>
#include <algorithm>

#include "functions/switch_element.cpp"
#include "functions/minor_function.cpp"

int main(int argc, char* argv[]) {
    std::string figure;
    int first_number, second_number;

    if (argc == 4) {
        figure = argv[1];
        std::transform(figure.begin(), figure.end(), figure.begin(), to_lower);
        first_number = std::stoi(argv[2]);
        second_number = std::stoi(argv[3]);
        switch_statements(figure, first_number, second_number);
    }
    else if (argc == 3) {
        figure = argv[1];
        std::transform(figure.begin(), figure.end(), figure.begin(), to_lower);
        first_number = second_number = std::stoi(argv[2]);
        switch_statements(figure, first_number, second_number);
    }
    else
        std::cout << "I need at least 3 arguments: operation number or operation first_number second_number";

    return 0;
}
