#include <iostream>

int main(){
    int init1, init2, count = 0;
    std::cin >> init1 >> init2;
    init1 = init1 + 1;

    while(init1 < init2){
        if((init1 - 4) % 10 != 0){
            count = count + 1;
        }
        init1 = init1 + 1;
    }
    
    std::cout << count;

    return 0;
}
