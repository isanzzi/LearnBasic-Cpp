#include <iostream>

int main() {
    int papan[3][3];
    int init[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Input the Sudoku block
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> papan[i][j];
        }
    }

    // Validate the Sudoku block
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            bool found = false;
            for (int k = 0; k < 9; k++) {
                if (papan[i][j] == init[k]) {
                    init[k] = 0;
                    found = true;
                    break;
                }
            }
            
            if (!found) {
                std::cout << "tidak valid";
                return 0;
            }
        }
    }

    std::cout << "valid";
    return 0;
}

