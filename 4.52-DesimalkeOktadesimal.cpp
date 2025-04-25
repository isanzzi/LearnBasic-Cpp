#include <iostream>

// decimal to octal

int main(){
    char init[] = {'0','1','2','3','4','5','6','7'};
    int temp[50];
    int desimal, i = 0;
    
    std::cin >> desimal;

    while (desimal > 0){
        temp[i] = desimal % 8;
        desimal = desimal / 8;
        i++;
    }

    for(int j = i-1; j >= 0; j--){
        int akhir = temp[j];
        std::cout << init[akhir];
    }

    return 0;
}
