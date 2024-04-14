#include <iostream>

int main()
{
    int N, k = 0;
    double Max = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        double R, H, p, m;
        std::cin >> R >> H >> p;
        m = 3.14 * R * R * H * p;
        if (m > Max)
        {
            Max = m;
            k = i;
        }
    }
    std::cout << k;
}