#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}