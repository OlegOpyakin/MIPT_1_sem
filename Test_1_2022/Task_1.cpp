#include <iostream>

int main()
{
    int n, x = 0;
    int a[1000];
    std::cin >> n;

    for (int i = 0; i < n; i++) std::cin >> a[i];

    for (int i = 0; i < n; i++) 
        if ((i == 0) or (i % 2 == 0))
            x += a[i];
        else 
            x -= a[i];
    std::cout << x << std::endl;
}