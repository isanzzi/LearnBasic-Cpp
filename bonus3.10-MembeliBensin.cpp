/*
*/

#include <iostream>
#include <iomanip> // Untuk std::setprecision

int main() {
    int jenis;
    float jumlah, hasil = 0.0; // Inisialisasi hasil dengan 0.0

    // Input jenis dan jumlah
    std::cin >> jenis >> jumlah;

    // Menggunakan switch untuk menentukan hasil berdasarkan jenis
    switch (jenis) {
        case 1:
            hasil = jumlah * 9000;
            break;

        case 2:
            hasil = jumlah * 7600;
            break;

        default:
            std::cout << "Jenis tidak valid." << std::endl;
            return 1; // Menghentikan program jika jenis tidak valid
    }

    // Tampilkan hasil dengan 2 desimal
    std::cout << std::fixed << std::setprecision(2) << hasil << std::endl;

    return 0;
}