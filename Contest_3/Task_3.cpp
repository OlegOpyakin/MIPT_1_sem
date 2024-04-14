#include <iostream>

int main()
{
    int n, x;
    std::cin >> n;
    int a[10000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        a[i] = x;
    }
    int k = 0;
    std::cin >> k;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i; j++) if (a[j + 1] > a[j])
            {
                int t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
    for (int i = k-1; i >=0; i--)
        std::cout << a[i] << " ";
    return 0;
}
