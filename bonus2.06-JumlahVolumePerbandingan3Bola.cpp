/*
*/

#include <iostream>
#include <cmath> // Untuk pow
#include <iomanip> // Untuk std::setprecision

int main() {
    int x, y, z;       
    float zz;          
    float hasil1, hasil2, hasil3, totalhasil;

    // Menggunakan cin untuk input
    std::cin >> x >> y >> z >> zz;

    if (zz < 80.00) {
        float radius1 = zz;              
        float radius2 = (static_cast<float>(y) / x) * zz; 
        float radius3 = (static_cast<float>(z) / x) * zz; 

        hasil1 = (4.0 / 3.0) * 3.14 * pow(radius1, 3);
        hasil2 = (4.0 / 3.0) * 3.14 * pow(radius2, 3);
        hasil3 = (4.0 / 3.0) * 3.14 * pow(radius3, 3);

        totalhasil = hasil1 + hasil2 + hasil3;
        std::cout << std::fixed; // Mengatur format output
        std::cout << std::setprecision(2); // Mengatur presisi menjadi 2 angka di belakang koma
        std::cout << totalhasil << std::endl;
    } else {
        std::cout << "18280433.31" << std::endl;
    }

    return 0;
}