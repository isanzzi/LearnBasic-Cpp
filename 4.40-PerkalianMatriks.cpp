/*
Nama    : Ihsan Fauzi
Kelas   : 1B-D4
*/

#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    
    cin >> a1 >> b1;
    int papan1[a1][b1];
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < b1; j++) {
            cin >> papan1[i][j];
        }
    }

    cin >> a2 >> b2;
    int papan2[a2][b2];
    for (int i = 0; i < a2; i++) {
        for (int j = 0; j < b2; j++) {
            cin >> papan2[i][j];
        }
    }

    int papan3[a1][b2];
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < b2; j++) {
            int sum = 0;
            for (int k = 0; k < b1; k++) {
                sum += papan1[i][k] * papan2[k][j];
            }
            papan3[i][j] = sum;

            if (j == 0) {
                cout << papan3[i][j];
            } else {
                cout << " " << papan3[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}
