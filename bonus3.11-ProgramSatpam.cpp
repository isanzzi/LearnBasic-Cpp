#include <iostream>
#include <cmath>

int main() {
    int jenis, brpkali;

    std::cin >> jenis >> brpkali;

    switch(jenis) {
        case 1:
            if(brpkali < 4) {
                std::cout << "Serahkan KTP anda !!!" << std::endl;
            } else {
                std::cout << "Bayar Denda 10000 !!!" << std::endl;
            }
            break;

        case 2:
            if(brpkali > 0) {
                std::cout << "Ambil STNK dulu !!!" << std::endl;
            }
            break;

        default:
            std::cin >> jenis;
            break; // Tambahkan break untuk menghindari fall-through
    }
    return 0;
}