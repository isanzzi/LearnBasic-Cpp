/* 
Deskripsi   = Mengurutkan bilangan x sampai y
Penjelasan  = Mengurutkan bilangan x sampai y dan selalu new line tetapi di akhir tidak boleh new line
Author      = Ihsan Fauzi
Tanggal     = 21 Oktober 2024
*/

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    while (x <= y) {
        cout << x; 
        if (x < y) { 
            cout << endl; // Tambahkan newline kecuali untuk angka terakhir
        }
        x++;
    }

    return 0;
}
