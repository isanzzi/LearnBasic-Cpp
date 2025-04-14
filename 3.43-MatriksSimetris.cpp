/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <iostream>

int main() {
    int papan[3][3];

    // Input elemen matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> papan[i][j];
        }
    }

    // Cek simetris
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (papan[i][j] != papan[j][i]) {
                std::cout << "bukan matriks simetris";
                return 0;
            }
        }
    }

    std::cout << "matriks simetris";
    return 0;
}
