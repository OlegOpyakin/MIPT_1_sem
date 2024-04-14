#include <iostream>

int main()
{
    int n, m, x = 0, p;
    std::cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        std::cin >> a[i][j];
    }
    for (int j = 0; j < m; j++)
    {
        int s = 0;
        for (int i = 0; i < n; i++) s=s+a[i][j];
        if (s > x)
        {
            x = s;
            p = j;
        }
    }
    std::cout << p;
    return 0;
}