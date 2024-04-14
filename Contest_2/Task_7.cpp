#include <iostream>

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long int a, b, c;
    n -=1;
    a = 0;
    b = 1;
    for (unsigned long int i = 0; i < n; i++)
    {
        c = b;
        b = a + c;
        a = c;
    }
    return a;
}