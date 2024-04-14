#include <iostream>
#include <string>

int main()
{
    int n, x, Max = -1000000, k = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
            if (Max == x) k++;
        else
            if (x > Max)
            {
                k = 1;
                Max = x;
            }
    }
    std::cout << k;
}