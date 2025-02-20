#include <iostream>
using namespace std;

int main() {
    /* Kamus data */
    float volume;
    float panjang, lebar, tinggi;

    /* Algoritma */
    cin >> panjang >> lebar >> tinggi;
    
    volume = panjang * lebar * tinggi / 3;

    cout << volume << endl;
    return 0;
}