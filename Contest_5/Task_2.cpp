#include <iostream>

int main()
{
    int n, m, j, i;
    std::cin >> n;
    int a[1000] = {0};
    for (i = 0; i<n; i++)
        std::cin >> a[i];
    std::cin >> m;
    for (i = 0; i<n; i++){
        for (j = 0; j<n-i; j++)
            if (a[j]<a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
    }
    int p = 0;
    int g = 0;
    for (i = 0; i<n; i++)
    {
        if ((m - a[g])>=0)
        {
            m-=a[g];
            p+=1;
        }
        g+=1;
    }
    if (m == 0)
        std::cout << p << std::endl;
    else
        std::cout << "-1" << std::endl;
    return 0;
}
