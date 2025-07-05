#include <iostream>
#include <cmath>

int pangkat(int ag1, int ag2);

int main(){
    int ang1, ang2;
    std::cin >> ang1 >> ang2;

    int hasil = pangkat(ang1, ang2);
    std::cout << hasil;
    return 0;
}

int pangkat(int ag1, int ag2){
    int count = static_cast<int>(pow(ag1, ag2));
    return count;
}