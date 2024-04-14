#include <iostream>

int main()
{
    int n, m;
    char p;
    std::cin >> n >> m;
    std::cin.get(p);
    char a[25][25];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            char c;
            std::cin.get(c);
            if (c != '\n')
            {
                a[i][j] = c;
            }
        }
    }
    for (int i = m-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        std::cout << a[j][i];
        std::cout << std::endl;
    }
    return 0;
}