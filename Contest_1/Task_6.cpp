#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= m; k++)
        {
            if (i == 1 or i == n)
            {
                std::cout << "+";
            }
            else
            {
                if (k == 1 or k == m) std::cout << "+";
                else std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}