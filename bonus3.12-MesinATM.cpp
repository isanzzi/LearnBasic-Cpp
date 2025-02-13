#include <iostream>
#include <iomanip>

int main() {
    int ambil;         
    float saldo;     
    std::cin >> ambil >> saldo;

    if (ambil % 5 == 0 && saldo >= ambil + 0.5) {
        saldo = saldo - ambil - 0.5;
    }

    std::cout << std::fixed << std::setprecision(2) << saldo << std::endl;

    return 0;
}