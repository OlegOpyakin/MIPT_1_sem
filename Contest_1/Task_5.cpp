#include <iostream>
int main()
{
    int a,b,ma,x;
    std::cin >> a;
    ma = 0;
    x = 0;
    for (int i = 0; i < a; i++)
    {
        std::cin >> b;
        if (abs(b) > ma){
            ma = abs(b);
            x = b;
        }

    }
    std::cout << x << std::endl;

    return 0;
}