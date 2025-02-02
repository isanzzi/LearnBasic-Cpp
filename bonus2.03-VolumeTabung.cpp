/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <iostream>
using namespace std;

int main() {
    int r, t;
    float hasil;
    cin >> r >> t;
    hasil = (float) r * r * t * 3.14;
    
    int temp = hasil * 100;
    float output = temp / 100.0;
    
    cout << output << endl;
    
    return 0;
}
