#include <iostream>
using namespace std;

int main(){
    int desimal, bin[100], i=0;
    
    cin >> desimal;

    while (desimal > 0){
        bin[i] = desimal % 2;
        desimal = desimal / 2;
        i++;
    }
    int simpan = i;

    for(int j = simpan - 1; j >= 0; j--){
        cout << bin[j];
    }

    return 0;
}