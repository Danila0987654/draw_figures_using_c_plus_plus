#include <iostream>

void create_rectangle(int input_column, int input_row) {
    for (int column = 0; column < input_column; column++) {
        std::cout << "*";
    }
    std::cout << "\n";

    for (int row = 0; row < input_row -2; row++) {
        std::cout << "*";

        for (int column = 0; column < input_column - 2; column++) {
            std::cout << " ";
        }
        std::cout << "*\n";
    }

    for (int column = 0; column < input_column; column++) {
        std::cout << "*";
    }
}

void create_circle(int length) {
    int radius = length * 2;

    for (int column = 0; column < radius; column++) {
        std::cout << "*";
    }
    std::cout << "\n";
    for (int row = 0; row < length; row++) {
        if (row == 0 || row == length - 1) {
            for (int column = 0; column < radius; column++) {
                if (column > 2 && column < radius - 3)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
        else if (row == 1 || row == length - 2) {
            for (int column = 0; column < radius; column++) {
                if ((column > 0 && column < 3) || (column > radius - 4 && column < radius - 1))
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
        else {
            for (int column = 0; column < radius; column++) {
                if ((column >= 0 && column < 2) || (column > radius - 3 && column <= radius - 1))
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }
    }
}