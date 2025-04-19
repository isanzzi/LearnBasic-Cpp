#include <iostream>
#include <vector>

int main(){
    int bars, kol, count;
    std::cin >> bars >> kol;
    
    std::vector<std::vector<int>> papan1(bars, std::vector<int>(kol));
    std::vector<std::vector<int>> papan2(bars, std::vector<int>(kol));

    count = 1; //atas ke bawah
    for (int i = 0; i < kol; i++){
        for (int j = 0; j < bars; j++){
            papan1[j][i] = count;
            count = count + 1;
        }
    }

    count = 1; //bawah ke atas
    for(int i = 0; i < kol; i++){
        for (int j = bars-1; j >= 0; j--){
            papan2[j][i] = count;
            count = count + 1;
        }
    }

    for (int i = 0; i < bars; i++){
        for (int j = 0; j < kol; j++){
            if(j % 2 == 1){
                std::cout << papan2[i][j] << " ";
            }
            if(j % 2 == 0){
                std::cout << papan1[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}