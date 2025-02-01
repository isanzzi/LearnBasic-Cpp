/* Program: ReamurToKelvin_Nama.cpp
 * Deskripsi: Mengonversi suhu Reamur ke Kelvin
 * Nama: Ihsan Fauzi
 * Tanggal/versi: 
 * Compiler: G++
 */

#include <iostream>
using namespace std;

int main() {
    int reamur;
    float kelvin;
    
    cin >> reamur;
    kelvin = (reamur * 1.25) + 273;
    
    cout << kelvin << endl;
    
    return 0;
}
