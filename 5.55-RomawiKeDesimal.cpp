#include <iostream>
#include <string>

int main() {
    std::string roman;
    std::cin >> roman;

    int total = 0;
    int prevValue = 0;
    int len = roman.length();

    for (int i = len - 1; i >= 0; i--) {
        char ch = roman[i];
        int currentValue;

        switch (ch) {
            case 'I': currentValue = 1; break;
            case 'V': currentValue = 5; break;
            case 'X': currentValue = 10; break;
            case 'L': currentValue = 50; break;
            case 'C': currentValue = 100; break;
            case 'D': currentValue = 500; break;
            case 'M': currentValue = 1000; break;
            default: 
                std::cout << "Input tidak valid." << std::endl;
                return 1; 
        }

        // Jika nilai saat ini lebih besar dari nilai sebelumnya, kita kurangi dua kali nilai sebelumnya
        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }
        prevValue = currentValue;
    }

    std::cout << total;
    return 0;
}
