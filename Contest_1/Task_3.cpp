#include <iostream>
int main()
{
    int a;
    std::cin >> a;
    if (a%13 == 0)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    return 0;
}
