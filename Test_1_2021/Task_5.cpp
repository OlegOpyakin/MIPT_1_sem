unsigned int sum_ternary(unsigned int a)
{
    unsigned int s = 0, x = a;
    while (x != 0)
    {
        s += x % 3;
        x /= 3;
    }
    return s;
}