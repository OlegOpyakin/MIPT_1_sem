#include <iostream>

int main()
{
    long long int n;
    float sum;
    std::cin >> n;
    sum = 0;
    long long int a[1001];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    sum = sum/n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > sum)
            std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
