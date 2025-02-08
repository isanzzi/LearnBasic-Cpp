/*
*/

#include <iostream>
#include <iomanip> // Untuk std::setprecision

int main() {
    long harga, jumlah;
    float hasil;

    // Input harga dan jumlah
    std::cin >> harga >> jumlah;

    // Hitung total harga
    hasil = static_cast<float>(harga) * jumlah;

    // Diskon jika jumlah kelipatan 12
    if (jumlah % 12 == 0) {
        hasil *= 0.85; // Diskon 15%
    }

    // Tampilkan hasil dengan 2 desimal
    std::cout << std::fixed << std::setprecision(2) << hasil << std::endl;

    return 0;
}