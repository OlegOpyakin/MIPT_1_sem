#include <iostream>
#include <algorithm>

int main()
{
    int n, sum1 = 0, sum2 = 0, t;
    int a[1000];
    std::cin >> n;
    n = n-1;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < n - 1; i++) 
    { 
	    for (int j = 0; j < n - i - 1; j++) 
	    { 
		    if (a[j] > a[j + 1]) 
		    { 
			    int temp = a[j]; 
			    a[j] = a[j + 1]; 
			    a[j + 1] = temp; 
		    }
	    }
    }
    t = a[n-1];
    for (int i = 0; i <= t; i++) sum1 += i;
    for (int i = 0; i < n; i++) sum2 += a[i];
    std::cout << (sum1 - sum2) << std::endl;
}