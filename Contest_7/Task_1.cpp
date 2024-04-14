#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[100];
    a[1] = 2;
    a[2] = 3;
    for (int i = 3; i <= n; i++)
        a[i] = a[i-1] + a[i-2];
    std::cout << a[n] << std::endl;
    return 0;
} 