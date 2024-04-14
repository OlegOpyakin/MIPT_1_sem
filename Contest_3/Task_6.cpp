#include <iostream>

int main()
{
    int n, x, k1 = -1, k2 = -1;
    int a[1000], b[1000];
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x >= 0)
        {
            k1++;
            a[k1] = x;
        }
        else {
            k2++;
            b[k2] = x;
        }
    }
    for (int i = 0; i < k1; i++)
    {
        for (int j = 0; j < k1 - i; j++) if (a[j] > a[j + 1])
        {
            int t = a[j + 1];
            a[j + 1] = a[j];
            a[j] = t;
        }
    }
    for (int i = 0; i < k2; i++)
    {
        for (int j = 0; j < k2 - i; j++) if (b[j]*(-1) > b[j + 1]*(-1))
        {
            int t = b[j + 1];
            b[j + 1] = b[j];
            b[j] = t;
        }
    }
    for (int i = 0; i <= k1; i++) std::cout << a[i] << ' ';
    for (int j = 0; j <= k2; j++) std::cout << b[j] << ' ';
    return 0;
}