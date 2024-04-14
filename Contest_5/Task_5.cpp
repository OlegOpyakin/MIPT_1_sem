#include <iostream>

int main()
{
    int n, sum = 0;
    std::cin >> n;
    int a[1000] = {0};
    for (int i = 1; i<n+1; i++)
        std::cin >> a[i];
    int i = 0;
    while (i <=n+110){
        if (a[i+1] > a[i+2]){
            i += 2;
            sum += a[i];
        }
        if (a[i+1] <= a[i+2]){
            i += 1;
            sum += a[i];
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
