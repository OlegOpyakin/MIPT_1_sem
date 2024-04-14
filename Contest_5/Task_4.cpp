int search_rec(int x, int* array, int n)
{
    int middle;
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
        middle = (high + low)/2;
        if (x > array[middle])
        {
            low = middle + 1;
        }
        else if (x < array[middle])
        {
            high = middle - 1;
        }
        else return middle;
    }
    return -1;
}
