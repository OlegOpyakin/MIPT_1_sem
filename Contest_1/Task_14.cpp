#include <iostream>
#include <string>

int nod(int a, int b)
{
    while (a != b)
    {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int nok(int a, int b)
{
    int x = a;
    int y = b;
    return x * y / nod(x, y);
}

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << nok(nok(x, y), z);
    return 0;
}