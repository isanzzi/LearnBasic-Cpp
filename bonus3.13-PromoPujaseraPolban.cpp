#include <iostream>
#include <iomanip>

int main() {
    float harga, hasil;
    int tanggal;

    // Menggunakan cin untuk input
    std::cin >> harga >> tanggal;

    if (harga >= 50000) {
        hasil = tanggal * 0.02 * harga;
        hasil = harga - hasil;
    } else {
        hasil = harga; // Jika harga kurang dari 50000, hasil tetap harga
    }

    // Menggunakan cout untuk output dengan format 2 desimal
    std::cout << std::fixed << std::setprecision(2) << hasil << std::endl;

    return 0;
}