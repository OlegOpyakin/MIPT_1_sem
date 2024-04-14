#include <iostream>
#include <cmath>

int main()
{
    int x0, y0, n, m;
    std::cin >> x0 >> y0;
    m = abs(x0 - y0);
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y, x;
        std::cin >> x >> y;
        x0 = x0 + x;
        y0 = y0 + y;
        if (abs(x0 - y0) > m) m = abs(x0 - y0);
    }
    std::cout << m;
    return 0;
}