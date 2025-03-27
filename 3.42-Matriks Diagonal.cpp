#include <iostream>
#define size 3

int papan[size][size];
bool iya = true;

int main() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cin >> papan[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && papan[i][j] != 0) {
                iya = false;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        if (papan[i][i] == 0) {
            iya = false;
        }
    }

    if (iya) {
        std::cout << "matriks diagonal";
    } else {
        std::cout << "bukan matriks diagonal";
    }
    
    return 0;
}
