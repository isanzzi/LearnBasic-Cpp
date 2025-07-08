#include<iostream>
using namespace std;

int faktor (int ag1);

int main(){
    int ang1;
    cin >> ang1;

    int hasil=faktor(ang1);
    cout << hasil;
    return 0;
}

int faktor (int ag1){
    int count=1;
    for(int i=2;i<=ag1;i++){
        count = count*i;
    }
    return count;
}