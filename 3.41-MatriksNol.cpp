#include <iostream>

int main() {
    int papan[3][3];
    
    // Input matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> papan[i][j];
        }
    }
    
    // Periksa apakah matriks nol
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (papan[i][j] != 0) {
                std::cout << "bukan matriks nol";
                return 0;
            }
        }
    }
    
    std::cout << "matriks nol";
    return 0;
}
