#include <iostream>
#include <cmath>

int main() {
    int init;
    std::cin >> init;
    for (int i = 0; i < init; i++) {
        for (int j = i; j >= 0; j--) {
            int hasil = pow(2, j);
            std::cout << hasil << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

//j pangkat 2
//for (jika tidak terjadi maka selesai)