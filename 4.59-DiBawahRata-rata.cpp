#include <iostream>
#include <vector>

int main(){
    int org = 0, count = 0;
    std::cin >> org;
    
    std::vector<int> nilai(org);
    int avg = 0;

    for (int i = 0; i < org; i++){
        std::cin >> nilai[i];
        avg += nilai[i];
    }

    float hasil = static_cast<float>(avg) / org;
    for (int i = 0; i < org; i++){
        if(nilai[i] < hasil){
            count += 1;
        }
    }

    std::cout << count << std::endl;
    return 0;
}