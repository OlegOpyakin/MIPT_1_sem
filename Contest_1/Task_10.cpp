#include <iostream>

int main()
{
    int k1 = 0, k2 = 0;
    char c;
    do
    {
        std::cin.get(c);
        if (c == '1')
            k1 += 1;
        else if (c == '0')
            k2 += 1;
        else
        break;
    } while(true);

    std::cout << k1 << std::endl;
    return 0;
}
