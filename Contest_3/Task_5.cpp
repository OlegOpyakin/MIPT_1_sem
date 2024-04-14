#include <iostream>

int main()
{
    int n, a[1000], b[1000];
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    int middle = n / 2;
    for (int i = 0; i < n; i = i + 2)
        b[i] = middle + (i / 2);
    for (int j = 1; j < n; j = j + 2)
        b[j] = middle - (j / 2) - 1;
    for (int i = 0; i < n; i++) std::cout << a[b[i]] << ' ';
}