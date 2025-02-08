/* 
Deskripsi : Mengurutkan bilangan dari x sampai y, setiap bilangan dipisahkan oleh spasi
Tanggal/versi : 21 Oktober 2024
*/

#include <iostream> // untuk input-output stream

using namespace std;

int main() {
    int x, y;
    cin >> x >> y; // input dua bilangan
    
    while (x <= y) {
        cout << x << " "; // output bilangan dipisahkan oleh spasi
        x++;
    }
    
    return 0;
}
