#include <iostream>

int main()
{
    int n, k1 = 0, k2 = 0;
    std::cin >> n;
    while (n > 0)
    {
        if (n % 2)
            k1++;
        else
            k2++;
        n = n / 2;
    }
    if (!(k1 == 0))
    {
        for (int i = 1; i <= k1; i++)
        std::cout << "1";
        for (int j = 1; j <= k2; j++)
        std::cout << "0";
    }
    else
    std::cout << "0";
}