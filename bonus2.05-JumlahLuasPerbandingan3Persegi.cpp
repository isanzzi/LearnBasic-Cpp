/*
*/

#include <iostream>
#include <iomanip> // Untuk std::setprecision

int main() {
    int x, y, z;
    float zz, hasil1, hasil2, hasil3, totalhasil;

    // Menggunakan cin untuk input
    std::cin >> x >> y >> z >> zz;

    // Menghitung hasil
    hasil1 = zz * x / x; // Ini sama dengan zz
    hasil2 = zz * y / x; 
    hasil3 = zz * z / x; 

    // Menghitung kuadrat dari hasil
    hasil1 = hasil1 * hasil1;
    hasil2 = hasil2 * hasil2;
    hasil3 = hasil3 * hasil3;

    // Menghitung total hasil
    totalhasil = hasil1 + hasil2 + hasil3;

    // Mengatur format output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << totalhasil << std::endl;

    return 0;
}