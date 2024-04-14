#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    int a[1000] = {0}, s[1000] = {0};
    for (int i = 1; i<=n; i++) std::cin >> a[i];
    s[1] = a[1];
    s[2] = std::max(a[2], s[1] + a[2]);
    s[3] = std::max(std::max(a[3], s[2]+a[3]), s[1]+a[3]);
    for (int i = 4; i <= n+4; i++)
    {
        s[i] = std::max(std::max(s[i-3], s[i-2]),s[i-1]) + a[i];
    }
    std::cout << s[n+4] << std::endl;
    return 0;
} 