#include <iostream>
int main()
{
    int a;
    long long b = 1;
    std::cin >> a;
    for (int i = 1; i <= a; i+=1)
        b*=i;
    std::cout << b << std::endl;
}
