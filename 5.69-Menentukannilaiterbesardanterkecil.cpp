#include<iostream>
using namespace std;

int kecil(int nilai1,int nilai2);
int besar(int nilai1,int nilai2);

int main(){
    int angka1,angka2;
    cin >> angka1 >> angka2;

    int i=besar(angka1,angka2);
    int j=kecil(angka1,angka2);

    cout << i << " " << j;

    return 0;
}

int besar(int nilai1, int nilai2){
    if (nilai1>nilai2){
        return nilai1;
    }else{
        return nilai2;
    }
}

int kecil(int nilai1, int nilai2){
    if (nilai1<nilai2){
        return nilai1;
    }else{
        return nilai2;
    }
}