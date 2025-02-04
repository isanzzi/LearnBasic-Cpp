/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <iostream>
#include <cmath>    // Untuk sqrt
#include <iomanip>  // Untuk std::setprecision

int main() {
    float hasil, l;

    // Menggunakan cin untuk input
    std::cout << "Masukkan nilai: ";
    std::cin >> hasil;

    l = hasil / 3.14f; // Menggunakan f untuk menunjukkan bahwa ini adalah float
    l = sqrt(l); // Menghitung akar kuadrat

    // Menggunakan cout untuk output
    std::cout << std::fixed; // Mengatur format output
    std::cout << std::setprecision(2); // Mengatur presisi menjadi 2 angka di belakang koma
    std::cout << l << std::endl;

    return 0;
}