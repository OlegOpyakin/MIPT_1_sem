unsigned long long int factorial(unsigned int n)
{
    unsigned long long int a = 1;
    for (unsigned long long int i = 1; i <= n; i+=1)
        a*=i;
    return a;
}