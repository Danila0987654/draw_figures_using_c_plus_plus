#include "create_figures.cpp"

void switch_statements(const std::string& input_operation, int first_number, int second_number) {
    if (input_operation == "rectangle") {
        create_rectangle(first_number, second_number);
    }
    else if (input_operation == "circle") {
        create_circle(first_number);
    }
    else {
        create_rectangle(first_number, second_number);
    }
}