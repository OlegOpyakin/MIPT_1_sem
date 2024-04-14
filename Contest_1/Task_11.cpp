#include <iostream>

int main()
{
    int n, k = 0, x = 1;
    std::cin >> n;
    while (k != n)
    {
        x++;
        bool f = false;
        for (int i = 2; i <= x / 2; i++)
        {
            if (!(x % i))
            {
                f = true;
                break;
            }
        }
        if (!f)
            k++;
    }
    std::cout << x;
} 