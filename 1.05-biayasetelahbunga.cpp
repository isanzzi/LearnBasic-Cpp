/*Program : BiayaSetelahBunga.cpp
* Deskripsi : Menentukan Biaya yang harus dibayar
* Nama : Ihsan Fauzi
* tanggal/ versi : 24 Oktober 2024
*/

#include <iostream>
using namespace std;

int main() {
    /* Kamus Data */
    int a;
    float totalBiaya, b;
    
    /* Algoritma */
    cin >> a;
    cin >> b;
    totalBiaya = a + (a * b / 100);
    cout << totalBiaya << endl;
    
    return 0;
}
