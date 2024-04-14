#include <iostream>
int main()
{
    int n, a[600], max = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    if (n == 0)
        std::cout << 0 << std::endl; 
    else{
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i-1])
        {
            j += 1;
            if (j > max)
                max = j;
        }
        else 
        {
            j=1;
        }
    }
    std::cout << max << std::endl;
    }
    return 0;
}