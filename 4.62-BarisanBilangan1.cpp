#include <iostream>

int main(){
    int init;
    std::cin >> init;
    int count = init;

    for (int x = 0; x < 5; x++){
        for (int j = 3; j <= 5; j++){
            if(x == 0 && j == 3){
                std::cout << count;
            }
            else{
                std::cout << " " << count;
            }
            count = count + j;
        }
    }

    return 0;
}