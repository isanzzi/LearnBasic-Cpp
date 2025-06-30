#include <iostream>

int main(){
    int count;
    std::cin >> count;
    
    while(count > 0){
        if(count >= 1000){
            std::cout << "M";
            count -= 1000;
        }
        else if(count >= 900){
            std::cout << "CM";
            count -= 900;
        }
        else if(count >= 500){
            std::cout << "D";
            count -= 500;
        }
        else if(count >= 400){
            std::cout << "CD";
            count -= 400;
        }
        else if(count >= 100){
            std::cout << "C";
            count -= 100;
        }
        else if(count >= 90){
            std::cout << "XC";
            count -= 90;
        }
        else if(count >= 50){
            std::cout << "L";
            count -= 50;
        }
        else if(count >= 40){
            std::cout << "XL";
            count -= 40;
        }
        else if(count >= 10){
            std::cout << "X";
            count -= 10;
        }
        else if(count >= 9){
            std::cout << "IX";
            count -= 9;
        }
        else if(count >= 5){
            std::cout << "V";
            count -= 5;
        }
        else if(count >= 4){
            std::cout << "IV";
            count -= 4;
        }
        else if(count >= 1){
            std::cout << "I";
            count -= 1;
        }
    }
    
    return 0;
}