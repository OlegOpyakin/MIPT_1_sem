unsigned int sum_ternary(unsigned int a)
{
    int b = 0;
    while (a%10000000000 != 0)
    {
        b += a%3;
        a /= 3;
    }
    return b;
}