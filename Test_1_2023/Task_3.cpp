#include <iostream>
int main()
{
    int n, a[600], num = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    if(a[0] > a[1])
        num += 1;
    if(a[n-1] > a[n-2])
        num += 1;
    for (int i = 1; i < n-1; i++)
        if (a[i] > a[i-1] and a[i]>a[i+1])
            num += 1;
    std::cout << num << std::endl;
    return 0;
}