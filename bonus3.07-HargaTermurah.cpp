/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <iostream>

int main() {
    long bil[2];
    
    // Menggunakan cin untuk input
    for (int i = 0; i < 2; i++) {
        std::cin >> bil[i];
    }

    // Mencetak bilangan terkecil
    if (bil[0] > bil[1]) {
        std::cout << bil[1];
    } else {
        std::cout << bil[0];
    }

    return 0;
}