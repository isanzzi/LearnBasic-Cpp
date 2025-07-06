#include <iostream>

void swap(int *a1, int *a2);

int main(){
    int angka1, angka2;
    std::cin >> angka1 >> angka2;

    swap(&angka1, &angka2);
    std::cout << angka1 << " " << angka2;

    return 0;
}

void swap(int *a1, int *a2){
    int temp = *a1;
    *a1 = *a2;
    *a2 = temp;
}