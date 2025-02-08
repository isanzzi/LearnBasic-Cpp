/* Program : CelciusToFahrenheit.cpp
 * Deskripsi : Mengonversi suhu dalam celcius ke fahrenheit
 * Tanggal/ Versi : 21 Oktober 2024
 * Catatan: °F = °C × 1,8 + 32
 */

#include <iostream>
using namespace std;

int main() {
    /* Kamus Data */
    float fahrenheit, celcius;
    
    /* Algoritma */
    cin >> celcius;
    fahrenheit = celcius * 1.8 + 32;
    cout << fahrenheit;
    
    return 0;
}
