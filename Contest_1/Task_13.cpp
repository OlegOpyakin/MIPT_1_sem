#include <iostream>
int main()
{
    int n, k=0;
    std::cin >> n;
    int arr[65534];
    if (n != 0)
    {
        while (n)
        {
            arr[k] = n%2;
            n /= 2;
            k++;
        }
        for (int i = k-1; i>=0; i--)
        std::cout << arr[i];
    }
    else
    std::cout << 0;
}
