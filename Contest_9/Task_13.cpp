#include <iostream>

int main() {
    long long int n, zel, drob, i = 1, stepen = 0;
    std::cin >> n;
    n = n * 1024 *1024 - 1;

    while (i < n){
        stepen += 1;
        i *= 2;
    }

    zel = stepen / 8;
    drob = stepen % 8;

    if (drob == 0)
        std::cout << zel << std:: endl;
    else
        std::cout << zel + 1 << std:: endl;
    return 0;
}