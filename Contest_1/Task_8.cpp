#include <iostream>
int main()
{
    int a;
    std::cin >> a;
    for (int i = 1; i <= a; i+=1)
    {
        if (a%i == 0)
            std::cout << i << " ";
    }
}
