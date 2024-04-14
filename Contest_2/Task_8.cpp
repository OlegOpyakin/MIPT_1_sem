unsigned long long int nonacci(unsigned int n)
{
    if (n == 0 or n == 1 or n == 2 or n == 3 or n == 4 or n == 5 or n == 6 or n == 7)
        return 0;
    if (n == 8)
        return 1;
    return nonacci(n-1) + nonacci(n-2) + nonacci(n-3) + nonacci(n-4) + nonacci(n-5) + nonacci(n-6) + nonacci(n-7) + nonacci(n-8) + nonacci(n-9);
}