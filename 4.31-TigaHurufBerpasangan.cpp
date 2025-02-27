#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    char init[40];
    char kata1, kata2, kata3;
    int result = 0;

    std::cin.getline(init, 40);
    std::cin >> kata1 >> kata2 >> kata3;

    // Mengubah semua karakter dalam 'init' menjadi huruf kecil
    for (int i = 0; i < strlen(init); i++) {
        init[i] = tolower(init[i]);
    }
    kata1 = tolower(kata1);
    kata2 = tolower(kata2);
    kata3 = tolower(kata3);

    int panjang = strlen(init);
    for (int i = 0; i < panjang - 2; i++) {
        if (init[i] == kata1 && init[i + 1] == kata2 && init[i + 2] == kata3) {
            result++;
        }
    }
    std::cout << result << std::endl;
    return 0;
}