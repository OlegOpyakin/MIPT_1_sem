unsigned int count_wounded(Protoss* army, unsigned int n, unsigned int threshold)
{
    unsigned int k = 0;
    for (unsigned int i = 0; i < n; i++)
        if (army[i].health < threshold) k++;
    return k;
}