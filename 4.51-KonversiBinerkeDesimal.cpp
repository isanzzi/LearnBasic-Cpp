#include <iostream>
#include <string>
#include <cmath>

// biner to decimal

int main() {
    int desimal = 0, j = 0;
    std::string bin;
    std::getline(std::cin, bin);

    for(int i = bin.length() - 1; i >= 0; i--) {
        if(bin[i] == '1') {
            desimal += pow(2, j) * 1;
        }
        j++;
    }

    std::cout << desimal;

    return 0;
}
