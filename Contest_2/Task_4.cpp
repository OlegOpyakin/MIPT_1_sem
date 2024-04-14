unsigned int sum_of_numbers(unsigned int n)
{
    int a = 0;
    while (n%100000000000 != 0)
    {
        a += n%10;
        n = n/10;
    }
    return a;
}