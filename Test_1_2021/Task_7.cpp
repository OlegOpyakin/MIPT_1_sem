#include <iostream>

int main()
{
    int n, a[100000] = { 0 }, x, y, Max = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        for (int j = x; j < y; j++)
        a[j]++;
    }
    for (int i = 0; i < 100000; i++)
    if (a[i] > Max) Max = a[i];
    std::cout << Max;
    return 0;
}