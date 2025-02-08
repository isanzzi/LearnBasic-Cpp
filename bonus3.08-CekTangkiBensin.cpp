/*
*/

#include <iostream>
#include <iomanip> // Untuk std::setprecision

int main() {
    long bil;
    float kapasitas, hasil;

    std::cin >> bil;
    std::cin >> kapasitas;

    hasil = static_cast<float>(bil) / 7600;
    std::cout << std::fixed << std::setprecision(2) << hasil << std::endl;

    if (hasil > kapasitas) {
        std::cout << "Bensin Berlebih" << std::endl;
    }

    return 0;
}