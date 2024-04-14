#include <iostream>

int main()
{
    int n, k, a[1024] = { 0 };
    std::cin >> n;
    std::cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x, d;
        std::cin >> x >> d;
        if (x-d < 0)
            for (int j = 0; j <= x+d; j++)
                a[j] = 1;
        else if (x+d+1 >= n)
            for (int j = x-d; j < n; j++)
                a[j] = 1;
        else
            for (int j = x-d; j <= x+d; j++)
                a[j] = 1;
        
    }
    int p = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 0) p++;
    std::cout << p;
    return 0;
}