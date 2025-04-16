#include <iostream>

int main() {
    int init;
    std::cin >> init;
    for (int i = 0; i < init; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}