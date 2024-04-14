#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a[100] = {0}, s[100] = {0};
    for (int i = 1; i<=n; i++) std::cin >> a[i];
    s[1] = a[1];
    s[2] = a[2];
    for (int i = 3; i <= n+1; i++)
    {
        s[i] = std::min(s[i-2], s[i-1]) + a[i];
    }
    std::cout << s[n+1] << std::endl;
    return 0;
} 