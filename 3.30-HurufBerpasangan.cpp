#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string initiate = "jtkpolban"; // Menggunakan string C++ 
    char input[2];
    int bil1 = -1, bil2 = -1;

    // Memasukkan dua karakter dari input
    for (int i = 0; i < 2; i++) {
        cin >> input[i];
        input[i] = tolower(input[i]); // Konversi ke huruf kecil
    }

    // Mencari indeks karakter dalam string 'initiate'
    for (size_t j = 0; j < initiate.length(); j++) {
        if (input[0] == initiate[j]) {
            bil1 = j;
        }
        if (input[1] == initiate[j]) {
            bil2 = j;
        }
    }

    // Mengecek apakah bil1 berada tepat setelah bil2
    if (bil1 == bil2 + 1) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }

    return 0;
}
