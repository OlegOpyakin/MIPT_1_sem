#include <iostream>

int main()
{
    int n;
    std::cin>> n;
    for (int i = 1; i <= n/2; i++)
    {
        for (int k = 1; k <= n / 2 - i + 1 ; k++)
        std::cout<< ' ';
        for (int j = 1; j <= i+i-1; j++)
        std::cout << "+";
        std::cout << std::endl;
    }
    for (int i = 1; i <= n; i++)
        std::cout << "+";
    std::cout << std::endl;
    for (int i = n/2; i >= 1; i--)
    {
        for (int k = n / 2 - i + 1; k >= 1 ; k--)
        std::cout << ' ';
        for (int j = i+i-1; j >= 1; j--)
        std::cout << "+";
        std::cout << std::endl;
    }
    return 0;
}
