#include <iostream>

int kali(int ag1, int ag2);

int main(){
    int ang1, ang2;
    std::cin >> ang1 >> ang2;

    int hasil = kali(ang1, ang2);
    std::cout << hasil;
    return 0;
}

int kali(int ag1, int ag2){
    int count = ag1 * ag2;
    return count;