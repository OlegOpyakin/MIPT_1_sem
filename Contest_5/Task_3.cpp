#include <iostream>

int main()
{
    int n, a[4] = { 0 }, Min = 1000;
    std::cin >> n;
    for (int i = 0; i <= 10; i++)
    {
        int s = 0;
        for (int j = 0; j <= 10; j++)
        {
            for (int l = 0; l <= 10; l++)
            {
                for (int m = 0; m <= 10; m++)
                {
                    s = i * 10 + j * 7 + l * 5 + m;
                    if (s == n)
                    {
                        int p = i + j + l + m;
                        if (p <= Min)
                        {
                            Min = p;
                            a[0] = i;
                            a[1] = j;
                            a[2] = l;
                            a[3] = m;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < a[3]; i++) std::cout << '1' << ' ';
    for (int i = 0; i < a[2]; i++) std::cout << '5' << ' ';
    for (int i = 0; i < a[1]; i++) std::cout << '7' << ' ';
    for (int i = 0; i < a[0]; i++) std::cout << "10" << ' ';
    return 0;
}
