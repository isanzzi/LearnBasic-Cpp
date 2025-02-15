#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    /* Kamus Data */
    float luas; // variabel luas lingkaran
    float r;    // variabel jari-jari lingkaran
    
    /* Algoritma */
    
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    luas = (r * r) * 3.14;
    
    cout << "Luas lingkaran: " << fixed << setprecision(2) << luas << endl;
    
    return 0;
}