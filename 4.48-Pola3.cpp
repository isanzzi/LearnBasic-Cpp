#include <iostream>

int main(){
    int init,count=1;
    std::cin >> init;

    for (int i=1;i<=init;i++){
        for (int j=init;j>=i;j--){
            std::cout << count << " ";
            count+=1;
        }
        std::cout << std::endl;
    }
}