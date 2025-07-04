#include <iostream>

long gcd(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int aki, aka, baki, baka;
    std::cin >> aki >> baki;
    std::cin >> aka >> baka;

    long penyebut = 0, pembilang = 0;
    if(baki == baka){
        penyebut = baki;
        pembilang = aki + aka;
    } else{
        penyebut = baki * baka;
        aki = aki * baka;
        aka = aka * baki;
        pembilang = aki + aka;
    }
    
    //perkecil pecahan
    long divisor = gcd(pembilang, penyebut);
    pembilang /= divisor;
    penyebut /= divisor;

    std::cout << pembilang << " " << penyebut;

    return 0;
}